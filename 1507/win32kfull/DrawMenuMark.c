/*
 * XREFs of DrawMenuMark @ 0x1C004F298
 * Callers:
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GetCaptionChar @ 0x1C0056C94 (GetCaptionChar.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     FlipUserTextOutW @ 0x1C00F98C0 (FlipUserTextOutW.c)
 */

__int64 __fastcall DrawMenuMark(HDC a1, LPCRECT a2, int a3, unsigned int a4)
{
  LONG top; // edi
  int v6; // eax
  int v8; // r11d
  int v9; // r10d
  int v11; // r12d
  int v12; // ebx
  unsigned __int16 CaptionChar; // ax
  unsigned __int16 v15; // [rsp+70h] [rbp+18h] BYREF

  top = a2->top;
  v6 = a2->right - a2->left;
  v8 = a2->bottom - top;
  v9 = v8;
  if ( v6 < v8 )
    v9 = a2->right - a2->left;
  v11 = a2->left + (v6 - v9) / 2 - (v6 > 11);
  v12 = top + (v8 - v9) / 2;
  FillRect(a1, a2, ghbrWhite);
  GreSetTextColor(a1);
  if ( a3 == 2 )
  {
    if ( (a4 & 1) != 0 )
    {
      CaptionChar = 97;
    }
    else if ( (a4 & 2) != 0 )
    {
      CaptionChar = 104;
    }
    else if ( (a4 & 4) != 0 )
    {
      CaptionChar = 119;
    }
    else
    {
      CaptionChar = 56;
    }
  }
  else
  {
    CaptionChar = GetCaptionChar(a4);
  }
  v15 = CaptionChar;
  FlipUserTextOutW(a1, v11, v12, &v15);
  GreSetTextColor(a1);
  return 1LL;
}
