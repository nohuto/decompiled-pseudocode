/*
 * XREFs of IoGetRequestorProcessId @ 0x1400B3A14
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRequestorProcess @ 0x1400C1700 (IoGetRequestorProcess.c)
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  RequestorProcess = IoGetRequestorProcess(Irp);
  if ( RequestorProcess )
    LODWORD(RequestorProcess) = RequestorProcess[1].Header.WaitListHead.Blink;
  return (unsigned int)RequestorProcess;
}
