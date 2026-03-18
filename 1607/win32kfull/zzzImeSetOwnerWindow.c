/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C00A8C1C
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C00A7C60 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C00541C4 (DwmAsyncOwnerChange.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int WindowCloakState; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax

  v3 = *(_QWORD *)(a2 + 152);
  if ( (*(_BYTE *)(v3 + 86) & 1) == 0 && *(_WORD *)(v3 + 8) != *(_WORD *)(gpsi + 882LL) )
  {
    NonChildAncestor = GetNonChildAncestor(a2);
    v6 = 0LL;
    v7 = NonChildAncestor;
    if ( NonChildAncestor )
    {
      while ( *(_WORD *)(*(_QWORD *)(NonChildAncestor + 152) + 8LL) != *(_WORD *)(v5 + 882) )
      {
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 104);
        if ( !NonChildAncestor )
          goto LABEL_6;
      }
      v7 = 0LL;
    }
LABEL_6:
    v8 = v7;
    if ( v7 )
    {
      while ( a1 != (struct tagWND *)v8 )
      {
        v8 = *(_QWORD *)(v8 + 88);
        if ( !v8 )
          goto LABEL_9;
      }
      UserSetLastError(87LL);
      v7 = 0LL;
LABEL_9:
      if ( v7 )
      {
        v9 = *(_DWORD *)(v7 + 304);
        if ( *((_DWORD *)a1 + 76) != v9 )
          SetWindowGroupBand(a1, v9, 1);
      }
    }
    HMAssignmentLock((char *)a1 + 104, v7);
    if ( v7 )
    {
      WindowCloakState = GetWindowCloakState(v7);
      zzzSetWindowCompositionCloak((__int64)a1, 0LL, WindowCloakState);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      if ( v7 )
        v6 = *(_QWORD *)v7;
      v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
      DwmAsyncOwnerChange(v15, *(_QWORD *)a1, v6);
    }
  }
}
