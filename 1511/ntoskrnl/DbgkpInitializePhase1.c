/*
 * XREFs of DbgkpInitializePhase1 @ 0x14075AC30
 * Callers:
 *     DbgkInitialize @ 0x14075AC04 (DbgkInitialize.c)
 * Callees:
 *     DbgkpCreateNotificationEvent @ 0x14075AC8C (DbgkpCreateNotificationEvent.c)
 */

__int64 DbgkpInitializePhase1()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-10h]

  v1 = 4718662;
  v2 = L"\\KernelObjects\\SystemErrorPortReady";
  result = DbgkpCreateNotificationEvent(&v1);
  if ( (int)result >= 0 && !DbgkpWerInitialized )
  {
    DbgkpBusy = 0;
    DbgkpWerDefaultPolicy = 2;
    DbgkpWerDeferredWriteTimeoutSeconds = 600;
    DbgkpWerInitialized = 1;
  }
  return result;
}
