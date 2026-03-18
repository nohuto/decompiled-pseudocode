/*
 * XREFs of EngLoadModule @ 0x1C027C780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadModule(LPWSTR pwsz)
{
  return (HANDLE)LoadModuleWorkHorse(pwsz, 0);
}
