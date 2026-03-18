/*
 * XREFs of CleanupIAMAccess @ 0x1C00D4B40
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C009EDC8 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     FreeDesktop @ 0x1C00D3310 (FreeDesktop.c)
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 * Callees:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D4BB4 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupIAMAccess(struct tagDESKTOP *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 i; // rbx
  __int64 j; // rdi
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
    CleanupShellWindowManagement(a1);
  }
  else
  {
    for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
    {
      for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 16) )
        CleanupShellWindowManagement((struct tagDESKTOP *)j);
    }
  }
}
