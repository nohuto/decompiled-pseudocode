/*
 * XREFs of ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x1800040A0
 * Callers:
 *     ?Invoke@?$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAXXZ @ 0x180002A30 (-Invoke@-$CGenericApplicationManagerWorkItem@U_ActiveMediaAppsNotificationContext@@@@UEAAXXZ.c)
 * Callees:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180002CC0 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002C5A0 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall CApplicationManager::GenerateActiveAppNotification(
        CApplicationManager *this,
        struct _ActiveMediaAppsNotificationContext *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // eax
  struct TSSession *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(v3, 0, 0LL, &v6);
  if ( v4 )
  {
    if ( v4 > 0 )
      v2 = (unsigned __int16)v4 | 0x80070000;
    else
      v2 = v4;
  }
  else
  {
    TsSessionSendAppManagerNotification(v6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v2;
}
