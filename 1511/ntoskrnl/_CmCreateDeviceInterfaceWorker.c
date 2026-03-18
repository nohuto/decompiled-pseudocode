/*
 * XREFs of _CmCreateDeviceInterfaceWorker @ 0x140517AF0
 * Callers:
 *     _CmCreateDeviceInterface @ 0x140517990 (_CmCreateDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x140441D28 (_CmGetDeviceInterfaceClassGuidString.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmRaiseCreateEvent @ 0x140517BFC (_CmRaiseCreateEvent.c)
 *     _CmCreateInterfaceClass @ 0x140517C80 (_CmCreateInterfaceClass.c)
 */

__int64 __fastcall CmCreateDeviceInterfaceWorker(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        HANDLE *a4,
        bool *a5,
        __int16 a6)
{
  int DeviceInterfaceClassGuidString; // ebx
  __int64 v11; // r9
  bool v12; // al
  _DWORD v14[4]; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v15[40]; // [rsp+50h] [rbp-88h] BYREF

  v14[0] = 0;
  if ( a6 )
  {
    DeviceInterfaceClassGuidString = -1073741811;
  }
  else
  {
    DeviceInterfaceClassGuidString = CmGetDeviceInterfaceClassGuidString(a1, a2, v15);
    if ( DeviceInterfaceClassGuidString >= 0 )
    {
      DeviceInterfaceClassGuidString = CmCreateInterfaceClass(a1, (unsigned int)v15, 0, 0, 0LL, 0);
      if ( DeviceInterfaceClassGuidString >= 0 )
      {
        DeviceInterfaceClassGuidString = CmOpenDeviceInterfaceRegKey(
                                           a1,
                                           (__int64)a2,
                                           0x30u,
                                           v11,
                                           a3,
                                           1,
                                           (__int64)a4,
                                           v14);
        if ( DeviceInterfaceClassGuidString >= 0 )
        {
          v12 = v14[0] == 1;
          *a5 = v14[0] == 1;
          if ( v12 )
            CmRaiseCreateEvent(a1, a2, 3LL, *a4);
          return (unsigned int)DeviceInterfaceClassGuidString;
        }
      }
    }
  }
  if ( *a4 )
  {
    ZwClose(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)DeviceInterfaceClassGuidString;
}
