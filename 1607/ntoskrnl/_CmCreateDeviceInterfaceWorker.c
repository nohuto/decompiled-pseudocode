/*
 * XREFs of _CmCreateDeviceInterfaceWorker @ 0x1406D73CC
 * Callers:
 *     _CmCreateDeviceInterface @ 0x1406D7260 (_CmCreateDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x1404DBA3C (_CmGetDeviceInterfaceClassGuidString.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmCreateInterfaceClass @ 0x1406D76F4 (_CmCreateInterfaceClass.c)
 *     _CmRaiseCreateEvent @ 0x1406DC028 (_CmRaiseCreateEvent.c)
 */

__int64 __fastcall CmCreateDeviceInterfaceWorker(__int64 a1, __int64 a2, int a3, HANDLE *a4, bool *a5, __int16 a6)
{
  int DeviceInterfaceClassGuidString; // ebx
  __int64 v12; // r9
  bool v13; // al
  _DWORD v14[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v15[80]; // [rsp+50h] [rbp-88h] BYREF

  v14[0] = 0;
  if ( a6 )
  {
    DeviceInterfaceClassGuidString = -1073741811;
    goto LABEL_3;
  }
  DeviceInterfaceClassGuidString = CmGetDeviceInterfaceClassGuidString(a1, a2, (__int64)v15);
  if ( DeviceInterfaceClassGuidString < 0
    || (DeviceInterfaceClassGuidString = CmCreateInterfaceClass(a1, (unsigned int)v15, 0, 0, 0LL, 0),
        DeviceInterfaceClassGuidString < 0)
    || (DeviceInterfaceClassGuidString = CmOpenDeviceInterfaceRegKey(a1, a2, 0x30u, v12, a3, 1, (__int64)a4, v14),
        DeviceInterfaceClassGuidString < 0) )
  {
LABEL_3:
    if ( *a4 )
    {
      ZwClose(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)DeviceInterfaceClassGuidString;
  }
  v13 = v14[0] == 1;
  *a5 = v14[0] == 1;
  if ( v13 )
    CmRaiseCreateEvent(a1, a2, 3LL, *a4);
  return (unsigned int)DeviceInterfaceClassGuidString;
}
