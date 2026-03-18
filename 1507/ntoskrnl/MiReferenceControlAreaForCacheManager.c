/*
 * XREFs of MiReferenceControlAreaForCacheManager @ 0x14008707C
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     MiBuildWakeList @ 0x140088660 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x1400886B0 (MiRemoveUnusedSegment.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiReferenceControlAreaForCacheManager(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h]

  v10 = a3;
  v3 = MiLockSectionControlArea(*(_QWORD **)(a1 + 40), (a2 & 0x1000000) == 0, &v9);
  v4 = v3;
  if ( !v3 )
    return 3221225473LL;
  if ( (*(_DWORD *)(v3 + 56) & 3) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3 + 72, retaddr);
    else
      *(_DWORD *)(v3 + 72) = 0;
    __writecr8(v9);
    return 3221225473LL;
  }
  v5 = MiBuildWakeList(v3, 4LL);
  ++*(_QWORD *)(v4 + 24);
  v6 = v5;
  MiRemoveUnusedSegment(v4);
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(v4 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(v4 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 72, retaddr);
  else
    *(_DWORD *)(v4 + 72) = 0;
  __writecr8(v9);
  MiReleaseControlAreaWaiters(v6);
  return 0LL;
}
