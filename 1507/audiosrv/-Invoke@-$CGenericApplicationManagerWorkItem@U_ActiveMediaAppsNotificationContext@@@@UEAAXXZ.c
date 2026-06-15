/*
 * XREFs of ?Invoke@?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAXXZ @ 0x180005090
 * Callers:
 *     <none>
 * Callees:
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180002800 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

void __fastcall CGenericApplicationManagerWorkItem<_ActiveMediaAppsNotificationContext>::Invoke(__int64 a1)
{
  __int64 (__fastcall *v1)(CApplicationManager *, struct _ActiveMediaAppsNotificationContext *); // rdi
  struct _ActiveMediaAppsNotificationContext *v2; // rsi

  v1 = *(__int64 (__fastcall **)(CApplicationManager *, struct _ActiveMediaAppsNotificationContext *))(a1 + 8);
  v2 = *(struct _ActiveMediaAppsNotificationContext **)(a1 + 16);
  if ( v1 == CApplicationManager::GenerateActiveAppNotification )
    CApplicationManager::GenerateActiveAppNotification(g_ApplicationManager, v2);
  else
    v1(g_ApplicationManager, v2);
  operator delete(*(void **)(a1 + 16));
}
