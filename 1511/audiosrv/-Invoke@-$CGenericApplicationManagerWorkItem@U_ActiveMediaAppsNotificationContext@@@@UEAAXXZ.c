/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAXXZ @ 0x180002A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x1800040A0 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *__hidden, struct _ActiveMediaAppsNotificationContext *); // rdi
  struct _ActiveMediaAppsNotificationContext *v2; // rsi

  v1 = *(__int64 (__fastcall **)(CApplicationManager *__hidden, struct _ActiveMediaAppsNotificationContext *))(a1 + 8);
  v2 = *(struct _ActiveMediaAppsNotificationContext **)(a1 + 16);
  if ( v1 == CApplicationManager::GenerateActiveAppNotification )
    CApplicationManager::GenerateActiveAppNotification(g_ApplicationManager, v2);
  else
    v1(g_ApplicationManager, v2);
  operator delete(*(void **)(a1 + 16));
}
