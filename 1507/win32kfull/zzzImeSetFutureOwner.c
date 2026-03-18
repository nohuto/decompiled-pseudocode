/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C0081268
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C004FBC0 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00527D4 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C005E6CC (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rax
  unsigned int WindowCloakState; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  void *v17; // rax
  __int64 v18; // rax
  __int16 v19; // dx
  __int64 v20; // r10
  __int64 v21; // rax

  if ( a2 )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(a2 + 55) & 0x40) == 0 )
    {
      v4 = *(_QWORD *)(a2 + 104);
      v5 = a2;
      while ( v4 && *(_QWORD *)(v4 + 16) == v3 )
      {
        v5 = v4;
        v4 = *(_QWORD *)(v4 + 104);
      }
      if ( (*(_BYTE *)(v5 + 44) & 0x20) != 0 && (*(_BYTE *)(a2 + 44) & 0x20) == 0 )
        v5 = a2;
      v6 = *(_QWORD *)(v5 + 152);
      if ( (*(_BYTE *)(v6 + 86) & 1) != 0 || *(_WORD *)(v6 + 8) == *(_WORD *)(gpsi + 882LL) )
        v5 = a2;
      if ( a2 == v5 )
      {
        v7 = *(_QWORD *)(v5 + 88);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 96);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v5 + 16);
            while ( 1 )
            {
              if ( v9 == *(_QWORD *)(v8 + 16) )
              {
                v18 = *(_QWORD *)(v8 + 152);
                v19 = *(_WORD *)(v18 + 8);
                if ( v19 != *(_WORD *)(gpsi + 890LL)
                  && (*(_BYTE *)(v18 + 86) & 1) == 0
                  && v19 != *(_WORD *)(gpsi + 882LL)
                  && *(char *)(v8 + 44) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v8 + 88), (struct tagWND *)v8) )
                  {
                    if ( (*(_BYTE *)(v8 + 55) & 0x40) == 0 && v5 != v8 )
                    {
                      v21 = *(_QWORD *)(v8 + 104);
                      if ( !v21 || v20 != *(_QWORD *)(v21 + 16) )
                        break;
                    }
                  }
                }
              }
              v8 = *(_QWORD *)(v8 + 72);
              if ( !v8 )
                goto LABEL_14;
            }
            v5 = v8;
          }
        }
      }
LABEL_14:
      v10 = v5;
      if ( v5 )
      {
        while ( (struct tagWND *)v10 != a1 )
        {
          v10 = *(_QWORD *)(v10 + 104);
          if ( !v10 )
            goto LABEL_17;
        }
        UserSetLastError(87);
      }
      else
      {
LABEL_17:
        if ( *((_DWORD *)a1 + 76) != *(_DWORD *)(v5 + 304) )
          SetWindowGroupBand(a1);
        HMAssignmentLock((char *)a1 + 104, v5);
        WindowCloakState = GetWindowCloakState(v5);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakState);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v16 = *(_QWORD *)v5;
          v17 = (void *)ReferenceDwmApiPort(v13, v12, v14, v15);
          DwmAsyncOwnerChange(v17, *(_QWORD *)a1, v16);
        }
      }
    }
  }
}
