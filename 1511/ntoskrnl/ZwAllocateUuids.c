/*
 * XREFs of ZwAllocateUuids @ 0x140151460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Time);
}
