/*
 * XREFs of ZwLoadKey2 @ 0x140152560
 * Callers:
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
