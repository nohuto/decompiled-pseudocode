/*
 * XREFs of IoWMIRegistrationControl @ 0x1404B3074
 * Callers:
 *     PpmEnableWmiInterface @ 0x140530A5C (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x1406B872C (ViDdiDriverEntry.c)
 *     VerifierIoWMIRegistrationControl @ 0x1406D0E58 (VerifierIoWMIRegistrationControl.c)
 *     WmipDriverEntry @ 0x140752B34 (WmipDriverEntry.c)
 *     WheaInitialize @ 0x140757730 (WheaInitialize.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14001AFF0 (WmipUnreferenceRegEntry.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x1400EA788 (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterDevice @ 0x1404B3148 (WmipDeregisterDevice.c)
 *     WmipUpdateRegistration @ 0x140507BF8 (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipSetTraceNotify @ 0x140542638 (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  int v2; // r14d
  ULONG v4; // edx
  NTSTATUS v5; // ebx
  ULONG v7; // edx
  ULONG v8; // edx
  ULONG v9; // edx
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( WmipServiceDeviceObject )
  {
    if ( (Action & 0x80000000) != 0 )
      Action &= ~0x80000000;
    if ( (Action & 0x10000) != 0 )
    {
      v2 = 1;
      Action &= 0xFF0EFFFF;
    }
    v4 = Action - 1;
    if ( !v4 )
    {
      v5 = WmipRegisterDevice(DeviceObject);
      if ( v2 )
        WmipSetTraceNotify(DeviceObject);
      return v5;
    }
    v7 = v4 - 1;
    if ( !v7 )
      return WmipDeregisterDevice(DeviceObject);
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          return -1073741811;
        RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
        if ( !RegEntryByDevice )
          return -1073741811;
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
        KeReleaseMutex(&WmipSMMutex, 0);
        WmipUnreferenceRegEntry(RegEntryByDevice);
        return 0;
      }
      return WmipUpdateRegistration(DeviceObject);
    }
    else
    {
      v5 = WmipDeregisterDevice(DeviceObject);
      if ( v5 < 0 )
        return v5;
      return WmipRegisterDevice(DeviceObject);
    }
  }
  return -1073741823;
}
