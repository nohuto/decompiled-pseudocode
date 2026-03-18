/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x1C025C7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, unsigned int a2, void **a3)
{
  return CMonitorAPI::CreatePhysicalMonitor((CMonitorAPI *)a1, a1, a2, a3);
}
