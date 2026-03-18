/*
 * XREFs of RtlStringCchCopyExW @ 0x140090110
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043E634 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmGetObjectListCallback @ 0x14043EB64 (PiDmGetObjectListCallback.c)
 *     DrvDbGetDriverDatabaseList @ 0x140443914 (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140444D58 (_RegRtlCreateTreeTransacted.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14045C2F8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404969B0 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404C6DBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E5254 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1404E6394 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceParent @ 0x1404F1E6C (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x1404F9AB8 (_CmGetDeviceChildren.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x14051A13C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PipHardwareConfigOpenKey @ 0x1405238F8 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405313E4 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x14053248C (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140532540 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x140601604 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14069712C (_PnpGetGenericStorePropertyLocales.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     sub_140090210 @ 0x140090210 (sub_140090210.c)
 *     sub_140090280 @ 0x140090280 (sub_140090280.c)
 *     unknown_libname_3 @ 0x1401BE61C (unknown_libname_3.c)
 *     sub_1401BE640 @ 0x1401BE640 (sub_1401BE640.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  __int16 *v10; // r8
  wchar_t *v11; // r15
  size_t v12; // rsi
  __int16 *v13; // rax
  size_t v14; // rax
  NTSTRSAFE_PWSTR v16; // [rsp+30h] [rbp-38h] BYREF
  size_t v17; // [rsp+38h] [rbp-30h] BYREF

  v9 = sub_140090280(pszDest, cchDest, pszSrc, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v16 = pszDest;
    v11 = pszDest;
    v17 = cchDest;
    v12 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = &word_140167200;
      if ( v10 )
        v13 = v10;
      v10 = v13;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      v17 = 0LL;
      v9 = sub_140090210(pszDest, cchDest, &v17, v10);
      v14 = v17;
      v12 = cchDest - v17;
      v17 = cchDest - v17;
      v11 = &pszDest[v14];
      v16 = v11;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          unknown_libname_3(&pszDest[v14], 2 * v12, dwFlags);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_10:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcchRemaining )
          *pcchRemaining = v12;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      sub_1401BE640(pszDest, 2 * cchDest, 0LL, &v16, &v17, dwFlags);
      v11 = v16;
      v12 = v17;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_10;
  }
  return v9;
}
