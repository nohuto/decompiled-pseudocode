/*
 * XREFs of NtGdiDestroyPhysicalMonitor @ 0x1C0259B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiDestroyPhysicalMonitor(CMonitorAPI *a1)
{
  return CMonitorAPI::DestroyPhysicalMonitor(a1, a1);
}
