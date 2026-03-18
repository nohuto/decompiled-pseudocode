/*
 * XREFs of CleanupIAMAccess @ 0x1C00ED600
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 *     FreeDesktop @ 0x1C0132F10 (FreeDesktop.c)
 * Callees:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00ED674 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 */

void __fastcall CleanupIAMAccess(struct tagDESKTOP *a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 i; // rbx
  __int64 j; // rdi
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *Blink; // rax

  Flink = gIAMThreadList.Flink;
  while ( Flink != &gIAMThreadList )
  {
    v7 = Flink;
    Flink = Flink->Flink;
    if ( !a1 || (struct tagDESKTOP *)v7[1].Blink == a1 )
    {
      v8 = v7->Flink;
      Blink = v7->Blink;
      if ( v7->Flink->Blink != v7 || Blink->Flink != v7 )
        __fastfail(3u);
      Blink->Flink = v8;
      v8->Blink = Blink;
      Win32FreePool(v7, v8, a3);
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
