/*
 * XREFs of RtlStringCbCopyW @ 0x1400C47BC
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400AF76C (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140140288 (RtlpGetNameFromLangInfoNode.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1403F0DB0 (PiDcHandleCustomDeviceEvent.c)
 *     PiSwFindSwDevice @ 0x1404C63C0 (PiSwFindSwDevice.c)
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404C6A1C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     WmipEnumerateMofResources @ 0x1404E738C (WmipEnumerateMofResources.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x140504A34 (WmipInsertStaticNames.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537A1C (WmipSendGuidUpdateNotifications.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14055F540 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     EtwpEnableKeyProviders @ 0x14056366C (EtwpEnableKeyProviders.c)
 *     SepRmFetchGlobalSacl @ 0x14056B6F0 (SepRmFetchGlobalSacl.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     PfSnParametersRead @ 0x140571EAC (PfSnParametersRead.c)
 *     DbgkSendSystemDllMessages @ 0x140617E98 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F03C (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A0764 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x1406E452C (ExpressionConvertToString.c)
 *     PfSnParametersSetDefaults @ 0x1407B3F18 (PfSnParametersSetDefaults.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1407D18BC (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v5; // r10
  signed __int64 v6; // r8
  wchar_t v7; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !v3 )
      return v4;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      goto LABEL_12;
    v5 = 2147483646 - v3;
    v6 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v5 + v3) )
        break;
      v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
LABEL_12:
      --pszDest;
      v4 = -2147483643;
    }
  }
  *pszDest = 0;
  return v4;
}
