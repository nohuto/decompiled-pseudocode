/*
 * XREFs of MiSetWsleAge @ 0x1400BBB24
 * Callers:
 *     MiTrimThisWsle @ 0x1400164E0 (MiTrimThisWsle.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 */

__int64 __fastcall MiSetWsleAge(__int64 a1, _QWORD *a2, int a3)
{
  MiRemoveEntryWsle(a1, a2);
  *a2 ^= (*(_DWORD *)a2 ^ (a3 << 9)) & 0xE00;
  return MiInsertWsle(a1, a2, 0LL);
}
