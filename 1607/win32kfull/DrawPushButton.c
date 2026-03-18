/*
 * XREFs of DrawPushButton @ 0x1C00AE7EC
 * Callers:
 *     DrawFrameControl @ 0x1C005F534 (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 * Callees:
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v8; // r14d
  HBRUSH v9; // rbx
  int result; // eax
  RECT v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = *a2;
  DrawEdge(a1, &v11, (a3 & 0x600) != 0 ? 10 : 5, a4 & 0xD000 | 0x200F);
  v8 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 8676LL) < 8u || *(_DWORD *)(gpsi + 5040LL) == 0xFFFFFF )
    {
      v9 = *(HBRUSH *)(gpsi + 5336LL);
      GreSetBkColor(a1);
      GreSetTextColor(a1);
      v8 = 1;
    }
    else
    {
      v9 = *(HBRUSH *)(gpsi + 5248LL);
    }
  }
  else
  {
    v9 = *(HBRUSH *)(gpsi + 5208LL);
  }
  result = FillRect(a1, &v11, v9);
  if ( v8 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v11;
  return result;
}
