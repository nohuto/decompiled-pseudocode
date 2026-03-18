/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00B2490 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoSetDevicePower @ 0x1C00BC0D8 (DpiPdoSetDevicePower.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiGdoDispatchIoctl @ 0x1C00C4970 (DpiGdoDispatchIoctl.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C4CD8 (DpiFdoInvalidateChildStatus.c)
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 *     DpiPdoHandleQueryId @ 0x1C00D6720 (DpiPdoHandleQueryId.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00DC890 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00DD620 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     DpiFdoThermalActiveCooling @ 0x1C016B0F0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C016B240 (DpiFdoThermalPassiveCooling.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C016C250 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C016C300 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C016C3B0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C016C470 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C016C520 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C016C5D0 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C016C690 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C016C7B0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C016C850 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C016C8FC (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016CB58 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiPdoRemovePdo @ 0x1C016DFB0 (DpiPdoRemovePdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiAcquireCoreSyncAccessSafe(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v6 = *(_QWORD *)(v5 + 64);
  if ( *(_BYTE *)(v6 + 449) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v5 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 2400), 1u);
  if ( *(_DWORD *)(v6 + 236) == 6 || *(_DWORD *)(v6 + 240) == 6 || (v8 = *(unsigned int *)(v6 + 2584), (_DWORD)v8 == 3) )
  {
    v13 = -1073741810LL;
    v3 = -1073741810;
    v14 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(v6 + 24);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(v2 + 16) == 1953656900 )
  {
    if ( *(_DWORD *)(v2 + 20) != 5 && *(_DWORD *)(v2 + 20) != 2 )
    {
      if ( *(_DWORD *)(v2 + 20) == 6 )
      {
LABEL_10:
        if ( a2 == 1 )
          v11 = 2LL;
        else
          v11 = 1LL;
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 2504), v11);
        return v3;
      }
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v6 + 449) && *(_DWORD *)(v6 + 244) <= 1u && !*(_BYTE *)(v6 + 450)
       || (_DWORD)v8 != 1 && *(_DWORD *)(v6 + 248) == 1)
      && *(_QWORD *)(v6 + 2504) )
    {
      goto LABEL_10;
    }
    v13 = -1073741661LL;
    v3 = -1073741661;
    v14 = WdLogNewEntry5_WdWarning(v8, 1953656900LL, v9, v10);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(v6 + 24);
LABEL_26:
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_27;
  }
LABEL_24:
  v3 = -1073741637;
  v15 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v15 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v15);
LABEL_27:
  if ( *(_BYTE *)(v6 + 449) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite((PERESOURCE)(v6 + 2400));
  KeLeaveCriticalRegion();
  return v3;
}
