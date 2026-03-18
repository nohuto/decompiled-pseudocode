/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00D7E4C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0215C30 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GetRedirectionFlags @ 0x1C0053B04 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C00623A8 (HintSpriteShape.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00637B4 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0063B98 (ChangeRedirectionParentInDCEs.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00D80F0 (GreAdjustSpriteDirtyAccum.c)
 *     GreNotifyDirtySprite @ 0x1C00D82EC (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, struct HLFONT__ **a6)
{
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  struct HLFONT__ *RedirectionBitmap; // rsi
  int v12; // ebx
  int v13; // eax
  HSURF v14; // rbx
  int v15; // r15d
  HWND v16; // rdx
  LONG x; // r12d
  struct _POINTL v19; // [rsp+40h] [rbp-99h] BYREF
  int v20; // [rsp+48h] [rbp-91h]
  unsigned int v21; // [rsp+4Ch] [rbp-8Dh]
  HSURF v22; // [rsp+50h] [rbp-89h] BYREF
  tagBITMAP v23; // [rsp+58h] [rbp-81h] BYREF
  struct tagBITMAP v24; // [rsp+78h] [rbp-61h] BYREF
  __int64 v25; // [rsp+98h] [rbp-41h]
  LONG bmWidth; // [rsp+A0h] [rbp-39h]
  LONG bmHeight; // [rsp+A4h] [rbp-35h]
  _BYTE v28[32]; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-11h]
  struct _RECTL v30; // [rsp+D0h] [rbp-9h] BYREF

  v22 = 0LL;
  memset(&v24, 0, sizeof(v24));
  memset(&v23, 0, sizeof(v23));
  v20 = a3;
  v19.x = a2;
  v8 = IsDesktopWindow((__int64)a1);
  v21 = 0;
  v9 = 0;
  RedirectionBitmap = (struct HLFONT__ *)GetRedirectionBitmap(v10);
  SURFREF::SURFREF((SURFREF *)v28, (HSURF)RedirectionBitmap);
  if ( v29 )
  {
    v12 = *(_DWORD *)(v29 + 112);
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v28);
    if ( (v12 & 0x800000) != 0 && a4 && !v8 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v28);
  }
  v13 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, &v22);
  v14 = v22;
  v15 = v13;
  if ( v13 < 0 )
    goto LABEL_28;
  if ( !(unsigned int)SetRedirectionBitmap(a1, (HBITMAP)v22, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, v14, 1);
    v15 = -1073741801;
  }
  if ( v15 < 0 )
  {
LABEL_28:
    SetRedirectionBitmap(a1, 0LL, 0);
    v21 = 1;
  }
  if ( v14 && !v8 )
  {
    if ( RedirectionBitmap )
    {
      GreExtGetObjectW(RedirectionBitmap, 32, (unsigned __int16 *)&v24);
      v9 = 1;
    }
    GreExtGetObjectW((struct HLFONT__ *)v14, 32, (unsigned __int16 *)&v23);
  }
  if ( (GetRedirectionFlags((__int64)a1) & 1) != 0
    && (HintSpriteShape((HDEV)*gpDispInfo, (__int64)a1, 0LL, v8 == 0 ? 2 : 0), v14)
    && (HintSpriteShape((HDEV)*gpDispInfo, (__int64)a1, (HBITMAP)v14, v8 == 0 ? 2 : 0), !v8) )
  {
    v16 = *(HWND *)a1;
    v22 = (HSURF)*((_QWORD *)a1 + 14);
    v30.right = v23.bmWidth;
    v30.bottom = v23.bmHeight;
    bmWidth = v24.bmWidth;
    bmHeight = v24.bmHeight;
    *(_QWORD *)&v30.left = 0LL;
    v25 = 0LL;
    x = v19.x;
    v19.x = -v19.x;
    v19.y = -v20;
    GreAdjustSpriteDirtyAccum((HDEV)*gpDispInfo, v16, &v30, &v19, (struct _POINTL *)&v22);
  }
  else
  {
    x = v19.x;
  }
  if ( v9 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, (HBITMAP)v14, &v24, &v23, x, v20);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1, v21);
  if ( a6 )
  {
    *a6 = RedirectionBitmap;
  }
  else if ( RedirectionBitmap )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)RedirectionBitmap, 1);
  }
  return (unsigned int)v15;
}
