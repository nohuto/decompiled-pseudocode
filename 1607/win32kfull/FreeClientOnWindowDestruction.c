/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C0055900
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v3; // r8
  struct _LIST_ENTRY *v4; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rdi

  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v6 = Flink - 1;
    Flink = Flink->Flink;
    if ( a1 == v6->Flink )
    {
      HMAssignmentUnlock(v6);
      v4 = v6[1].Flink;
      Blink = v6[1].Blink;
      if ( v4->Blink != &v6[1] || Blink->Flink != &v6[1] )
        __fastfail(3u);
      Blink->Flink = v4;
      v4->Blink = Blink;
      Win32FreePool(v6, v4, v3);
    }
  }
}
