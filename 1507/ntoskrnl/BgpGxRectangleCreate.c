/*
 * XREFs of BgpGxRectangleCreate @ 0x14075E808
 * Callers:
 *     BgpGxConvertRectangle @ 0x140150D94 (BgpGxConvertRectangle.c)
 *     BgpGxParseBitmap @ 0x14075C9D8 (BgpGxParseBitmap.c)
 *     BgpGxReadRectangle @ 0x14075CD58 (BgpGxReadRectangle.c)
 *     BgpGxFindSubRectangle @ 0x14075CF04 (BgpGxFindSubRectangle.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 *     BgpGxBlendRectangle @ 0x140761FA4 (BgpGxBlendRectangle.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     GxpBitsToBytes @ 0x140152B20 (GxpBitsToBytes.c)
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
