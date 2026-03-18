/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x1404234B0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140423494 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x14054B264 (NtListenPort.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x14042338C (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140423900 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
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
    AlpcpProbeForWriteMessageHeader((ULONG64)ReceiveMessage, 0);
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v10, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = Object;
    v16[0] = Object;
    LODWORD(v16[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v16[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v16[6]) = 65541, v14 = AlpcpSendMessage(v16, ReplyMessage, 0LL, v10))
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
