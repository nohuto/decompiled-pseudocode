/*
 * XREFs of ?QueryNotificationsState@NotificationManager@ContentManagement@@UEAAJPEAW4NotificationsState@2@@Z @ 0x18000A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::NotificationManager::QueryNotificationsState(
        ContentManagement::NotificationManager *this,
        enum ContentManagement::NotificationsState *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  QUERY_USER_NOTIFICATION_STATE pquns; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = SHQueryUserNotificationState(&pquns);
  v4 = v3;
  if ( v3 >= 0 )
  {
    switch ( pquns )
    {
      case QUNS_BUSY:
        *(_DWORD *)a2 = 2;
        break;
      case QUNS_PRESENTATION_MODE:
        *(_DWORD *)a2 = 4;
        break;
      case QUNS_ACCEPTS_NOTIFICATIONS:
        *(_DWORD *)a2 = 1;
        break;
      case QUNS_QUIET_TIME:
        *(_DWORD *)a2 = 3;
        break;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
