/*
 * XREFs of MiRotateHeadWsle @ 0x140016970
 * Callers:
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1400AA7CC (MiSimpleAging.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 */

__int64 __fastcall MiRotateHeadWsle(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (a2 + 10LL));
  if ( v3 != 0xFFFFFFFFFLL )
  {
    v4 = *(_QWORD *)(MiGetSharedWorkingSetList(a1) + 80) + 16 * v3;
    MiRemoveEntryWsle(v5, v4);
    MiInsertWsle(a1, v4, 0LL);
  }
  return v3;
}
