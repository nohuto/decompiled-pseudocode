/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x1404E72F8
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1403F4410 (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404D3EC8 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x1404E12F0 (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x1404E5D50 (PiCMGetRegistryProperty.c)
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F344 (PiPnpRtlServiceFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x1406DBBF8 (_CmServiceFilterCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E7094 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(__int64 *a1, __int64 a2, void *a3, int a4, void *a5, void *a6, void *a7)
{
  __int64 (__fastcall *v10)(__int64 *, __int64, __int64, __int64, int, void **); // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  void *v19[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x50uLL);
  v10 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, __int64, int, void **))a1[41];
  LODWORD(v19[7]) = 0;
  LODWORD(v19[3]) = a4;
  v19[2] = a3;
  v19[5] = a6;
  v19[6] = a7;
  v19[4] = a5;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 9LL, 1, v19);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v19[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker(
                                  a1,
                                  a2,
                                  v19[2],
                                  LODWORD(v19[3]),
                                  (_DWORD *)v19[4],
                                  (__int64)v19[5],
                                  (unsigned int *)v19[6],
                                  (__int16)v19[7]);
  v13 = InstallerClassRegPropWorker;
  if ( !v10 )
    return v13;
  LODWORD(v19[0]) = InstallerClassRegPropWorker;
  v14 = v10(a1, a2, 2LL, 9LL, 2, v19);
  v15 = v14;
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return LODWORD(v19[0]);
  v16 = v13;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
