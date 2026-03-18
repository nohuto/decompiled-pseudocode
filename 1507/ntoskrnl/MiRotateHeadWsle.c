/*
 * XREFs of MiRotateHeadWsle @ 0x140081B34
 * Callers:
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1401271B8 (MiSimpleAging.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
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
