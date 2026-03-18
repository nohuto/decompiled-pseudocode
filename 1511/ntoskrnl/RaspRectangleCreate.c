/*
 * XREFs of RaspRectangleCreate @ 0x14011D5C8
 * Callers:
 *     BgpRasPrintGlyph @ 0x14011C50C (BgpRasPrintGlyph.c)
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 * Callees:
 *     BgpGxInitializeRectangle @ 0x14011D63C (BgpGxInitializeRectangle.c)
 *     RaspAllocateMemory @ 0x14011E308 (RaspAllocateMemory.c)
 */

__int64 __fastcall RaspRectangleCreate(_DWORD *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 Memory; // r8
  __int64 result; // rax
  __int64 v9; // r8

  v6 = (((a2 * *a1 * a1[1] + 7) & 0xFFFFFFF8) >> 3) + 72;
  Memory = RaspAllocateMemory(v6);
  if ( !Memory )
    return 3221225495LL;
  result = BgpGxInitializeRectangle(a1, a2, Memory, v6);
  *a3 = v9;
  return result;
}
