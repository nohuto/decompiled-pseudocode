/*
 * XREFs of DrawBox @ 0x1C0050D40
 * Callers:
 *     DrawFrameControl @ 0x1C00564A4 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     FlipUserTextOutW @ 0x1C00F98C0 (FlipUserTextOutW.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, LPCRECT a2, __int16 a3)
{
  unsigned __int16 *v4; // r14
  BOOL v7; // r13d
  const wchar_t *v8; // rcx
  LONG top; // r9d
  int v10; // r10d
  int v11; // eax
  int v12; // ecx
  int v13; // r15d
  int v14; // r12d
  unsigned __int16 *v15; // r14
  __int64 i; // rbx
  HBRUSH *v18; // r8

  v4 = L"nmlkji";
  v7 = (a3 & 0x708) == 1032;
  if ( (a3 & 2) != 0 )
  {
    v18 = (HBRUSH *)ghbrWhite;
    goto LABEL_16;
  }
  if ( (a3 & 1) != 0 )
  {
    v18 = (HBRUSH *)ghbrBlack;
LABEL_16:
    FillRect(a1, a2, *v18);
    goto LABEL_6;
  }
  v8 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v8 = L"nmlkji";
  v4 = (unsigned __int16 *)v8;
LABEL_6:
  top = a2->top;
  v10 = a2->bottom - top;
  v11 = a2->right - a2->left;
  v12 = v10;
  if ( v11 < v10 )
    v12 = a2->right - a2->left;
  v13 = a2->left + (v11 - v12) / 2;
  v14 = top + (v10 - v12) / 2;
  if ( v7 && (*(_WORD *)(gpsi + 7284LL) < 8u || *(_DWORD *)(gpsi + 3648LL) == 0xFFFFFF) )
  {
    GreSetBkColor(a1);
    GreSetTextColor(a1);
    GrePolyPatBlt(a1);
    GreSetBkColor(a1);
  }
  else
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v13, v14, 0, 0LL, v4, 1, 0LL, 0LL, 0);
  }
  v15 = v4 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v13, v14, 0, 0LL, v15++, 1, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    GreSetTextColor(a1);
    FlipUserTextOutW(a1, v13, v14, v15);
  }
  GreSetTextColor(a1);
  return 1LL;
}
