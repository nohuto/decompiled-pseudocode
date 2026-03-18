/*
 * XREFs of RemoveRimManagedInputDevices @ 0x1C009A198
 * Callers:
 *     RemoveInputDevices @ 0x1C009A070 (RemoveInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 RemoveRimManagedInputDevices()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v0 = aDeviceTemplate[0];
  if ( LODWORD(aDeviceTemplate[12]) )
  {
    if ( gptiCurrent == *((_QWORD *)&gTermIO + 2) )
    {
      result = RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[13], 0LL);
    }
    else
    {
      KeSetEvent((PRKEVENT)aDeviceTemplate[40], 1, 0);
      UserSessionSwitchLeaveCrit(v2, v1);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[43], WrUserRequest, 0, 0, 0LL);
      result = EnterCrit(0LL, 1LL);
    }
    v0 = aDeviceTemplate[0];
  }
  if ( *(_DWORD *)(v0 + 664) )
  {
    if ( gptiCurrent == gptiRit )
    {
      result = RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v0 + 672), 1LL);
    }
    else
    {
      KeSetEvent(*(PRKEVENT *)(v0 + 888), 1, 0);
      UserSessionSwitchLeaveCrit(v5, v4);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[114], WrUserRequest, 0, 0, 0LL);
      result = EnterCrit(0LL, 1LL);
    }
    v0 = aDeviceTemplate[0];
  }
  if ( *(_DWORD *)(v0 + 1232) )
  {
    if ( gptiCurrent != gptiRit || gbDIT )
    {
      KeSetEvent(*(PRKEVENT *)(v0 + 1456), 1, 0);
      UserSessionSwitchLeaveCrit(v7, v6);
      KeWaitForSingleObject((PVOID)aDeviceTemplate[185], WrUserRequest, 0, 0, 0LL);
      return EnterCrit(0LL, 1LL);
    }
    else
    {
      return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v0 + 1240), 2LL);
    }
  }
  return result;
}
