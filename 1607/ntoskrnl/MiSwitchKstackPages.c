/*
 * XREFs of MiSwitchKstackPages @ 0x1401E6638
 * Callers:
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiStackTheftIsr @ 0x1401E6498 (MiStackTheftIsr.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
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
