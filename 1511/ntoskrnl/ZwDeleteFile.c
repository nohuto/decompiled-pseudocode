/*
 * XREFs of ZwDeleteFile @ 0x140151EC0
 * Callers:
 *     NtEnableLastKnownGood @ 0x140519AD0 (NtEnableLastKnownGood.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     VfZwDeleteFile @ 0x1406D2034 (VfZwDeleteFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
