/*
 * XREFs of RtlStringCbCopyW @ 0x140090A98
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x14013A9EC (RtlpGetNameFromLangInfoNode.c)
 *     WmipSendGuidUpdateNotifications @ 0x1403D1AC8 (WmipSendGuidUpdateNotifications.c)
 *     WmipInsertStaticNames @ 0x1403D2DE0 (WmipInsertStaticNames.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PiSwFindSwDevice @ 0x1404968E4 (PiSwFindSwDevice.c)
 *     WmipEnumerateMofResources @ 0x1404BE074 (WmipEnumerateMofResources.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1404E218C (PiDcHandleCustomDeviceEvent.c)
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1404E4050 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14053C004 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     SepRmFetchGlobalSacl @ 0x14053C4F0 (SepRmFetchGlobalSacl.c)
 *     PfSnParametersRead @ 0x140540E38 (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x14054471C (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x1405EE270 (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x14069D964 (ExpressionConvertToString.c)
 *     PfSnParametersSetDefaults @ 0x14076A7B0 (PfSnParametersSetDefaults.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1407854AC (ViMakeVerifierSettings.c)
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
