/*
 * XREFs of EngLoadModule @ 0x1C027E520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return (HANDLE)LoadModuleWorkHorse(pwsz, 0);
}
