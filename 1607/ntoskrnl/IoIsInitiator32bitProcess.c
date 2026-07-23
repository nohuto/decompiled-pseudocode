/*
 * XREFs of IoIsInitiator32bitProcess @ 0x1400B1F5C
 * Callers:
 *     <none>
 * Callees:
 *     IoGetInitiatorProcess @ 0x1400B1F8C (IoGetInitiatorProcess.c)
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
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
