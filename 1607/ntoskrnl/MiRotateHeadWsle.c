/*
 * XREFs of MiRotateHeadWsle @ 0x140016DF0
 * Callers:
 *     MiTrimWorkingSet @ 0x140016210 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1400AC264 (MiSimpleAging.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140100DD4 (MiReplaceWorkingSetEntryLarge.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiInsertWsle @ 0x1400E2090 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E2580 (MiRemoveEntryWsle.c)
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
