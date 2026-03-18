/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C00A68F0
 * Callers:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     DpiPdoHandleStatusIndication @ 0x1C0028470 (DpiPdoHandleStatusIndication.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C0099BD4 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00A436C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00AA5F0 (DpiFdoInvalidateChildRelations.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C00AB2A0 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AC7E8 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 *     DpiPnpEnableVga @ 0x1C00CE504 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C00CE644 (DpiPnpNotifyGdi.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C0142E34 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0 (DxgkSimulateMonitorsIfNecessary.c)
 *     DpiGdiAsyncMonitorEventCallout @ 0x1C016B1D0 (DpiGdiAsyncMonitorEventCallout.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C016BC30 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C016D660 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C016DCF0 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01706D4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C0170EA0 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C0171CF0 (DpiAcpiHandleAcpiEvent.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C01771A8 (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C01772E0 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C0181DE4 (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00A69D0 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *Src)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  struct DXGGLOBAL *v4; // rdi
  __int64 CurrentProcess; // rax
  DXGDIAGNOSTICS *v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp+8h]

  if ( !Src || !*((_DWORD *)Src + 1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(Src);
    *(_QWORD *)(v9 + 24) = 5858LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( Src && *((_DWORD *)Src + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)Src);
    v4 = Global;
    if ( Global )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)Global + 83);
      DXGPUSHLOCK::AcquireExclusive(v14);
      v15 = 2;
      CurrentProcess = PsGetCurrentProcess();
      *((_OWORD *)Src + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)Src + 4) = PsGetCurrentThreadId();
      v16 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)Src + 1) = v16 * KeQueryTimeIncrement();
      v6 = (DXGDIAGNOSTICS *)*((_QWORD *)v4 + 86);
      if ( v6 )
      {
        v7 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v6, Src);
      }
      else
      {
        v11 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v11 + 24) = Src;
        *(_QWORD *)(v11 + 32) = v4;
        WdLogEvent5_WdError(v11);
        v7 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      return v7;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v10 + 24) = Src;
      WdLogEvent5_WdError(v10);
      return 3221225860LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(Src);
    *(_QWORD *)(v12 + 24) = Src;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
}
