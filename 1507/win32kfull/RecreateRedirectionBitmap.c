/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C000B580
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0005B40 (NtUserHwndQueryRedirectionInfo.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C000A564 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreAdjustSpriteDirtyAccum @ 0x1C000ABBC (GreAdjustSpriteDirtyAccum.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000ADB8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreNotifyDirtySprite @ 0x1C000B0EC (GreNotifyDirtySprite.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C000B264 (ChangeRedirectionParentInDCEs.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000BF8C (DeleteOrSetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C000DDF8 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C000E358 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1C000E9D0 (HintSpriteShape.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GetRedirectionFlags @ 0x1C005945C (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0059490 (GetRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        HSURF *a6)
{
  int v6; // r15d
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  HSURF RedirectionBitmap; // rsi
  int v12; // ebx
  int v13; // eax
  HSURF v14; // rbx
  int v15; // r15d
  struct REGION *v16; // r9
  HWND v17; // rdx
  LONG x; // r12d
  struct _POINTL v20; // [rsp+40h] [rbp-99h] BYREF
  HSURF v21; // [rsp+48h] [rbp-91h] BYREF
  int v22; // [rsp+50h] [rbp-89h]
  unsigned int v23; // [rsp+54h] [rbp-85h]
  struct tagBITMAP v24; // [rsp+58h] [rbp-81h] BYREF
  tagBITMAP v25; // [rsp+78h] [rbp-61h] BYREF
  __int64 v26; // [rsp+98h] [rbp-41h]
  LONG bmWidth; // [rsp+A0h] [rbp-39h]
  LONG bmHeight; // [rsp+A4h] [rbp-35h]
  _BYTE v29[32]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-11h]
  struct _RECTL v31; // [rsp+D0h] [rbp-9h] BYREF

  v21 = 0LL;
  v6 = a4;
  memset(&v24, 0, sizeof(v24));
  memset(&v25, 0, sizeof(v25));
  v22 = a3;
  v20.x = a2;
  v8 = IsDesktopWindow(a1, a2, a3, a4);
  v23 = 0;
  v9 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v10);
  SURFREF::SURFREF((SURFREF *)v29, RedirectionBitmap);
  if ( v30 )
  {
    v12 = *(_DWORD *)(v30 + 112);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v29);
    if ( (v12 & 0x800000) != 0 && v6 && !v8 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v29);
  }
  v13 = CreateOrGetRedirectionBitmap(a1, 1LL, a5, &v21);
  v14 = v21;
  v15 = v13;
  if ( v13 < 0 )
    goto LABEL_28;
  if ( !(unsigned int)SetRedirectionBitmap(a1, (HBITMAP)v21, 0) )
  {
    DeleteOrSetRedirectionBitmap(a1, v14, 1LL);
    v15 = -1073741801;
  }
  if ( v15 < 0 )
  {
LABEL_28:
    SetRedirectionBitmap(a1, 0LL, 0);
    v23 = 1;
  }
  if ( v14 && !v8 )
  {
    if ( RedirectionBitmap )
    {
      GreExtGetObjectW(RedirectionBitmap);
      v9 = 1;
    }
    GreExtGetObjectW(v14);
  }
  if ( (GetRedirectionFlags(a1) & 1) != 0
    && (HintSpriteShape(*gpDispInfo, a1, 0LL, v8 == 0 ? 2 : 0), v14)
    && (HintSpriteShape(*gpDispInfo, a1, v14, v8 == 0 ? 2 : 0), !v8) )
  {
    v17 = *(HWND *)a1;
    v21 = (HSURF)*((_QWORD *)a1 + 14);
    v31.right = v25.bmWidth;
    v31.bottom = v25.bmHeight;
    bmWidth = v24.bmWidth;
    bmHeight = v24.bmHeight;
    *(_QWORD *)&v31.left = 0LL;
    v26 = 0LL;
    x = v20.x;
    v20.x = -v20.x;
    v20.y = -v22;
    GreAdjustSpriteDirtyAccum((HDEV)*gpDispInfo, v17, &v31, v16, &v20, (struct _POINTL *)&v21);
  }
  else
  {
    x = v20.x;
  }
  if ( v9 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, (HBITMAP)v14, &v24, &v25, x, v22);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1, v23);
  if ( a6 )
  {
    *a6 = RedirectionBitmap;
  }
  else if ( RedirectionBitmap )
  {
    DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 1LL);
  }
  return (unsigned int)v15;
}
