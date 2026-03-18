/*
 * XREFs of DpiPendingIrpCancelQueuePick @ 0x1C002A800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIRP __fastcall DpiPendingIrpCancelQueuePick(PIO_CSQ Csq, PIRP Irp, PIRP PeekContext)
{
  struct _IO_CSQ *Flink; // rdx
  PIRP result; // rax

  if ( Irp )
    Flink = (struct _IO_CSQ *)Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *(struct _IO_CSQ **)&Csq[1].Type;
  if ( Flink == &Csq[1] )
    return 0LL;
  result = (PIRP)&Flink[-3].CsqPeekNextIrp;
  while ( PeekContext != result && PeekContext )
    ;
  return result;
}
