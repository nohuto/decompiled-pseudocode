/*
 * XREFs of DrawPushButton @ 0x1C0016FE4
 * Callers:
 *     DrawFrameControl @ 0x1C0018084 (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C0144F0C (DrawThumb2.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v7; // esi
  int v8; // ebp
  int v10; // r14d
  HBRUSH v11; // rbx
  int result; // eax
  RECT v13; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0;
  v13 = *a2;
  v8 = 0;
  DrawEdge(a1);
  v10 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 7284LL) < 8u || *(_DWORD *)(gpsi + 3648LL) == 0xFFFFFF )
    {
      v11 = *(HBRUSH *)(gpsi + 3944LL);
      v7 = GreSetBkColor(a1, *(_DWORD *)(gpsi + 3648LL));
      v8 = GreSetTextColor(a1, *(_DWORD *)(gpsi + 3628LL));
      v10 = 1;
    }
    else
    {
      v11 = *(HBRUSH *)(gpsi + 3856LL);
    }
  }
  else
  {
    v11 = *(HBRUSH *)(gpsi + 3816LL);
  }
  result = FillRect(a1, &v13, v11);
  if ( v10 )
  {
    GreSetBkColor(a1, v7);
    result = GreSetTextColor(a1, v8);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v13;
  return result;
}
