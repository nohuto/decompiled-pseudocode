/*
 * XREFs of BgpGxRectangleCreate @ 0x1406DB7C0
 * Callers:
 *     BgpGxConvertRectangle @ 0x14011CB14 (BgpGxConvertRectangle.c)
 *     BgpGxParseBitmap @ 0x1406D9990 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x1406D9D10 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x1406D9EBC (BgpGxFindSubRectangle.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 *     BgpGxBlendRectangle @ 0x1406DEF28 (BgpGxBlendRectangle.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x14011E8A0 (GxpBitsToBytes.c)
 */

__int64 __fastcall BgpGxRectangleCreate(_DWORD *a1, int a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int v7; // ebp
  __int64 Memory; // rax

  v4 = 0;
  v7 = GxpBitsToBytes(a1[1] * a2 * *a1);
  Memory = BgpFwAllocateMemory((unsigned int)(v7 + 72));
  if ( Memory )
  {
    *(_DWORD *)Memory = a1[1];
    *(_DWORD *)(Memory + 4) = *a1;
    *(_QWORD *)(Memory + 24) = Memory + 72;
    *(_DWORD *)(Memory + 8) = a2;
    *(_DWORD *)(Memory + 16) = 0;
    *(_DWORD *)(Memory + 12) = v7;
    *a3 = Memory;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
