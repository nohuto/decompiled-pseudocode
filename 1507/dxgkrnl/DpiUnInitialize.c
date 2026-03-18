/*
 * XREFs of DpiUnInitialize @ 0x1C016D120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 0, a3);
}
