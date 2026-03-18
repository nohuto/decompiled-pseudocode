/*
 * XREFs of UsbhPeekNextPdoIdleIrp @ 0x1C0027D30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoIdleIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  char *v7; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // r8

  p_Blink = 0LL;
  v7 = Csq - 1456;
  if ( !v7 )
    UsbhTrapFatal_Dbg(MEMORY[0x498], Csq, PeekContext, 0LL);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (_LIST_ENTRY *)*((_QWORD *)v7 + 180);
  v9 = (_LIST_ENTRY *)(v7 + 1440);
  while ( Flink != v9 )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)v7 + 147), Csq, v9, p_Blink);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)v7 + 147), Csq, v9, p_Blink);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
