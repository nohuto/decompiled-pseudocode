/*
 * XREFs of RtlStringCbCopyW @ 0x1400C265C
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400ADCD4 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1401407F8 (RtlpGetNameFromLangInfoNode.c)
 *     PiSwFindSwDevice @ 0x1404867FC (PiSwFindSwDevice.c)
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x140487650 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140489514 (PiDcHandleCustomDeviceEvent.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     WmipEnumerateMofResources @ 0x1404C9900 (WmipEnumerateMofResources.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x1404E79C4 (WmipInsertStaticNames.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537F5C (WmipSendGuidUpdateNotifications.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14055FA80 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 *     SepRmFetchGlobalSacl @ 0x14056BC30 (SepRmFetchGlobalSacl.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     PfSnParametersRead @ 0x1405723EC (PfSnParametersRead.c)
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F174 (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x1406E4664 (ExpressionConvertToString.c)
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
