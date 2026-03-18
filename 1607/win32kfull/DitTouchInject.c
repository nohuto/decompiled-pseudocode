/*
 * XREFs of DitTouchInject @ 0x1C01D6B0C
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 * Callees:
 *     xxxProcessHidInput @ 0x1C01CCFA0 (xxxProcessHidInput.c)
 */

__int64 DitTouchInject()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 1LL);
  EnterDeviceInfoListCrit_(v0);
  v3 = gpDeviceInfoList;
  while ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 96) & 0x80u) == 0 )
    {
      v3 = *(_QWORD *)(v3 + 56);
    }
    else
    {
      LeaveDeviceInfoListCrit_(v2, v1);
      HMAssignmentLock(&gpDitTouchInjectionDeviceInfo, v3);
      xxxProcessHidInput((struct DEVICEINFO *)v3);
      EnterDeviceInfoListCrit_(v4);
      v3 = *(_QWORD *)(v3 + 56);
      HMAssignmentUnlock(&gpDitTouchInjectionDeviceInfo);
    }
  }
  if ( gbTouchInjectionBlockedOnDIT )
    KeSetEvent(gpkeDITTouchInjectionResponseEvent, 1, 0);
  LeaveDeviceInfoListCrit_(v2, v1);
  return UserSessionSwitchLeaveCrit(v6, v5);
}
