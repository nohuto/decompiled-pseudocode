/*
 * XREFs of RtlStringCbCopyW @ 0x1400CF240
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x14015E348 (RtlpGetNameFromLangInfoNode.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14045B4C4 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14045D640 (PiDcHandleCustomDeviceEvent.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     WmipSendGuidUpdateNotifications @ 0x1404A9958 (WmipSendGuidUpdateNotifications.c)
 *     WmipEnumerateMofResources @ 0x1404AC0B4 (WmipEnumerateMofResources.c)
 *     WmipInsertStaticNames @ 0x1404D2380 (WmipInsertStaticNames.c)
 *     PiSwFindSwDevice @ 0x140538814 (PiSwFindSwDevice.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1405A67DC (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x1405A77D8 (SepRmFetchGlobalSacl.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PfSnParametersRead @ 0x1405B6BFC (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x1405BC498 (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpressionConvertToString @ 0x14071DFC0 (ExpressionConvertToString.c)
 *     PfSnParametersSetDefaults @ 0x1407DF218 (PfSnParametersSetDefaults.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1407FBE10 (ViMakeVerifierSettings.c)
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
