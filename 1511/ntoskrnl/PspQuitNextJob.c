/*
 * XREFs of PspQuitNextJob @ 0x140643908
 * Callers:
 *     PsRootSiloInformation @ 0x14063FBD4 (PsRootSiloInformation.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PspQuitNextJob(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
