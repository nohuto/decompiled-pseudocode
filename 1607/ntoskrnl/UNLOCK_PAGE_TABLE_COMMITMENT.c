/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140029D40
 * Callers:
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     MiSplitPrivatePage @ 0x1400988C0 (MiSplitPrivatePage.c)
 *     MmAssignProcessToJob @ 0x1400B934C (MmAssignProcessToJob.c)
 *     MiCloneReserveVadCommit @ 0x14010CB38 (MiCloneReserveVadCommit.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2F58 (MiSplitReducedCommitClonePage.c)
 *     MiInsertVadCharges @ 0x14042FE40 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140434210 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404CD4BC (MiDeleteTebRange.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 result; // rax

  v3 = a2 + 880;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 880);
  KeAbPostRelease(v3);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
