/*
 * XREFs of _CmGetMatchingFilteredDeviceList @ 0x1404C08A4
 * Callers:
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D90AC (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1406DBA58 (_CmGetMatchingFilteredDeviceListWorker.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceList(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int64, int, _QWORD *); // r13
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int MatchingFilteredDeviceListWorker; // eax
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  _QWORD v20[12]; // [rsp+60h] [rbp-71h] BYREF

  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, _QWORD *))(a1 + 328);
  LODWORD(v20[0]) = 0;
  memset(&v20[1], 0, 0x50uLL);
  LODWORD(v20[9]) = 0;
  v20[8] = a8;
  v20[2] = a2;
  LODWORD(v20[3]) = a3;
  v20[4] = a4;
  v20[6] = a6;
  v20[5] = a5;
  LODWORD(v20[7]) = a7;
  if ( v8 )
  {
    v12 = v8(a1, 0LL, 1LL, 16LL, 1, v20);
    if ( v12 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v20[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  MatchingFilteredDeviceListWorker = CmGetMatchingFilteredDeviceListWorker(
                                       a1,
                                       v20[2],
                                       v20[3],
                                       v20[4],
                                       v20[5],
                                       v20[6],
                                       v20[7],
                                       v20[8],
                                       v20[9]);
  v13 = MatchingFilteredDeviceListWorker;
  if ( v8 )
  {
    LODWORD(v20[0]) = MatchingFilteredDeviceListWorker;
    v16 = v8(a1, 0LL, 1LL, 16LL, 2, v20);
    v17 = v16;
    if ( v16 != -1073741822 )
    {
      if ( v16 == -1073741536 )
        return LODWORD(v20[0]);
      v18 = v13;
      if ( v17 )
        return (unsigned int)-1073741595;
      return v18;
    }
  }
  return v13;
}
