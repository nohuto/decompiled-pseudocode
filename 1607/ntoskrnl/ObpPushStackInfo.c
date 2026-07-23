/*
 * XREFs of ObpPushStackInfo @ 0x1401FEBEC
 * Callers:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140013100 (ObReferenceObjectByPointerWithTag.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     IopQueueIrpToFileObject @ 0x1400304E0 (IopQueueIrpToFileObject.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14006A940 (ObReferenceObjectSafeWithTag.c)
 *     ObDereferenceObjectEx @ 0x140074EFC (ObDereferenceObjectEx.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     ObReferenceObjectByPointer @ 0x14007F7E0 (ObReferenceObjectByPointer.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     IopQueueWorkItemProlog @ 0x1400CF2A8 (IopQueueWorkItemProlog.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF410 (ObpLockDirectoryExclusive.c)
 *     PsImpersonateContainerOfThread @ 0x1400CF4D0 (PsImpersonateContainerOfThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400EB670 (NtAssociateWaitCompletionPacket.c)
 *     NtCancelTimer @ 0x1400EBE20 (NtCancelTimer.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     ExTimerRundown @ 0x1400EE89C (ExTimerRundown.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     PspReferenceCidTableEntry @ 0x14041F760 (PspReferenceCidTableEntry.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     ObReferenceFileObjectForWrite @ 0x140445D20 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404F0140 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     MmCanThreadFault @ 0x1400511A0 (MmCanThreadFault.c)
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x1401FEAF0 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x140225BB0 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x140668054 (ObpPushRefDerefInfo.c)
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
            ObpDeferPushRefDerefInfo(a1, a2, a3, v11, (_SLIST_ENTRY *)BackTrace, a4);
        }
      }
    }
  }
}
