/*
 * XREFs of MiReferenceControlAreaForCacheManager @ 0x140021098
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14002144C (MiLockSectionControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 */

__int64 __fastcall MiReferenceControlAreaForCacheManager(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  KIRQL OldIrql; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+40h] [rbp+18h]

  v9 = a3;
  v3 = MiLockSectionControlArea(*(_QWORD *)(a1 + 40), (a2 & 0x1000000) == 0, &OldIrql);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72), OldIrql);
    return 3221225473LL;
  }
  v5 = MiBuildWakeList(v3, 4LL);
  ++*(_QWORD *)(v4 + 24);
  v6 = v5;
  MiRemoveUnusedSegment(v4);
  if ( (v9 & 1) != 0 )
    *(_DWORD *)(v4 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(v4 + 48);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72), OldIrql);
  MiReleaseControlAreaWaiters(v6);
  return 0LL;
}
