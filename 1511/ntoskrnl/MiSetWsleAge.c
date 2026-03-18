/*
 * XREFs of MiSetWsleAge @ 0x1400BACAC
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400E42B4 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 */

void __fastcall MiSetWsleAge(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx

  MiRemoveEntryWsle(a1, a2);
  *a2 = (*(_DWORD *)a2 ^ (a3 << 9)) & 0xE00 ^ (unsigned __int64)*a2;
  MiInsertWsle(v5, (unsigned __int64 *)a2, 0);
}
