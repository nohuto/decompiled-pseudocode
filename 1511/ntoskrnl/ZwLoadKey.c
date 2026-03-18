/*
 * XREFs of ZwLoadKey @ 0x140152540
 * Callers:
 *     BiLoadHive @ 0x1404FB31C (BiLoadHive.c)
 *     VfZwLoadKey @ 0x1406D2690 (VfZwLoadKey.c)
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
