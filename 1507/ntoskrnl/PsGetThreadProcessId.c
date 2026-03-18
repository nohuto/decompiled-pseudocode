/*
 * XREFs of PsGetThreadProcessId @ 0x1401226BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetThreadProcessId(PETHREAD Thread)
{
  return *(HANDLE *)&Thread[1].CurrentRunTime;
}
