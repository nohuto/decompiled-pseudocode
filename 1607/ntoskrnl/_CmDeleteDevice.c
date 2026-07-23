/*
 * XREFs of _CmDeleteDevice @ 0x1406D7DF8
 * Callers:
 *     _PnpDispatchDevice @ 0x1404E3594 (_PnpDispatchDevice.c)
 *     IoReportRootDevice @ 0x140578358 (IoReportRootDevice.c)
 *     PiCMDeleteDevice @ 0x140646C20 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 */

__int64 __fastcall CmDeleteDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+30h] [rbp-88h]
  _DWORD v15[20]; // [rsp+38h] [rbp-80h] BYREF

  v14 = 0;
  memset(v15, 0, sizeof(v15));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v15[2] = a3;
  if ( v6 )
  {
    v7 = v6(a1, a2, 1LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14;
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceWorker(a1, a2, v15[2]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14 = v8;
  v10 = v6(a1, a2, 1LL);
  v11 = v10;
  if ( v10 == -1073741822 )
    return v9;
  if ( v10 == -1073741536 )
    return v14;
  v12 = v9;
  if ( v11 )
    return (unsigned int)-1073741595;
  return v12;
}
