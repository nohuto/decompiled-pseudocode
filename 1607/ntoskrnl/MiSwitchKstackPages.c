/*
 * XREFs of MiSwitchKstackPages @ 0x1401E680C
 * Callers:
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x1401E666C (MiStackTheftIsr.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x140107B40 (MiCopyPfnEntry.c)
 */

unsigned __int64 __fastcall MiSwitchKstackPages(__int64 a1, __int128 *a2)
{
  __int64 v2; // r9
  unsigned __int64 result; // rax

  MiCopyPfnEntry(a1, a2);
  *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0xF8 | 6;
  result = *(_QWORD *)(v2 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  *(_QWORD *)(v2 + 40) = result;
  return result;
}
