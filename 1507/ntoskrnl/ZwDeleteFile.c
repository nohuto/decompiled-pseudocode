/*
 * XREFs of ZwDeleteFile @ 0x140180870
 * Callers:
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     VfZwDeleteFile @ 0x140755BFC (VfZwDeleteFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
