/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140475F20
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140475F0C (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x1405C26D4 (NtListenPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x14047652C (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v9; // r15
  _BYTE *v10; // rax
  int v11; // edi
  PVOID v12; // rsi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v16; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v18[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeGetCurrentThread()->gap0[10];
  if ( v9 )
  {
    v10 = ReceiveMessage;
    if ( ((unsigned __int8)ReceiveMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ReceiveMessage >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[39] = v10[39];
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v9, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = Object;
    v18[0] = Object;
    LODWORD(v18[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v18[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v18[6]) = 65541, v16 = AlpcpSendMessage(v18, ReplyMessage, 0LL, v9))
        : (LODWORD(v18[6]) = 4, v16 = AlpcpReplyLegacySynchronousRequest(v18, ReplyMessage, v9)),
          v11 = v16,
          v16 < 0) )
    {
      ObfDereferenceObject(v12);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v18, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v18);
      ObfDereferenceObject(v12);
    }
  }
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v11;
}
