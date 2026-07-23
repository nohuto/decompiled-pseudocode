/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14005D6F0
 * Callers:
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006E890 (IoReferenceIoAttributionFromThread.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400E9DD0 (IoSetDiskIoAttributionFromThread.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     PfpServiceMainThreadUnboost @ 0x140114B20 (PfpServiceMainThreadUnboost.c)
 *     MiDereferencePartitionFinal @ 0x1401F1798 (MiDereferencePartitionFinal.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     CmpRunDownCmRM @ 0x1404BCEDC (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     ObpDeleteDirectoryObject @ 0x1404C632C (ObpDeleteDirectoryObject.c)
 *     CmpDelayedDerefKeys @ 0x1404F7F1C (CmpDelayedDerefKeys.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140534B20 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
