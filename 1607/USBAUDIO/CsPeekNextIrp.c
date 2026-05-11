/*
 * XREFs of CsPeekNextIrp @ 0x1C0002700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall CsPeekNextIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  struct _LIST_ENTRY *v3; // r8
  __int64 v4; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v3 = (struct _LIST_ENTRY *)(Csq + 72);
  v4 = 0LL;
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = v3->Flink;
  if ( Flink != v3 )
    return &Flink[-11].Blink;
  return (struct _LIST_ENTRY **)v4;
}
