/*
 * XREFs of MiSplitLargePfnBitMap @ 0x140520918
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 */

__int64 __fastcall MiSplitLargePfnBitMap(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (a1 + a2 + 511) >> 9;
  result = MiSplitBitmapPages(
             9u,
             qword_1402FF6E8[0] + (a1 >> 12),
             8 * (qword_1402FF6E8[0] + ((v2 + 7) >> 3) - (qword_1402FF6E8[0] + (a1 >> 12))));
  if ( (_DWORD)result )
  {
    if ( v2 > qword_1402FF6E0 )
      qword_1402FF6E0 = v2;
    return 1LL;
  }
  return result;
}
