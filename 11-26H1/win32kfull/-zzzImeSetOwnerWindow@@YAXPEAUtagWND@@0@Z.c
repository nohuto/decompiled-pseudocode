/*
 * XREFs of ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14017A04C
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x140179ED0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14017A228 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14017A2E8 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int16 *v4; // rbx
  __int16 v5; // bx
  __int64 NonChildAncestor; // rbp
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  __int16 *v9; // rdx
  __int16 v10; // bx
  struct tagWND *i; // rax
  __int64 v12; // rcx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(__int16 **)(*((_QWORD *)a2 + 17) + 8LL);
  if ( (v4[5] & 1) == 0 )
  {
    v5 = *v4;
    if ( v5 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 898LL) )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v7 = (struct tagWND *)NonChildAncestor;
      while ( NonChildAncestor )
      {
        v8 = *(_QWORD *)(NonChildAncestor + 136);
        v9 = *(__int16 **)(v8 + 8);
        v10 = *v9;
        if ( v10 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v9) + 19904) + 898LL) )
        {
          v7 = 0LL;
          break;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      for ( i = v7; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
      {
        if ( a1 == i )
        {
          UserSetLastError(87);
          v7 = 0LL;
          goto LABEL_15;
        }
      }
      if ( v7 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL) )
        SetWindowGroupBand(a1);
LABEL_15:
      if ( v7 )
        v12 = *((_QWORD *)v7 + 6);
      else
        v12 = 0LL;
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = v12;
      v17[0] = (char *)a1 + 120;
      v17[1] = v7;
      HMAssignmentLock(v17, 1LL);
      if ( v7 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7);
        zzzSetWindowCompositionCloak(a1, WindowCloakStateComponentUIAware);
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v16 = (void *)ReferenceDwmApiPort(v15, v14);
        DwmAsyncOwnerChange(v16);
      }
    }
  }
}
