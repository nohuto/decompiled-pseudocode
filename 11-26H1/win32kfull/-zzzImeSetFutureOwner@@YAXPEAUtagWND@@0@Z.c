/*
 * XREFs of ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14017A9B4
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x140179ED0 (NtUserSetImeOwnerWindow.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017AD20 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x140178BD0 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rax
  struct tagWND *v7; // rdi
  __int16 *v8; // rbx
  __int16 v9; // bx
  __int64 v10; // rbp
  __int64 i; // rbp
  struct tagWND *j; // rax
  unsigned int v13; // edx
  __int64 v14; // rdx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rbx
  void *v20; // rax
  __int16 *v21; // rcx
  __int16 v22; // bx
  __int64 v23; // rcx
  __int16 *v24; // rbx
  __int16 v25; // bx
  __int64 v26; // rax
  _QWORD v27[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return;
  v3 = *((_QWORD *)a2 + 5);
  v5 = *((_QWORD *)a1 + 2);
  if ( (*(_BYTE *)(v3 + 31) & 0x40) != 0 )
    return;
  v6 = (struct tagWND *)*((_QWORD *)a2 + 15);
  v7 = a2;
  while ( v6 && *((_QWORD *)v6 + 2) == v5 )
  {
    v7 = v6;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 15);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 5) + 20LL) & 0x20) != 0 && (*(_BYTE *)(v3 + 20) & 0x20) == 0 )
    v7 = a2;
  v8 = *(__int16 **)(*((_QWORD *)v7 + 17) + 8LL);
  if ( (v8[5] & 1) != 0 || (v9 = *v8, v9 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v3) + 19904) + 898LL)) )
  {
    v7 = a2;
LABEL_12:
    v10 = *((_QWORD *)v7 + 13);
    if ( v10 )
    {
      for ( i = *(_QWORD *)(v10 + 112); i; i = *(_QWORD *)(i + 88) )
      {
        if ( *((_QWORD *)v7 + 2) == *(_QWORD *)(i + 16) )
        {
          v21 = *(__int16 **)(*(_QWORD *)(i + 136) + 8LL);
          v22 = *v21;
          v23 = *(_QWORD *)(W32GetUserSessionState(v21, v3) + 19904);
          if ( v22 != *(_WORD *)(v23 + 906) )
          {
            v24 = *(__int16 **)(*(_QWORD *)(i + 136) + 8LL);
            if ( (v24[5] & 1) == 0 )
            {
              v25 = *v24;
              if ( v25 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v3) + 19904) + 898LL)
                && *(char *)(*(_QWORD *)(i + 40) + 20LL) >= 0 )
              {
                if ( (unsigned int)WantImeWindow(*(struct tagWND **)(i + 104), (struct tagWND *)i) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x40) == 0 && v7 != (struct tagWND *)i )
                  {
                    v26 = *(_QWORD *)(i + 120);
                    if ( !v26 || *(_QWORD *)(i + 16) != *(_QWORD *)(v26 + 16) )
                    {
                      v7 = (struct tagWND *)i;
                      goto LABEL_17;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_17;
  }
  if ( a2 == v7 )
    goto LABEL_12;
LABEL_17:
  for ( j = v7; j; j = (struct tagWND *)*((_QWORD *)j + 15) )
  {
    if ( j == a1 )
    {
      UserSetLastError(87);
      return;
    }
  }
  v13 = *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL);
  if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != v13 )
    SetWindowGroupBand(a1, v13, 1);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = *((_QWORD *)v7 + 6);
  v27[0] = (char *)a1 + 120;
  v27[1] = v7;
  HMAssignmentLock(v27, 1LL);
  WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7, v14);
  zzzSetWindowCompositionCloak((__int64)a1, WindowCloakStateComponentUIAware);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v18 = *(_QWORD *)v7;
    v19 = *(_QWORD *)a1;
    v20 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncOwnerChange(v20, v19, v18);
  }
}
