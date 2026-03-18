/*
 * XREFs of PsQuitNextProcess @ 0x1406C65F8
 * Callers:
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsQuitNextProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
