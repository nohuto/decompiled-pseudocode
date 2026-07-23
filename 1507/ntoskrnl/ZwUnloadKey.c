/*
 * XREFs of ZwUnloadKey @ 0x140182530
 * Callers:
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x14056D8B4 (BiLoadHive.c)
 *     VfZwUnloadKey @ 0x1407584C0 (VfZwUnloadKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes);
}
