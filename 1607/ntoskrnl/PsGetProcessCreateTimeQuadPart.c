/*
 * XREFs of PsGetProcessCreateTimeQuadPart @ 0x1400A3DE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONGLONG __stdcall PsGetProcessCreateTimeQuadPart(PEPROCESS Process)
{
  return (LONGLONG)Process[1].ThreadListHead.Flink;
}
