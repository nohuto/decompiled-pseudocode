/*
 * XREFs of ZwEnumerateKey @ 0x14017F630
 * Callers:
 *     BiZwEnumerateKey @ 0x14014FE28 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14015E290 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1405917F8 (_RtlpMuiRegLoadInstalled.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 *     CmpGetAcpiProfileInformation @ 0x1405A3214 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A63CC (RtlpUpdateDynamicTimeZones.c)
 *     _RegRtlEnumKey @ 0x1405A8C6C (_RegRtlEnumKey.c)
 *     NtLockProductActivationKeys @ 0x1405AD7FC (NtLockProductActivationKeys.c)
 *     WdipSemLoadNextEndEvent @ 0x1405AE0B4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1405AE3A8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1405AE904 (WdipSemLoadNextScenario.c)
 *     PopConfigureHeteroProcessors @ 0x1405B0F14 (PopConfigureHeteroProcessors.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     CmDeleteKeyRecursive @ 0x14065EBF8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x14065F9C8 (CmpMoveBiosAliasTable.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1406DF904 (WdipSemLoadLocalGroupPolicy.c)
 *     VfZwEnumerateKey @ 0x140755F04 (VfZwEnumerateKey.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
