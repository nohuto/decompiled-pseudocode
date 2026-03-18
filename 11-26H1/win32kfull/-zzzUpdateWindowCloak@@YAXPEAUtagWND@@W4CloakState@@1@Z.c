/*
 * XREFs of ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0
 * Callers:
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A348 (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 * Callees:
 *     FVisCountable @ 0x1400105A0 (FVisCountable.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x14015D558 (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A348 (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     FindShadowWindow @ 0x140231868 (FindShadowWindow.c)
 *     ?DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140243EC0 (-DecCloakWindows@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall zzzUpdateWindowCloak(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  char v5; // bp
  char v6; // r14
  int v7; // edi
  int v8; // r9d
  int v9; // r9d
  __int64 v10; // rcx
  const struct tagWND *ShadowWindow; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  int v19; // edx

  v3 = a3;
  v5 = (_DWORD)a2 != 0;
  v6 = a3 != 0;
  v7 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19176) + 48LL) & 0x400;
  if ( v5 != v6 || (v8 = 0, v7) )
    v8 = 1;
  SetOrClrWF(v3 & 1, (struct tagWND *)a1, 0xD940u, v8);
  if ( v5 != v6 || (v9 = 0, v7) )
    v9 = 1;
  SetOrClrWF(((unsigned int)v3 >> 1) & 1, (struct tagWND *)a1, 0xD920u, v9);
  v10 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v10 + 233) & 0x20) == 0 )
    *(_DWORD *)(a1 + 384) |= 4u;
  if ( v5 != v6 )
  {
    if ( (*(_BYTE *)(v10 + 31) & 0x10) != 0 )
    {
      ShadowWindow = (const struct tagWND *)FindShadowWindow(a1);
      if ( ShadowWindow )
        zzzSetWindowCompositionCloakWorker(ShadowWindow, v3 != 0);
    }
    if ( !(unsigned int)FVisCountable(a1) || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) == 0 )
      goto LABEL_21;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = *(_QWORD *)(v14 + 456);
    if ( (_DWORD)v3 )
    {
      v16 = *(_DWORD *)(v15 + 1012) + 1;
      *(_DWORD *)(v15 + 1012) = v16;
      if ( *(_DWORD *)(v15 + 1008) <= v16 )
      {
        v17 = 1LL;
LABEL_20:
        tagPROCESSINFO::UpdateProcessVisibility(v15, v17);
      }
    }
    else
    {
      DecCloakWindows(*(struct tagPROCESSINFO **)(v14 + 456));
      if ( *(_DWORD *)(v15 + 1008) > *(_DWORD *)(v15 + 1012) )
      {
        v17 = 0LL;
        goto LABEL_20;
      }
    }
LABEL_21:
    UserSessionState = W32GetUserSessionState(v13, v12);
    v19 = 3;
    if ( !*(_DWORD *)(UserSessionState + 70592) )
      v19 = 1;
    xxxWindowEvent(32792 - ((_DWORD)v3 != 0), (struct tagWND *)a1, 0, 0, v19);
    if ( !(_DWORD)v3 )
      CRecalcProp::s_OnWindowUncloak((struct tagWND *)a1);
    tagWND::ComputeDominantState((tagWND *)a1);
  }
  if ( *(_WORD *)(a1 + 376) )
  {
    if ( IsTopLevelWindow(a1) )
      SendNotifyMessageAlways((struct tagWND *)a1, 0x347u, v3, 0LL, 0);
  }
}
