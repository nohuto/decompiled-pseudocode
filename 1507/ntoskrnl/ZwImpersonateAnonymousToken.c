/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x140180D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateAnonymousToken(HANDLE Thread)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Thread);
}
