/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BF50
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
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
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (volatile signed __int32 *)(a2 + 880);
  result = KeAbPreAcquire(a2 + 880);
  v4 = result;
  if ( _interlockedbittestandset64(v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, v2);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
