/*
 * XREFs of NtGdiDestroyPhysicalMonitor @ 0x1C025C750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDestroyPhysicalMonitor(CMonitorAPI *a1)
{
  return CMonitorAPI::DestroyPhysicalMonitor(a1, a1);
}
