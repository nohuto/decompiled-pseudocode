/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400610B0
 * Callers:
 *     MiSplitPrivatePage @ 0x14001E7D0 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiCloneReserveVadCommit @ 0x14009AA54 (MiCloneReserveVadCommit.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1401D2E94 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x1403E8528 (MmAssignProcessToJob.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiReturnPageTablePageCommitment @ 0x140415AD0 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x140415EF0 (MiInsertVadCharges.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404A9390 (MiDeleteTebRange.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  v3 = a2 + 880;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 880));
  KeAbPostRelease(v3);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(v4);
  }
  return result;
}
