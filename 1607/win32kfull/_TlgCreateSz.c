/*
 * XREFs of _TlgCreateSz @ 0x1C021F6CC
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00E54AC (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00E55F8 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0123DF0 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z @ 0x1C021F198 (-TraceLoggingStubInvalidParamEvent@@YAXIKQEAD@Z.c)
 *     ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C021F318 (-TraceLoggingTouchInjection@@YAXHHHK@Z.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C023A968 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C023AA98 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C023AC10 (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023AE10 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C023AF78 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C023B1F4 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B484 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023B6F8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C023B958 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 *     ?SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z @ 0x1C023BAB0 (-SendDeviceHapticsOutput@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_OUTPUT@@@Z.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023BC38 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C023BE1C (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATION@@@Z @ 0x1C023BF88 (-SetDeviceHapticsConfiguration@InteractiveControlManager@@QEAAJKAEBU_GERERIC_HAPTICS_CONFIGURATI.c)
 *     ?SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023C130 (-SetDeviceHapticsMode@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C023C2DC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     ?CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z @ 0x1C023C9DC (-CloseHapticsWriteDevice@InteractiveControlDevice@@QEAAJH@Z.c)
 *     ?HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C023D2B0 (-HapticsDeviceNotify@InteractiveControlDevice@@SAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023D4F0 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023D848 (-OpenHapticsWriteDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023DEA4 (-SendDeviceIOControl@InteractiveControlDevice@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 *     ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C02403DC (-FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@PEAU_HIDP_PRE.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C02406F0 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02407D8 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax
  LPCSTR v3; // r8

  LODWORD(v2) = 0;
  v3 = (LPCSTR)qword_1C015D5C0;
  if ( psz )
  {
    v3 = psz;
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  pDesc->Reserved = 0;
  pDesc->Size = v2 + 1;
  pDesc->Ptr = (ULONGLONG)v3;
}
