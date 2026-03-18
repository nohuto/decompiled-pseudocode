/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C00682A0
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rdi
  struct _LIST_ENTRY *v4; // rdx
  struct _LIST_ENTRY *Blink; // rcx

  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v3 = Flink - 1;
    Flink = Flink->Flink;
    if ( a1 == v3->Flink )
    {
      HMAssignmentUnlock(v3);
      v4 = v3[1].Flink;
      Blink = v3[1].Blink;
      if ( v4->Blink != &v3[1] || Blink->Flink != &v3[1] )
        __fastfail(3u);
      Blink->Flink = v4;
      v4->Blink = Blink;
      Win32FreePool(v3);
    }
  }
}
