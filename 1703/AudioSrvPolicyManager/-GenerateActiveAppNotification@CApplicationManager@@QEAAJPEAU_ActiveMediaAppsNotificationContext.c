/*
 * XREFs of ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180013470
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001A7D4 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall CApplicationManager::GenerateActiveAppNotification(CApplicationManager *this, DWORD *a2)
{
  unsigned int v2; // edi
  DWORD v3; // ebx
  int v4; // eax
  struct TSSession *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  v4 = TsSessionFromSessionId(v3, 0, 0LL, &v6);
  if ( v4 )
  {
    v2 = (unsigned __int16)v4 | 0x80070000;
    if ( v4 <= 0 )
      v2 = v4;
  }
  else
  {
    TsSessionSendAppManagerNotification(v6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  return v2;
}
