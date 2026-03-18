/*
 * XREFs of _CmGetInstallerClassRegProp @ 0x1404DDCC8
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14043C61C (_CmGetDeviceRegPropWorker.c)
 *     PiCMGetRegistryProperty @ 0x140443A00 (PiCMGetRegistryProperty.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E70C0 (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistryDwordWithFallback @ 0x1404E7628 (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E7700 (PipGetRegistrySecurityWithFallback.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x140696B44 (_CmServiceFilterCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140698370 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404DDE30 (_CmGetInstallerClassRegPropWorker.c)
 */

__int64 __fastcall CmGetInstallerClassRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, _QWORD *); // r12
  int v11; // eax
  unsigned int InstallerClassRegPropWorker; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  _QWORD v19[12]; // [rsp+50h] [rbp-71h] BYREF

  LODWORD(v19[0]) = 0;
  memset(&v19[1], 0, 0x50uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, _QWORD *))(a1 + 320);
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
  InstallerClassRegPropWorker = CmGetInstallerClassRegPropWorker(a1, a2, v19[2], v19[3], v19[4], v19[5], v19[6], v19[7]);
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
