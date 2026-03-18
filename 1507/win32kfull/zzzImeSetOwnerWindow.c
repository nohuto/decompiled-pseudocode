/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C0081158
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C004FBC0 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C005B838 (DwmAsyncOwnerChange.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int WindowCloakState; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax

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
      UserSetLastError(87);
      v7 = 0LL;
LABEL_9:
      if ( v7 && *((_DWORD *)a1 + 76) != *(_DWORD *)(v7 + 304) )
        SetWindowGroupBand(a1);
    }
    HMAssignmentLock((char *)a1 + 104, v7);
    if ( v7 )
    {
      WindowCloakState = GetWindowCloakState(v7);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakState);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      if ( v7 )
        v6 = *(_QWORD *)v7;
      v14 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
      DwmAsyncOwnerChange(v14, *(_QWORD *)a1, v6);
    }
  }
}
