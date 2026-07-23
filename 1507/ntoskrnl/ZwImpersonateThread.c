/*
 * XREFs of ZwImpersonateThread @ 0x140180DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateThread(
        HANDLE ThreadHandle,
        HANDLE ThreadToImpersonate,
        PSECURITY_QUALITY_OF_SERVICE SecurityQualityOfService)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
