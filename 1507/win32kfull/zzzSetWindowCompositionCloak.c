/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C00848E8
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     zzzImeSetOwnerWindow @ 0x1C0081158 (zzzImeSetOwnerWindow.c)
 *     zzzImeSetFutureOwner @ 0x1C0081268 (zzzImeSetFutureOwner.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     zzzCloakShadow @ 0x1C0223B30 (zzzCloakShadow.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0064EE4 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     WindowHasShadow @ 0x1C0081968 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C0082240 (FVisCountable.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C008298C (DwmAsyncSetCompositionAttribute.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082A58 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C0084DD0 (NextOwnedWindow.c)
 *     zzzCloakShadow @ 0x1C0223B30 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2, unsigned int a3)
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
  __int64 v21; // r8
  int v22; // ecx
  unsigned int v23; // r10d
  __int64 v24; // xmm1_8
  __int64 v25; // rbx
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int CloakFlags; // [rsp+30h] [rbp-50h]
  __int128 v30; // [rsp+38h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h]
  _DWORD v32[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+38h]

  v3 = 0;
  v5 = -1073741816;
  if ( a2 )
  {
    v11 = *(_DWORD *)a2 == 0;
    v24 = *(_QWORD *)(a2 + 16);
    v30 = *(_OWORD *)a2;
    LOBYTE(v3) = !v11;
    v31 = v24;
  }
  else
  {
    LOBYTE(v3) = a3 != 0;
    LODWORD(v30) = v3;
  }
  v35 = v3;
  if ( !(unsigned int)GetWindowCompositionInfo(a1, (__int64)v32) )
    return (unsigned int)v5;
  v6 = 1;
  ++gdwDeferWinEvent;
  CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v32);
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
      v14 = (LOWORD(v32[0]) ^ ((a3 & 1) << 10)) & 0x400 ^ v32[0];
      v15 = ((unsigned __int8)a3 >> 1) & 1;
LABEL_16:
      v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)((_WORD)v15 << 11)) & 0x800;
      v32[0] = v14;
      goto LABEL_17;
    }
  }
  if ( (v7 & 1) != 0 )
  {
    v14 = (LOWORD(v32[0]) ^ (unsigned __int16)((_WORD)v3 << 10)) & 0x400 ^ v32[0];
    v32[0] = v14;
  }
  else
  {
    v14 = v32[0];
  }
  if ( (v7 & 2) != 0 )
  {
    LOWORD(v15) = v35;
    goto LABEL_16;
  }
LABEL_17:
  if ( !__CFSHR__(v14, 12) )
    *(_BYTE *)(a1 + 290) |= 0x20u;
  if ( !(unsigned int)SetWindowCompositionInfo((struct tagWND *)a1, (const struct WINDOWCOMPOSITIONINFO *)v32) )
  {
    v5 = -1073741801;
    goto LABEL_34;
  }
  if ( (v14 & 0x400) == 0 && !__CFSHR__(v14, 12) )
    v6 = 0;
  if ( (CloakFlags == 0) != v6 )
  {
    v5 = 0;
    goto LABEL_34;
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
    v5 = DwmAsyncSetCompositionAttribute(v20, *(_QWORD *)a1, 17, &v30);
  }
  else
  {
    v5 = 0;
  }
  if ( (unsigned int)WindowHasShadow(a1) )
    zzzCloakShadow(a1, v35);
  if ( !FVisCountable(a1) )
    goto LABEL_49;
  v22 = 1;
  if ( (*(_BYTE *)(a1 + 55) & 0x10) == 0 )
    goto LABEL_30;
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  v26 = *(_DWORD *)(v25 + 996);
  if ( !v35 )
  {
    v27 = v26 - 1;
    *(_DWORD *)(v25 + 996) = v27;
    if ( *(_DWORD *)(v25 + 992) <= v27 || (*(_BYTE *)(v25 + 778) & 1) != 0 )
      goto LABEL_44;
    LOBYTE(v21) = 1;
    GreDxgkSetProcessStatus(v25, 2LL, v21);
    *(_DWORD *)(v25 + 776) |= 0x10000u;
    goto LABEL_49;
  }
  v28 = v26 + 1;
  *(_DWORD *)(v25 + 996) = v28;
  if ( *(_DWORD *)(v25 + 992) <= v28 && (*(_BYTE *)(v25 + 778) & 1) != 0 )
  {
    GreDxgkSetProcessStatus(v25, 2LL, 0LL);
    *(_DWORD *)(v25 + 776) &= ~0x10000u;
LABEL_49:
    v22 = 1;
  }
LABEL_30:
  v23 = 32791;
  if ( !v35 )
LABEL_44:
    v23 = 32792;
  if ( gdwDeferWinEvent )
    v22 = 3;
  xxxWindowEvent(v23, (__int64 *)a1, 0, 0, v22);
LABEL_34:
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
