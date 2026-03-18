/*
 * XREFs of ZwUnloadKey @ 0x140153BC0
 * Callers:
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 *     VfZwUnloadKey @ 0x1406D48F8 (VfZwUnloadKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, v1, v2);
}
