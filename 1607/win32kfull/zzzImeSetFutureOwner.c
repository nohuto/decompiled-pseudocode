/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C00A8D44
 * Callers:
 *     zzzImeCanDestroyDefIME @ 0x1C009D50C (zzzImeCanDestroyDefIME.c)
 *     NtUserSetImeOwnerWindow @ 0x1C00A7C60 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072620 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
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
  unsigned int v11; // edx
  unsigned int WindowCloakState; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  void *v18; // rax
  __int64 v19; // rax
  __int16 v20; // dx
  __int64 v21; // r10
  __int64 v22; // rax

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
                v19 = *(_QWORD *)(v8 + 152);
                v20 = *(_WORD *)(v19 + 8);
                if ( v20 != *(_WORD *)(gpsi + 890LL)
                  && (*(_BYTE *)(v19 + 86) & 1) == 0
                  && v20 != *(_WORD *)(gpsi + 882LL)
                  && *(char *)(v8 + 44) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v8 + 88), (struct tagWND *)v8) )
                  {
                    if ( (*(_BYTE *)(v8 + 55) & 0x40) == 0 && v5 != v8 )
                    {
                      v22 = *(_QWORD *)(v8 + 104);
                      if ( !v22 || v21 != *(_QWORD *)(v22 + 16) )
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
        UserSetLastError(87LL);
      }
      else
      {
LABEL_17:
        v11 = *(_DWORD *)(v5 + 304);
        if ( *((_DWORD *)a1 + 76) != v11 )
          SetWindowGroupBand(a1, v11, 1);
        HMAssignmentLock((char *)a1 + 104, v5);
        WindowCloakState = GetWindowCloakState(v5);
        zzzSetWindowCompositionCloak((__int64)a1, 0LL, WindowCloakState);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v17 = *(_QWORD *)v5;
          v18 = (void *)ReferenceDwmApiPort(v14, v13, v15, v16);
          DwmAsyncOwnerChange(v18, *(_QWORD *)a1, v17);
        }
      }
    }
  }
}
