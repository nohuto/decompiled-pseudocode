/*
 * XREFs of DitTouchInject @ 0x1C01DFA68
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 * Callees:
 *     xxxProcessHidInput @ 0x1C01D44F0 (xxxProcessHidInput.c)
 */

__int64 DitTouchInject()
{
  __int64 v0; // rcx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(1LL);
  EnterDeviceInfoListCrit_(v0);
  v2 = gpDeviceInfoList;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 96) & 0x80u) == 0 )
    {
      v2 = *(_QWORD *)(v2 + 56);
    }
    else
    {
      LeaveDeviceInfoListCrit_(v1);
      HMAssignmentLock(&gpDitTouchInjectionDeviceInfo, v2);
      xxxProcessHidInput((struct DEVICEINFO *)v2);
      EnterDeviceInfoListCrit_(v3);
      v2 = *(_QWORD *)(v2 + 56);
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    }
  }
  if ( gbTouchInjectionBlockedOnDIT )
    KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v1);
  return UserSessionSwitchLeaveCrit(v5, v4);
}
