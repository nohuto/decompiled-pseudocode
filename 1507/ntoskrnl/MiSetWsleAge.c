/*
 * XREFs of MiSetWsleAge @ 0x14008090C
 * Callers:
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiTrimThisWsle @ 0x140081700 (MiTrimThisWsle.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 */

__int64 __fastcall MiSetWsleAge(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rcx

  MiRemoveEntryWsle();
  *a2 ^= (*(_DWORD *)a2 ^ (a3 << 9)) & 0xE00;
  return MiInsertWsle(v5, a2, 0LL);
}
