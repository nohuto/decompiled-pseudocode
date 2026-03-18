/*
 * XREFs of IoIsInitiator32bitProcess @ 0x1400B40DC
 * Callers:
 *     <none>
 * Callees:
 *     IoGetInitiatorProcess @ 0x1400B410C (IoGetInitiatorProcess.c)
 *     IoIs32bitProcess @ 0x1400C3800 (IoIs32bitProcess.c)
 */

BOOLEAN __fastcall IoIsInitiator32bitProcess(PIRP Irp)
{
  __int64 InitiatorProcess; // rax

  InitiatorProcess = IoGetInitiatorProcess(Irp->Tail.Overlay.CurrentStackLocation->FileObject);
  if ( InitiatorProcess )
    return *(_QWORD *)(InitiatorProcess + 1064) != 0LL;
  else
    return IoIs32bitProcess(Irp);
}
