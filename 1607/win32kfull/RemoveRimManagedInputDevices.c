/*
 * XREFs of RemoveRimManagedInputDevices @ 0x1C00E9168
 * Callers:
 *     RemoveInputDevices @ 0x1C00E90F0 (RemoveInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 RemoveRimManagedInputDevices()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
  {
    RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[12], 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)aDeviceTemplate[39], 1, 0);
    UserSessionSwitchLeaveCrit(v1, v0);
    KeWaitForSingleObject((PVOID)aDeviceTemplate[42], WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  if ( gptiCurrent == gptiRit )
  {
    RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[82], 1LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)aDeviceTemplate[109], 1, 0);
    UserSessionSwitchLeaveCrit(v3, v2);
    KeWaitForSingleObject((PVOID)aDeviceTemplate[112], WrUserRequest, 0, 0, 0LL);
    EnterCrit(0LL, 1LL);
  }
  if ( gptiCurrent == gptiRit && !gbDIT )
    return RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[152], 2LL);
  KeSetEvent((PRKEVENT)aDeviceTemplate[179], 1, 0);
  UserSessionSwitchLeaveCrit(v5, v4);
  KeWaitForSingleObject((PVOID)aDeviceTemplate[182], WrUserRequest, 0, 0, 0LL);
  return EnterCrit(0LL, 1LL);
}
