/*
 * XREFs of ZwQueryOpenSubKeys @ 0x14015CA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
