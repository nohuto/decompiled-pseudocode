/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@UBCMStartupGracePeriodExpiredContext@@@@UEAAXXZ @ 0x1800034F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180003910 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<BCMStartupGracePeriodExpiredContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *__hidden, struct BCMStartupGracePeriodExpiredContext *); // rdi
  struct BCMStartupGracePeriodExpiredContext *v2; // rsi

  v1 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, struct BCMStartupGracePeriodExpiredContext *))(a1 + 8);
  v2 = *(struct BCMStartupGracePeriodExpiredContext **)(a1 + 16);
  if ( v1 == CApplicationManager::OnBCMStartupGracePeriodExpired )
    CApplicationManager::OnBCMStartupGracePeriodExpired(g_ApplicationManager, v2);
  else
    v1(g_ApplicationManager, v2);
  operator delete(*(void **)(a1 + 16));
}
