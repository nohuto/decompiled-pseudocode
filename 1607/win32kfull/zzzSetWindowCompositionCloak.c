/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C00A5D80
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 *     zzzImeSetOwnerWindow @ 0x1C00A8C1C (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C00A8D44 (zzzImeSetFutureOwner.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxAddShadow @ 0x1C0138D4C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     zzzCloakShadow @ 0x1C0224F38 (zzzCloakShadow.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0078DDC (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     FVisCountable @ 0x1C00A21C0 (FVisCountable.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C00A62A8 (NextOwnedWindow.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00A7058 (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00A7124 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     WindowHasShadow @ 0x1C00A73EC (WindowHasShadow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     zzzCloakShadow @ 0x1C0224F38 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v5; // esi
  char v6; // r11
  __int64 OwnedWindow; // rdi
  _DWORD *v8; // r10
  unsigned int v9; // r11d
  bool v10; // zf
  __int64 v12; // rax
  int v13; // edi
  int v14; // eax
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  int v21; // ecx
  unsigned int v22; // r10d
  _QWORD *v23; // rdi
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
  ++gdwDeferWinEvent;
  CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v28);
  if ( !v3 && a2 )
  {
    v6 = a3;
  }
  else
  {
    v6 = a3;
    if ( a3 == CloakFlags )
    {
      v5 = 0;
      goto LABEL_8;
    }
    if ( !a2 )
    {
      v13 = (LOWORD(v28[0]) ^ ((a3 & 1) << 10)) & 0x400 ^ v28[0];
      v14 = ((unsigned __int8)a3 >> 1) & 1;
      goto LABEL_20;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v13 = (LOWORD(v28[0]) ^ (unsigned __int16)((_WORD)v3 << 10)) & 0x400 ^ v28[0];
    v28[0] = v13;
  }
  else
  {
    v13 = v28[0];
  }
  if ( (v6 & 2) != 0 )
  {
    LOWORD(v14) = v31;
LABEL_20:
    v13 ^= ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)v14 << 11)) & 0x800;
    v28[0] = v13;
  }
  if ( !__CFSHR__(v13, 12) )
    *(_BYTE *)(a1 + 290) |= 0x20u;
  if ( !(unsigned int)SetWindowCompositionInfo((struct tagWND *)a1, (const struct WINDOWCOMPOSITIONINFO *)v28) )
  {
    v5 = -1073741801;
    goto LABEL_38;
  }
  v15 = (v13 & 0x400) != 0 || __CFSHR__(v13, 12);
  if ( (CloakFlags == 0) != v15 )
  {
    v5 = 0;
    goto LABEL_38;
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
  if ( !FVisCountable(a1) )
    goto LABEL_51;
  v21 = 1;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
    goto LABEL_34;
  v23 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 376LL);
  v24 = *((_DWORD *)v23 + 243);
  if ( !v31 )
  {
    v25 = v24 - 1;
    *((_DWORD *)v23 + 243) = v25;
    if ( *((_DWORD *)v23 + 242) <= v25 || (v23[96] & 0x4000) != 0 )
      goto LABEL_46;
    GreDxgkSetProcessStatus(v23, 2LL);
    PsUpdateComponentPower(*v23, 5LL);
    *((_DWORD *)v23 + 192) |= 0x4000u;
    goto LABEL_51;
  }
  v26 = v24 + 1;
  *((_DWORD *)v23 + 243) = v26;
  if ( *((_DWORD *)v23 + 242) <= v26 && (v23[96] & 0x4000) != 0 )
  {
    PsUpdateComponentPower(*v23, 5LL);
    GreDxgkSetProcessStatus(v23, 2LL);
    *((_DWORD *)v23 + 192) &= ~0x4000u;
LABEL_51:
    v21 = 1;
  }
LABEL_34:
  v22 = 32791;
  if ( !v31 )
LABEL_46:
    v22 = 32792;
  if ( gdwDeferWinEvent )
    v21 = 3;
  xxxWindowEvent(v22, (__int64 *)a1, 0, 0, v21);
LABEL_38:
  if ( v5 < 0 )
  {
LABEL_13:
    v8 = (_DWORD *)gdwDeferWinEvent;
    goto LABEL_9;
  }
LABEL_8:
  OwnedWindow = NextOwnedWindow(0LL, a1, *(_QWORD *)(a1 + 88));
  if ( OwnedWindow )
  {
    do
    {
      v5 = zzzSetWindowCompositionCloak(OwnedWindow, a2, v9);
      if ( v5 < 0 )
        break;
      v12 = NextOwnedWindow(OwnedWindow, a1, *(_QWORD *)(a1 + 88));
      v9 = a3;
      OwnedWindow = v12;
    }
    while ( v12 );
    goto LABEL_13;
  }
LABEL_9:
  v10 = (*v8)-- == 1;
  if ( v10 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return (unsigned int)v5;
}
