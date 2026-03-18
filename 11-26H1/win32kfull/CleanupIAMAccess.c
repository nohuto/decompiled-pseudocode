/*
 * XREFs of CleanupIAMAccess @ 0x140154E80
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     FreeDesktop @ 0x1402A5110 (FreeDesktop.c)
 * Callees:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140154F44 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupIAMAccess(struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 i; // rbx
  __int64 j; // rdi

  v5 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 71168);
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v4 = v6;
    v6 = (_QWORD *)*v6;
    if ( !a1 || (struct tagDESKTOP *)v4[3] == a1 )
    {
      if ( (_QWORD *)v6[1] != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      Win32FreePool(v4);
    }
  }
  if ( a1 )
  {
    CleanupShellWindowManagement(a1);
  }
  else
  {
    for ( i = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 63512); i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
        CleanupShellWindowManagement((struct tagDESKTOP *)j);
    }
  }
}
