/*
 * XREFs of ObpPushStackInfo @ 0x1401FEDC0
 * Callers:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140013580 (ObReferenceObjectByPointerWithTag.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     IopQueueIrpToFileObject @ 0x140030960 (IopQueueIrpToFileObject.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006ADC0 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectEx @ 0x140074E7C (ObDereferenceObjectEx.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     ObReferenceObjectByPointer @ 0x14007F760 (ObReferenceObjectByPointer.c)
 *     ObReferenceObjectSafe @ 0x14008C540 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x140096540 (ObReferenceObjectExWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400C48F0 (IoGetAttachedDeviceReference.c)
 *     ObFastReplaceObject @ 0x1400CCF54 (ObFastReplaceObject.c)
 *     IopQueueWorkItemProlog @ 0x1400D1408 (IopQueueWorkItemProlog.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     ObpLockDirectoryExclusive @ 0x1400D1570 (ObpLockDirectoryExclusive.c)
 *     PsImpersonateContainerOfThread @ 0x1400D1630 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D3F30 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400ED7E0 (NtAssociateWaitCompletionPacket.c)
 *     NtCancelTimer @ 0x1400EDFA0 (NtCancelTimer.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     ExpSetTimer @ 0x1400EF85C (ExpSetTimer.c)
 *     ExTimerRundown @ 0x1400F0A4C (ExTimerRundown.c)
 *     IopDropIrp @ 0x1400F788C (IopDropIrp.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     PspReferenceCidTableEntry @ 0x1404208A0 (PspReferenceCidTableEntry.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     ObReferenceFileObjectForWrite @ 0x140446E50 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140450D80 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     ObpReferenceProcessObjectByHandle @ 0x14050D1B0 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     MmCanThreadFault @ 0x140051620 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 *     RtlCaptureStackBackTrace @ 0x140084730 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1401FECC4 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x140225D84 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x140667F70 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v8; // ax
  USHORT v9; // ax
  BOOL CanThreadFault; // eax
  int v11; // r9d
  int v12; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  if ( (xmmword_1403AA2D0 & 0x80u) != 0LL )
  {
    v8 = 4402;
    if ( !a2 )
      v8 = 4403;
    EtwTraceObjectOperation(v8, a1);
  }
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 )
  {
    if ( (unsigned __int8)KeAreInterruptsEnabled() )
    {
      if ( KeGetCurrentIrql() <= 2u )
      {
        v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
        if ( v9 )
        {
          if ( v9 < 0x10u )
            memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
          _InterlockedExchangeAdd(&ObpStackSequence, 1u);
          CanThreadFault = MmCanThreadFault();
          LOBYTE(v12) = a2;
          if ( CanThreadFault )
            ObpPushRefDerefInfo(a1, v12, a3, v11, BackTrace, a4);
          else
            ObpDeferPushRefDerefInfo(a1, a2, a3, v11, (struct _SLIST_ENTRY *)BackTrace, a4);
        }
      }
    }
  }
}
