/*
 * XREFs of _CmDeleteDeviceRegKey @ 0x1406D85AC
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v16; // [rsp+30h] [rbp-51h]
  int v17[20]; // [rsp+38h] [rbp-49h] BYREF

  v16 = 0;
  memset(v17, 0, sizeof(v17));
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 328);
  v17[5] = 0;
  v17[3] = a4;
  v17[2] = a3;
  LOBYTE(v17[4]) = 1;
  if ( v8 )
  {
    v9 = v8(a1, a2, 1LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return v16;
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmDeleteDeviceRegKeyWorker(a1, a2, v17[2], v17[3], v17[4]);
  v11 = v10;
  if ( !v8 )
    return v11;
  v16 = v10;
  v12 = v8(a1, a2, 1LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    return v11;
  if ( v12 == -1073741536 )
    return v16;
  v14 = v11;
  if ( v13 )
    return (unsigned int)-1073741595;
  return v14;
}
