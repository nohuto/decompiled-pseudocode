/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C00747C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzImeSetOwnerWindow @ 0x1C00904B8 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00905E0 (zzzImeSetFutureOwner.c)
 *     xxxAddShadow @ 0x1C012F41C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     zzzCloakShadow @ 0x1C0224370 (zzzCloakShadow.c)
 * Callees:
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0051374 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C0074CA0 (NextOwnedWindow.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0075FB4 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0078AAC (DwmAsyncSetCompositionAttribute.c)
 *     FVisCountable @ 0x1C007A3B0 (FVisCountable.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     WindowHasShadow @ 0x1C00F15B4 (WindowHasShadow.c)
 *     zzzCloakShadow @ 0x1C0224370 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  int v6; // esi
  char v7; // r11
  __int64 OwnedWindow; // rbx
  _DWORD *v9; // r10
  unsigned int v10; // r11d
  bool v11; // zf
  __int64 v13; // rax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  int v21; // ecx
  unsigned int v22; // r10d
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  int CloakFlags; // [rsp+30h] [rbp-50h]
  _DWORD v28[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+38h]

  v3 = 0;
  v5 = -1073741816;
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  v31 = v3;
  if ( !(unsigned int)GetWindowCompositionInfo(a1, (__int64)v28) )
    return (unsigned int)v5;
  v6 = 1;
  ++gdwDeferWinEvent;
  CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v28);
  if ( !v3 && a2 )
  {
    v7 = a3;
  }
  else
  {
    v7 = a3;
    if ( a3 == CloakFlags )
    {
      v5 = 0;
      goto LABEL_8;
    }
    if ( !a2 )
    {
      v14 = (LOWORD(v28[0]) ^ ((a3 & 1) << 10)) & 0x400 ^ v28[0];
      v15 = ((unsigned __int8)a3 >> 1) & 1;
      goto LABEL_22;
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v14 = (LOWORD(v28[0]) ^ (unsigned __int16)((_WORD)v3 << 10)) & 0x400 ^ v28[0];
    v28[0] = v14;
  }
  else
  {
    v14 = v28[0];
  }
  if ( (v7 & 2) != 0 )
  {
    LOWORD(v15) = v31;
LABEL_22:
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)((_WORD)v15 << 11)) & 0x800;
    v28[0] = v14;
  }
  if ( !__CFSHR__(v14, 12) )
    *(_BYTE *)(a1 + 290) |= 0x20u;
  if ( !(unsigned int)SetWindowCompositionInfo((struct tagWND *)a1, (const struct WINDOWCOMPOSITIONINFO *)v28) )
  {
    v5 = -1073741801;
    goto LABEL_40;
  }
  if ( (v14 & 0x400) == 0 && !__CFSHR__(v14, 12) )
    v6 = 0;
  if ( (CloakFlags == 0) != v6 )
  {
    v5 = 0;
    goto LABEL_40;
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
    v5 = DwmAsyncSetCompositionAttribute(v20);
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)WindowHasShadow(a1) )
    zzzCloakShadow(a1, v31);
  if ( !(unsigned int)FVisCountable(a1) )
    goto LABEL_50;
  v21 = 1;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
    goto LABEL_36;
  v23 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
  v24 = *(_DWORD *)(v23 + 980);
  if ( !v31 )
  {
    v25 = v24 - 1;
    *(_DWORD *)(v23 + 980) = v25;
    if ( *(_DWORD *)(v23 + 976) <= v25 || (*(_BYTE *)(v23 + 778) & 1) != 0 )
      goto LABEL_45;
    GreDxgkSetProcessStatus(v23, 2LL);
    *(_DWORD *)(v23 + 776) |= 0x10000u;
    goto LABEL_50;
  }
  v26 = v24 + 1;
  *(_DWORD *)(v23 + 980) = v26;
  if ( *(_DWORD *)(v23 + 976) <= v26 && (*(_BYTE *)(v23 + 778) & 1) != 0 )
  {
    GreDxgkSetProcessStatus(v23, 2LL);
    *(_DWORD *)(v23 + 776) &= ~0x10000u;
LABEL_50:
    v21 = 1;
  }
LABEL_36:
  v22 = 32791;
  if ( !v31 )
LABEL_45:
    v22 = 32792;
  if ( gdwDeferWinEvent )
    v21 = 3;
  xxxWindowEvent(v22, (__int64 *)a1, 0, 0, v21);
LABEL_40:
  if ( v5 < 0 )
  {
LABEL_13:
    v9 = (_DWORD *)gdwDeferWinEvent;
    goto LABEL_9;
  }
LABEL_8:
  OwnedWindow = NextOwnedWindow(0LL, a1, *(_QWORD *)(a1 + 88));
  if ( OwnedWindow )
  {
    do
    {
      v5 = zzzSetWindowCompositionCloak(OwnedWindow, a2, v10);
      if ( v5 < 0 )
        break;
      v13 = NextOwnedWindow(OwnedWindow, a1, *(_QWORD *)(a1 + 88));
      v10 = a3;
      OwnedWindow = v13;
    }
    while ( v13 );
    goto LABEL_13;
  }
LABEL_9:
  v11 = (*v9)-- == 1;
  if ( v11 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return (unsigned int)v5;
}
