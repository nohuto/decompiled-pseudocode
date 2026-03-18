/*
 * XREFs of DpiDriverUnload @ 0x1C019A4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiDriverUnload(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 1, a3);
}
