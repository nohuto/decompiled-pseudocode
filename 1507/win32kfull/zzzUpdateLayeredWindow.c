/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C0058F3C
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C010471C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C010DF3C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C0223B94 (zzzMoveShadow.c)
 * Callees:
 *     RecreateRedirectionBitmap @ 0x1C000B580 (RecreateRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0059308 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C005945C (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     OffsetChildren @ 0x1C00EA6A4 (OffsetChildren.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7554 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E7E34 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        __m128i *a1,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  HSURF v10; // rdi
  __m128i v11; // xmm6
  __m128i v14; // xmm7
  int v16; // esi
  int v17; // r14d
  unsigned int v18; // ebp
  int v19; // r8d
  int v20; // r15d
  int updated; // r14d
  DWORD LowPart; // eax
  int v24; // eax
  int v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+68h] [rbp-60h] BYREF
  int v27; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v28; // [rsp+D8h] [rbp+10h]
  const struct tagPOINT *v29; // [rsp+E0h] [rbp+18h]

  v29 = a3;
  v28 = a2;
  v10 = 0LL;
  v11 = a1[7];
  v26 = 0LL;
  v14 = a1[8];
  v16 = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (a1[18].m128i_i32[0] & 0x40) != 0 )
  {
    if ( (a1[3].m128i_i8[3] & 0x20) != 0 )
      UnsetRedirectedWindow((struct tagWND *)a1);
    a1[18].m128i_i32[0] &= ~0x40u;
  }
  if ( (a1[3].m128i_i8[2] & 8) == 0 || (a1[18].m128i_i32[0] & 0x20) != 0 )
    return 3221225485LL;
  if ( !GetRedirectionBitmap(a1) )
  {
    v17 = 0;
    goto LABEL_7;
  }
  v17 = 1;
  if ( (GetRedirectionFlags(a1) & 8) == 0 )
    return 3221225485LL;
LABEL_7:
  v18 = a9;
  if ( (a9 & 8) != 0 )
  {
    if ( a4 && (a4->cx != a1[7].m128i_i32[2] - a1[7].m128i_i32[0] || a4->cy != a1[7].m128i_i32[3] - a1[7].m128i_i32[1]) )
    {
      UserSetLastError(1462LL);
      return 2151546881LL;
    }
    v18 = a9 & 0xFFFFFFF7;
  }
  UpdateWindowRects((struct tagWND *)a1, a3, a4, &v27, &v25);
  if ( v17 )
  {
    if ( v27 )
    {
      v24 = RecreateRedirectionBitmap((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, (HSURF *)&v26);
      v10 = (HSURF)v26;
      updated = v24;
      if ( v24 < 0 )
        goto LABEL_41;
    }
  }
  GreLockVisRgn(*gpDispInfo);
  v20 = v25;
  if ( v27 || v25 )
  {
    if ( gcountPWO )
    {
      InvalidateGDIWindows(a1);
      GreClientRgnUpdated(1LL);
    }
    GreUpdateSpriteVisRgn(*gpDispInfo, 0LL);
  }
  if ( a5 )
    v18 |= 0x20000000u;
  updated = UpdateSprite(*gpDispInfo, (_DWORD)a1, v19, v28, (__int64)v29, (__int64)a4, a5, a6, a7, a8, v18, a10);
  if ( updated >= 0 && v20 )
    OffsetChildren(
      (_DWORD)a1,
      a1[7].m128i_i32[0] - _mm_cvtsi128_si32(v11),
      a1[7].m128i_i32[1] - _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)),
      0,
      1);
  GreUnlockVisRgn(*gpDispInfo);
  if ( updated < 0 )
  {
LABEL_41:
    a1[7] = v11;
    a1[8] = v14;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)a1, (HBITMAP)v10) )
      DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
  }
  else
  {
    if ( v10 )
      DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
    if ( v27 || v20 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      zzzSetFMouseMoved(LowPart, 0);
    }
    if ( gdwDeferWinEvent )
      v16 = 3;
    xxxWindowEvent(32779, (_DWORD)a1, 0, 0, v16);
  }
  return (unsigned int)updated;
}
