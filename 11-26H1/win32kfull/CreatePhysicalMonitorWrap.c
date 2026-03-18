/*
 * XREFs of CreatePhysicalMonitorWrap @ 0x140345FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z @ 0x1402384F0 (-CreatePhysicalMonitor@@YAJAEAU_LUID@@KPEAPEAX@Z.c)
 */

int __fastcall CreatePhysicalMonitorWrap(struct _LUID *a1, __int64 a2, void **a3)
{
  return CreatePhysicalMonitor(a1, a2, a3);
}
