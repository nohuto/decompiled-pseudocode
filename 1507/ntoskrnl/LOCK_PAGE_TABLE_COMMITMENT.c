/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14008B640
 * Callers:
 *     MiCloneReserveVadCommit @ 0x14000158C (MiCloneReserveVadCommit.c)
 *     MiSplitPrivatePage @ 0x140008EC0 (MiSplitPrivatePage.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiSplitReducedCommitClonePage @ 0x1402141F4 (MiSplitReducedCommitClonePage.c)
 *     MmAssignProcessToJob @ 0x14041AD30 (MmAssignProcessToJob.c)
 *     MiReturnPageTablePageCommitment @ 0x1404B7F80 (MiReturnPageTablePageCommitment.c)
 *     MiInsertVadCharges @ 0x1404B8410 (MiInsertVadCharges.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (volatile signed __int32 *)(a2 + 880);
  result = KeAbPreAcquire(a2 + 880, 0LL, 0LL, a4);
  v6 = result;
  if ( _interlockedbittestandset64(v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, v4);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
