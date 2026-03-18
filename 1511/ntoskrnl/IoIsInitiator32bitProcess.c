/*
 * XREFs of IoIsInitiator32bitProcess @ 0x1400F2BFC
 * Callers:
 *     <none>
 * Callees:
 *     IoIs32bitProcess @ 0x140090B20 (IoIs32bitProcess.c)
 *     IoGetInitiatorProcess @ 0x1400F2C2C (IoGetInitiatorProcess.c)
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
