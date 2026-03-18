/*
 * XREFs of CleanupIAMAccess @ 0x1C014AD50
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     FreeDesktop @ 0x1C0131160 (FreeDesktop.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 * Callees:
 *     ?CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z @ 0x1C014ADFC (-CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupIAMAccess(struct tagDESKTOP *a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 i; // rdi
  __int64 j; // rbx
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *v6; // rdx
  struct _LIST_ENTRY *Blink; // rax

  Flink = gIAMThreadList.Flink;
  while ( Flink != &gIAMThreadList )
  {
    v5 = Flink;
    Flink = Flink->Flink;
    if ( !a1 || (struct tagDESKTOP *)v5[1].Blink == a1 )
    {
      v6 = v5->Flink;
      Blink = v5->Blink;
      if ( v5->Flink->Blink != v5 || Blink->Flink != v5 )
        __fastfail(3u);
      Blink->Flink = v6;
      v6->Blink = Blink;
      Win32FreePool(v5);
    }
  }
  if ( a1 )
  {
    *((_QWORD *)a1 + 35) = 0LL;
    HMAssignmentUnlock((char *)a1 + 240);
    CleanupActivationFiltersForDesktop(a1);
    *((_DWORD *)a1 + 80) = 0;
  }
  else
  {
    for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 16) )
      {
        *(_QWORD *)(j + 280) = 0LL;
        HMAssignmentUnlock(j + 240);
        *(_DWORD *)(j + 320) = 0;
        CleanupActivationFiltersForDesktop((struct tagDESKTOP *)j);
      }
    }
  }
}
