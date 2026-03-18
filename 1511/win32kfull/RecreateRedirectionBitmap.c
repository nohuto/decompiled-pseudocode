/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C009AB98
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     GetRedirectionFlags @ 0x1C006BF30 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C006BF60 (GetRedirectionBitmap.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00799CC (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x1C007AA1C (IsDesktopWindow.c)
 *     HintSpriteShape @ 0x1C007B8EC (HintSpriteShape.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C007C284 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C007C3E0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C007F730 (DeleteOrSetRedirectionBitmap.c)
 *     GreNotifyDirtySprite @ 0x1C009AE28 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009AF0C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C009B1FC (GreAdjustSpriteDirtyAccum.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, int a2, int a3, int a4, int a5, HBRUSH *a6)
{
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  struct _POINTL v14; // rax
  int v15; // ebx
  int v16; // eax
  HBITMAP v17; // rbx
  int v18; // r15d
  HWND v19; // rdx
  int v20; // r12d
  HBITMAP v23; // [rsp+48h] [rbp-71h] BYREF
  int v24; // [rsp+50h] [rbp-69h]
  unsigned int v25; // [rsp+54h] [rbp-65h]
  struct _POINTL v26; // [rsp+58h] [rbp-61h] BYREF
  tagBITMAP v27; // [rsp+60h] [rbp-59h] BYREF
  struct tagBITMAP v28; // [rsp+80h] [rbp-39h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-19h]
  LONG bmWidth; // [rsp+A8h] [rbp-11h]
  LONG bmHeight; // [rsp+ACh] [rbp-Dh]
  struct _RECTL v32; // [rsp+B0h] [rbp-9h] BYREF

  v23 = 0LL;
  memset(&v28, 0, sizeof(v28));
  memset(&v27, 0, sizeof(v27));
  v24 = a3;
  v8 = IsDesktopWindow((__int64)a1);
  v25 = 0;
  v9 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HBRUSH)RedirectionBitmap;
  v14 = (struct _POINTL)HmgShareLockCheck(RedirectionBitmap, v12);
  v26 = v14;
  if ( v14 )
  {
    v15 = *(_DWORD *)(*(_QWORD *)&v14 + 112LL);
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
    if ( (v15 & 0x800000) != 0 && a4 && !v8 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v26);
  }
  v16 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (__int64 *)&v23);
  v17 = v23;
  v18 = v16;
  if ( v16 < 0 )
    goto LABEL_28;
  if ( !(unsigned int)SetRedirectionBitmap(a1, v23, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v17, 1);
    v18 = -1073741801;
  }
  if ( v18 < 0 )
  {
LABEL_28:
    SetRedirectionBitmap(a1, 0LL, 0);
    v25 = 1;
  }
  if ( v17 && !v8 )
  {
    if ( v13 )
    {
      GreExtGetObjectW(v13, 32LL, (unsigned __int16 *)&v28);
      v9 = 1;
    }
    GreExtGetObjectW((HBRUSH)v17, 32LL, (unsigned __int16 *)&v27);
  }
  if ( (GetRedirectionFlags((__int64)a1) & 1) != 0
    && (HintSpriteShape((HDEV)*gpDispInfo, (HWND *)a1, 0LL, v8 == 0 ? 2 : 0), v17)
    && (HintSpriteShape((HDEV)*gpDispInfo, (HWND *)a1, (__int64)v17, v8 == 0 ? 2 : 0), !v8) )
  {
    v19 = *(HWND *)a1;
    v23 = (HBITMAP)*((_QWORD *)a1 + 14);
    v32.right = v27.bmWidth;
    v32.bottom = v27.bmHeight;
    bmWidth = v28.bmWidth;
    bmHeight = v28.bmHeight;
    *(_QWORD *)&v32.left = 0LL;
    v29 = 0LL;
    v20 = a2;
    v26.x = -a2;
    v26.y = -v24;
    GreAdjustSpriteDirtyAccum((HDEV)*gpDispInfo, v19, &v32, &v26, (struct _POINTL *)&v23);
  }
  else
  {
    v20 = a2;
  }
  if ( v9 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)v13, v17, &v28, &v27, v20, v24);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1, v25);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v13, 1);
  }
  return (unsigned int)v18;
}
