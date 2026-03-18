/*
 * XREFs of _TlgWrite @ 0x1800636A0
 * Callers:
 *     ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z @ 0x18000F7B4 (-TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@QEAAXI_K@Z.c)
 *     ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180010170 (-PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?GetRealization@CManipulationTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x1800166D0 (-GetRealization@CManipulationTransform@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800543E8 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180064118 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18008D63C (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x18008E050 (-PostEvent@CompositionErrorEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180096FFC (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800E4E20 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x1800E5554 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18010D8FC (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18010F3A0 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18010FB94 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180115A20 (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?PostEvent@DFlipFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180123F00 (-PostEvent@DFlipFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@HighErrorRateEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180123F90 (-PostEvent@HighErrorRateEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@OveralyFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180124030 (-PostEvent@OveralyFailedEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18012BC24 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEAI@Z @ 0x18012C120 (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18012C518 (--$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@@Z @ 0x18012CBC0 (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012CEC0 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012D520 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJIW4InteractionState@@@Z @ 0x18012DB3C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18012DDD4 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UD2DVec.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@@Z @ 0x18012E008 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NPEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012E4E4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NPEAUInteractionAxisGroup@@PEAUInteractionA.c)
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x18012EB9C (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18012EF34 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18012F0E0 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@@Z.c)
 *     ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x18012F250 (-ResetOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 *     ?StopInteraction@CInteractionContextWrapper@@UEAAJXZ @ 0x18012F350 (-StopInteraction@CInteractionContextWrapper@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

TLG_STATUS __stdcall TlgWrite(
        TraceLoggingHProvider hProvider,
        const void *pEventMetadata,
        LPCGUID pActivityId,
        LPCGUID pRelatedActivityId,
        UINT32 cData,
        EVENT_DATA_DESCRIPTOR *pData)
{
  ULONG v7; // ecx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = ((_DWORD)pEventMetadata - (unsigned int)&TraceLoggingMetadata) | (*(unsigned __int8 *)pEventMetadata << 24);
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)((char *)pEventMetadata + 1);
  EventDescriptor.Keyword = *(_QWORD *)((char *)pEventMetadata + 3);
  pData->Ptr = *((_QWORD *)hProvider + 1);
  v7 = **((unsigned __int16 **)hProvider + 1);
  pData[1].Ptr = (ULONGLONG)pEventMetadata + 11;
  pData->Size = v7;
  pData->Reserved = 2;
  pData[1].Size = *(unsigned __int16 *)((char *)pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EventWriteTransfer(*((_QWORD *)hProvider + 4), &EventDescriptor, 0LL, 0LL, cData, pData);
}
