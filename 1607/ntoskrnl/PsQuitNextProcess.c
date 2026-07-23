/*
 * XREFs of PsQuitNextProcess @ 0x14054CE9C
 * Callers:
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsQuitNextProcess(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x6E457350u);
}
