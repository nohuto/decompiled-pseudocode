/*
 * XREFs of MiRotateHeadWsle @ 0x1400B6674
 * Callers:
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiSimpleAging @ 0x1400EB918 (MiSimpleAging.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 */

__int64 __fastcall MiRotateHeadWsle(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 16 * (a2 + 15LL));
  if ( v2 != 0xFFFFFFFFFLL )
  {
    v3 = *(_QWORD *)(a1 + 496) + 16 * v2;
    MiRemoveEntryWsle(a1, v3);
    MiInsertWsle(v4, v3, 0LL);
  }
  return v2;
}
