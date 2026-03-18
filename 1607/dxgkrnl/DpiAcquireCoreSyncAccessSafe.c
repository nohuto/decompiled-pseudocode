/*
 * XREFs of DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58
 * Callers:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     DpiPdoHandleStatusIndication @ 0x1C002F8D0 (DpiPdoHandleStatusIndication.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C00C2E54 (DpiFdoInvalidateChildStatus.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 *     DpiGdoDispatchIoctl @ 0x1C00C4D40 (DpiGdoDispatchIoctl.c)
 *     DpiPdoDispatchPnp @ 0x1C00D8440 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleOpmIoctls @ 0x1C00DCC84 (DpiPdoHandleOpmIoctls.c)
 *     DpiPdoSetDevicePower @ 0x1C00E03AC (DpiPdoSetDevicePower.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiPdoHandleQueryId @ 0x1C00EC870 (DpiPdoHandleQueryId.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C00EE780 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00EE86C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0193AB4 (DpiFdoDestroyRelatedObjects.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0198D90 (-DpiBrightnessEventStartCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z @ 0x1C0198E40 (-DpiBrightnessEventStopCallback@@YAXPEAXU_CBROKERED_EVENT_ID@@00K@Z.c)
 *     ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C0198EF0 (-DpiBrightnessIfGet@@YAJPEAXPEAE@Z.c)
 *     ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C0198FC0 (-DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z.c)
 *     ?DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z @ 0x1C0199070 (-DpiBrightnessIfGetCaps@@YAJPEAXPEAU_DXGK_BRIGHTNESS_CAPS@@@Z.c)
 *     ?DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z @ 0x1C0199120 (-DpiBrightnessIfGetPossible@@YAJPEAXKPEAE1@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C01991E0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0199340 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 *     ?DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z @ 0x1C01993E0 (-DpiBrightnessIfSetState@@YAJPEAXPEAU_DXGK_BRIGHTNESS_STATE@@@Z.c)
 *     ?DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z @ 0x1C019948C (-DpiBrightnessNotifyMonitorDimming@@YAJPEAU_DEVICE_OBJECT@@E@Z.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01996E8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiFdoThermalActiveCooling @ 0x1C0199DD0 (DpiFdoThermalActiveCooling.c)
 *     DpiFdoThermalPassiveCooling @ 0x1C0199F20 (DpiFdoThermalPassiveCooling.c)
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
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
  if ( *(_BYTE *)(v6 + 481) )
    DpiCheckForOutstandingD3Requests(*(_QWORD *)(v5 + 64));
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3584), 1u);
  if ( *(_DWORD *)(v6 + 236) == 6 || *(_DWORD *)(v6 + 240) == 6 || (v8 = *(unsigned int *)(v6 + 3768), (_DWORD)v8 == 3) )
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
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 3688), v11);
        return v3;
      }
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(v6 + 481) && *(_DWORD *)(v6 + 280) <= 1u && !*(_BYTE *)(v6 + 482)
       || (_DWORD)v8 != 1 && *(_DWORD *)(v6 + 284) == 1)
      && *(_QWORD *)(v6 + 3688) )
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
  if ( *(_BYTE *)(v6 + 481) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite((PERESOURCE)(v6 + 3584));
  KeLeaveCriticalRegion();
  return v3;
}
