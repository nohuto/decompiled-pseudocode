/*
 * XREFs of RecreateRedirectionBitmap @ 0x140041830
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x14001E5B0 (NtUserHwndQueryRedirectionInfo.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     ?RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z @ 0x1402948FC (-RecreateRedirectionBitmapIfAdapterChanged@@YAXPEAUtagWND@@@Z.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1400182D8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x140040DCC (GreAdjustSpriteDirtyAccum.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140041344 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreNotifyDirtySprite @ 0x140041694 (GreNotifyDirtySprite.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     GetRedirectionFlags @ 0x140042B14 (GetRedirectionFlags.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1400A487C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     ChangeRedirectionParentInDCEs @ 0x14012DB84 (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, int a5, HSURF *a6)
{
  int v8; // r13d
  __int64 v9; // rcx
  HSURF RedirectionBitmap; // rsi
  int v11; // ebx
  int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  struct _POINTL v17; // [rsp+40h] [rbp-89h]
  int v18; // [rsp+48h] [rbp-81h]
  int v19; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v20; // [rsp+50h] [rbp-79h]
  struct _POINTL v21; // [rsp+58h] [rbp-71h]
  struct tagBITMAP v22; // [rsp+60h] [rbp-69h] BYREF
  struct tagBITMAP v23; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v24[32]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-9h]

  v19 = a3;
  v17.x = a2;
  v21 = 0LL;
  memset(&v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  v8 = IsDesktopWindow();
  v18 = 0;
  v20 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v9);
  SURFREF::SURFREF((SURFREF *)v24, RedirectionBitmap);
  if ( v25 )
    v11 = *(_DWORD *)(v25 + 112) & 0x800000;
  else
    v11 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v24);
  if ( v11 && a4 && !v8 )
  {
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  v12 = CreateOrGetRedirectionBitmap(a1);
  if ( v12 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v21, 0) )
      goto LABEL_7;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DeleteOrSetRedirectionBitmap)(a1, v21, 1LL);
    v12 = -1073741801;
  }
  SetRedirectionBitmap(a1, 0LL, 0);
  v20 = 1;
LABEL_7:
  if ( (GetRedirectionFlags(a1) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v14, v13);
    HintSpriteShape(*(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), a1);
  }
  ChangeRedirectionParentInDCEs(a1, v20);
  if ( a6 )
  {
    *a6 = RedirectionBitmap;
  }
  else if ( RedirectionBitmap )
  {
    DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 1LL);
  }
  return (unsigned int)v12;
}
