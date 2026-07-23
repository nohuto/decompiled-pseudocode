/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0
 * Callers:
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiSplitPrivatePage @ 0x1400980C0 (MiSplitPrivatePage.c)
 *     MmAssignProcessToJob @ 0x1400B71DC (MmAssignProcessToJob.c)
 *     MiCloneReserveVadCommit @ 0x14010A8B8 (MiCloneReserveVadCommit.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
 *     MiInsertVadCharges @ 0x14042ED10 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1404330E0 (MiReturnPageTablePageCommitment.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiDeleteTebRange @ 0x1404B2EE8 (MiDeleteTebRange.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
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
