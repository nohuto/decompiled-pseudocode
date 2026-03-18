/*
 * XREFs of InitializeTouchPadSysParams @ 0x14027B9B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x140297348 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 */

__int64 __fastcall InitializeTouchPadSysParams(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // eax

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_OWORD *)(UserSessionState + 16760) = 0LL;
  *(_OWORD *)(UserSessionState + 16776) = 0LL;
  *(_OWORD *)(UserSessionState + 16792) = 0LL;
  Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage();
  *(_DWORD *)(UserSessionState + 16760) = 3;
  *(_DWORD *)(UserSessionState + 16772) |= 0x10u;
  *(_DWORD *)(W32GetUserSessionState(v4, v3) + 352) = 1;
  *(_DWORD *)(UserSessionState + 16788) = 50;
  *(_QWORD *)(UserSessionState + 16792) = 50LL;
  v5 = *(_DWORD *)(UserSessionState + 16776) & 0xFFFFFDBF;
  *(_DWORD *)(UserSessionState + 16780) = 2;
  *(_DWORD *)(UserSessionState + 16784) = 10;
  *(_DWORD *)(UserSessionState + 16776) = v5 | 0x1BF;
  *(_DWORD *)(UserSessionState + 16800) = 0;
  return CPTPProcessor::EnvironmentChanged();
}
