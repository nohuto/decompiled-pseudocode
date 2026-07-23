/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x14049D380
 * Callers:
 *     NtReplyWaitReceivePort @ 0x14049D36C (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x14058139C (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14049D7BC (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14049D884 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r15
  int v11; // ebx
  PVOID v12; // rdi
  int v14; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread()->gap0[10];
  if ( v10 )
    AlpcpProbeForWriteMessageHeader(ReceiveMessage, 0LL);
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v10, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = Object;
    v16[0] = Object;
    LODWORD(v16[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v16[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v16[6]) = 65541, v14 = AlpcpSendMessage((__int64)v16, (__m256i *)ReplyMessage, 0LL, v10))
        : (LODWORD(v16[6]) = 4, v14 = AlpcpReplyLegacySynchronousRequest(v16, ReplyMessage, v10)),
          v11 = v14,
          v14 < 0) )
    {
      ObfDereferenceObject(v12);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v16, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v16);
      ObfDereferenceObject(v12);
    }
  }
  KeLeaveCriticalRegion();
  return v11;
}
