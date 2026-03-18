/*
 * XREFs of RtlStringCchCopyExW @ 0x140019AA0
 * Callers:
 *     PiDmGetObjectListCallback @ 0x14043AD88 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x14043D720 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceName @ 0x140459864 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404DA6E0 (_CmIsDeviceSafeRemovalRequired.c)
 *     DrvDbGetDriverDatabaseList @ 0x1404DD61C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404DD708 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DE5F8 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceParent @ 0x1404DEA74 (_CmGetDeviceParent.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14055EC58 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1405895B4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     PipHardwareConfigOpenKey @ 0x14058F444 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A7F40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A84A0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1405A966C (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x1405A9720 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x14067C214 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140716FC0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1407179D8 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     sub_140019BB0 @ 0x140019BB0 (sub_140019BB0.c)
 *     sub_140019D80 @ 0x140019D80 (sub_140019D80.c)
 *     unknown_libname_3 @ 0x1401F9E84 (unknown_libname_3.c)
 *     sub_1401F9EA8 @ 0x1401F9EA8 (sub_1401F9EA8.c)
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
  size_t v13; // rax
  __int16 *v15; // rax
  NTSTRSAFE_PWSTR v16; // [rsp+30h] [rbp-38h] BYREF
  size_t v17; // [rsp+38h] [rbp-30h] BYREF

  v9 = sub_140019D80(pszDest, cchDest, pszSrc, dwFlags);
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
      v15 = &word_140196B30;
      if ( v10 )
        v15 = v10;
      v10 = v15;
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
      v9 = sub_140019BB0(pszDest, cchDest, &v17, v10);
      v13 = v17;
      v12 = cchDest - v17;
      v17 = cchDest - v17;
      v11 = &pszDest[v13];
      v16 = v11;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          unknown_libname_3(&pszDest[v13], 2 * v12, dwFlags);
        goto LABEL_7;
      }
    }
    else
    {
      if ( !*v10 )
      {
LABEL_7:
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
      sub_1401F9EA8(pszDest, 2 * cchDest, 0LL, &v16, &v17, dwFlags);
      v11 = v16;
      v12 = v17;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_7;
  }
  return v9;
}
