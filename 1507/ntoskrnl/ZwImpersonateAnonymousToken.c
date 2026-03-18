/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x140180D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateAnonymousToken(HANDLE Thread)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Thread, v1, v2);
}
