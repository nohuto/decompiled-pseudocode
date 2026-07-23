/*
 * XREFs of ZwLoadKey @ 0x14015C150
 * Callers:
 *     BiLoadHive @ 0x14053C0C0 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
