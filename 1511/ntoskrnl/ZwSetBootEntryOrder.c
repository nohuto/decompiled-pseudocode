/*
 * XREFs of ZwSetBootEntryOrder @ 0x140153400
 * Callers:
 *     BiSetBootEntryOrder @ 0x140690F64 (BiSetBootEntryOrder.c)
 *     VfZwSetBootEntryOrder @ 0x1406D41B4 (VfZwSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
