/*
 * XREFs of DxgkWriteDiagEntry @ 0x1C009AC30
 * Callers:
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1C0060D88 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO@@IQEBUDISPLAYCONFIG_MODE_INFO@@IJPEAW4DISPLAYCONFIG.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C0065BC0 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 *     ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AB874 (-LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C00C4A50 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoIsChildConnected @ 0x1C00C4E10 (DpiPdoIsChildConnected.c)
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     DpiPnpEnableVga @ 0x1C00DEED0 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C00DF200 (DpiPnpNotifyGdi.c)
 *     ?GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C013CA04 (-GdiCalloutLoop@CTDR_GDI_RESET_THREAD@@IEAAJAEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80 (DxgkSimulateMonitorsIfNecessary.c)
 *     DpiGdiAsyncMonitorEventCallout @ 0x1C0166C30 (DpiGdiAsyncMonitorEventCallout.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0167580 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 *     DpiMiracastConnectedStandbyDelayWork @ 0x1C0168EE0 (DpiMiracastConnectedStandbyDelayWork.c)
 *     DpiMiracastHandlePowerCallback @ 0x1C0169570 (DpiMiracastHandlePowerCallback.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C016BEC4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C016C690 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1C016D4E0 (DpiAcpiHandleAcpiEvent.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C017297C (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@@Z @ 0x1C0172AB4 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_ACTIVE_VIDPN_INVALIDATION_RE.c)
 *     ?LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z @ 0x1C017D96C (-LogCddDatabaseAccessPacket@@YAXHJPEAU_D3DKMT_GETPATHSMODALITY@@PEAU_STRING@@I@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C009AD10 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteDiagEntry(struct _DXGK_DIAG_HEADER *Src, __int64 a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  struct DXGGLOBAL *v7; // rdi
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  DXGDIAGNOSTICS *v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp+8h]

  if ( !Src || !*((_DWORD *)Src + 1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(Src, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 5455LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( Src && *((_DWORD *)Src + 1) >= 0x30u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)Src, a2, a3, a4);
    v7 = Global;
    if ( Global )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)Global + 65);
      DXGPUSHLOCK::AcquireExclusive(v18);
      v19 = 2;
      CurrentProcess = PsGetCurrentProcess(v8);
      *((_OWORD *)Src + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)Src + 4) = PsGetCurrentThreadId();
      v20 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)Src + 1) = v20 * KeQueryTimeIncrement();
      v10 = (DXGDIAGNOSTICS *)*((_QWORD *)v7 + 68);
      if ( v10 )
      {
        v11 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v10, Src);
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v15 + 24) = Src;
        *(_QWORD *)(v15 + 32) = v7;
        WdLogEvent5_WdError(v15);
        v11 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
      return v11;
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v14 + 24) = Src;
      WdLogEvent5_WdError(v14);
      return 3221225860LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(Src);
    *(_QWORD *)(v16 + 24) = Src;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
