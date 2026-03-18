/*
 * XREFs of ZwLoadKey @ 0x140180EB0
 * Callers:
 *     BiLoadHive @ 0x14056D8B4 (BiLoadHive.c)
 *     VfZwLoadKey @ 0x140756258 (VfZwLoadKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, FileObjectAttributes, v2);
}
