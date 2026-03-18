/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x1400E5418
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
