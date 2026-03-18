/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x14005DB70
 * Callers:
 *     MmFreeAccessPfnBuffer @ 0x140006704 (MmFreeAccessPfnBuffer.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     IoReferenceIoAttributionFromThread @ 0x14006ED10 (IoReferenceIoAttributionFromThread.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CFCF4 (CcDereferenceSharedCacheMapFileObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400EBF60 (IoSetDiskIoAttributionFromThread.c)
 *     PfpServiceMainThreadUnboost @ 0x1401145B0 (PfpServiceMainThreadUnboost.c)
 *     MiDereferencePartitionFinal @ 0x1401F196C (MiDereferencePartitionFinal.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 *     CmpFreePostBlock @ 0x14049A988 (CmpFreePostBlock.c)
 *     CmpRunDownCmRM @ 0x1404D98D8 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     ObpDeleteDirectoryObject @ 0x1404E33C8 (ObpDeleteDirectoryObject.c)
 *     CmpDelayedDerefKeys @ 0x140514B2C (CmpDelayedDerefKeys.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405345E0 (PfpServiceMainThreadBoostPrep.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
