/*
 * XREFs of ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D4BB4
 * Callers:
 *     CleanupIAMAccess @ 0x1C00D4B40 (CleanupIAMAccess.c)
 * Callees:
 *     SetShellWndManagementWindow @ 0x1C00D5B04 (SetShellWndManagementWindow.c)
 */

void __fastcall CleanupShellWindowManagement(struct tagDESKTOP *a1)
{
  struct tagDESKTOP *v2; // rdi
  struct tagDESKTOP *v3; // rsi
  __int64 v4; // rcx
  struct tagDESKTOP **v5; // rax

  if ( *((_QWORD *)a1 + 35) )
  {
    *((_QWORD *)a1 + 35) = 0LL;
    HMAssignmentUnlock((char *)a1 + 288);
    HMAssignmentUnlock((char *)a1 + 296);
    v2 = (struct tagDESKTOP *)*((_QWORD *)a1 + 38);
    if ( v2 )
    {
      while ( v2 != (struct tagDESKTOP *)((char *)a1 + 304) )
      {
        v3 = v2;
        v2 = *(struct tagDESKTOP **)v2;
        v4 = *(_QWORD *)v3;
        v5 = (struct tagDESKTOP **)*((_QWORD *)v3 + 1);
        if ( *(struct tagDESKTOP **)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
          __fastfail(3u);
        *v5 = (struct tagDESKTOP *)v4;
        *(_QWORD *)(v4 + 8) = v5;
        HMAssignmentUnlock((char *)v3 + 16);
        Win32FreePool(v3);
      }
    }
    SetShellWndManagementWindow(a1, 0LL);
  }
}
