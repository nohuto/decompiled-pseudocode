/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x1C0012A70
 * Callers:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000A770 (ACPIInternalSetDeviceInterface.c)
 *     ACPICMButtonStartWorker @ 0x1C000A7E0 (ACPICMButtonStartWorker.c)
 *     ACPIBuildProcessorExtension @ 0x1C000AFE0 (ACPIBuildProcessorExtension.c)
 *     ACPIInitDosDeviceName @ 0x1C000BB70 (ACPIInitDosDeviceName.c)
 *     ACPIDetectFilterDevices @ 0x1C000D120 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000E600 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EC80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C000EE50 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000EF40 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000F010 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F170 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000F270 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F370 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011640 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C00118D0 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011BB0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C0012270 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0012BA0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0013AE0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C001E640 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001FE34 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0020A50 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0020C20 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C0026120 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C0026230 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0026360 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0026720 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C00269B0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x1C0027C88 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028100 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C0028FD4 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0043F14 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0044F50 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0045180 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0045230 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C00461DC (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonWaitWakeComplete @ 0x1C0047B00 (ACPICMButtonWaitWakeComplete.c)
 *     ACPICMLidWorker @ 0x1C0047F50 (ACPICMLidWorker.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0049190 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 *     ACPIThermalStartDevice @ 0x1C0081910 (ACPIThermalStartDevice.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0087560 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0087A18 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C008F1F0 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1C008F9F0 (ACPISystemPowerProcessSxD.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1C008FD00 (ACPIBusIrpQueryBusInformation.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0098150 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009A004 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x1C009A390 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPIFanStartDevice @ 0x1C009BAF0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C009C360 (ACPIInitStopDevice.c)
 *     ACPIDispatchAddDevice @ 0x1C00A7150 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v10; // rsi
  const char *v12; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  char *v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rdx
  const char *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // r8
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+70h] [rbp-28h]
  __int64 v30; // [rsp+78h] [rbp-20h]
  __int64 v31; // [rsp+80h] [rbp-18h]
  __int64 v32; // [rsp+88h] [rbp-10h]

  v10 = a9;
  v12 = a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v21 = (char *)WPP_GLOBAL_Control + 80 * v14;
    if ( (unsigned __int8)v21[41] >= a2 )
    {
      if ( a9 )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( a9[v22] );
        v23 = v22 + 1;
        v24 = a9;
      }
      else
      {
        v23 = 5LL;
        v24 = "NULL";
      }
      if ( a8 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a8[v25] );
        v26 = v25 + 1;
        v27 = a8;
      }
      else
      {
        v26 = 5LL;
        v27 = "NULL";
      }
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v21 + 3),
        43LL,
        a5,
        a4,
        &a6,
        4LL,
        &a7,
        8LL,
        v27,
        v26,
        v24,
        v23,
        0LL);
    }
  }
  if ( v10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
    v10 = "NULL";
  }
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v19 = v15 + 1;
  }
  else
  {
    v19 = 5LL;
    v12 = "NULL";
  }
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 4LL, &a7, 8LL, v12, v19, v10, v18, 0LL, v29, v30, v31, v32);
}
