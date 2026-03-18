/*
 * XREFs of MiSetWsleAge @ 0x1400BDC94
 * Callers:
 *     MiTrimThisWsle @ 0x140016960 (MiTrimThisWsle.c)
 *     MiActOnPte @ 0x1400BBC88 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140100DD4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9EEC (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400E2580 (MiRemoveEntryWsle.c)
 */

__int64 __fastcall MiSetWsleAge(__int64 a1, _QWORD *a2, int a3)
{
  MiRemoveEntryWsle(a1, a2);
  *a2 ^= (*(_DWORD *)a2 ^ (a3 << 9)) & 0xE00;
  return MiInsertWsle(a1, a2, 0LL);
}
