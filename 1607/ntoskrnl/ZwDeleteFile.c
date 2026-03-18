/*
 * XREFs of ZwDeleteFile @ 0x14015B560
 * Callers:
 *     NtEnableLastKnownGood @ 0x1406E572C (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1, v2);
}
