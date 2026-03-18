/*
 * XREFs of RtlStringCchCopyExW @ 0x1400C34A8
 * Callers:
 *     _CmGetDeviceInterfaceName @ 0x140487220 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404CF88C (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1404CFAC4 (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404D5918 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404E2820 (PiPnpRtlGetFilteredDeviceList.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404FA878 (_RegRtlCreateTreeTransacted.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1404FC150 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiDmGetObjectListCallback @ 0x140500C10 (PiDmGetObjectListCallback.c)
 *     DrvDbGetDriverDatabaseList @ 0x140502B1C (DrvDbGetDriverDatabaseList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140528F14 (_CmGetDeviceInterfaceReferenceString.c)
 *     PipHardwareConfigOpenKey @ 0x14054FB84 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561A98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140561D68 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140562FC0 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140563074 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x14062B650 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC50C (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1406DCF24 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406E09D8 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x1400C35B0 (RtlStringCopyWorkerW_2.c)
 *     RtlStringExValidateDestW @ 0x1400C3620 (RtlStringExValidateDestW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401CCBB4 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401CCBD8 (RtlStringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  int v9; // ebx
  const wchar_t *v10; // r8
  wchar_t *v11; // r15
  size_t v12; // rsi
  const size_t *v13; // rax
  size_t v14; // rax
  size_t *v16; // [rsp+20h] [rbp-48h]
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

  v9 = RtlStringExValidateDestW(pszDest, cchDest, (const size_t)pszSrc, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v11 = pszDest;
    pcchNewDestLength = cchDest;
    v12 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = &cchOriginalDestLength;
      if ( v10 )
        v13 = (const size_t *)v10;
      v10 = (const wchar_t *)v13;
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
      pcchNewDestLength = 0LL;
      v9 = RtlStringCopyWorkerW_2(pszDest, cchDest, &pcchNewDestLength, v10, (size_t)v16);
      v14 = pcchNewDestLength;
      v12 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v11 = &pszDest[v14];
      ppszDestEnda = v11;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v12, dwFlags);
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
      RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, 0LL, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v11 = ppszDestEnda;
      v12 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_10;
  }
  return v9;
}
