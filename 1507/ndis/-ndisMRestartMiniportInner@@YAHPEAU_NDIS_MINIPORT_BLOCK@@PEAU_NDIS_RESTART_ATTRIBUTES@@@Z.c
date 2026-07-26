/*
 * XREFs of ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00E74C8
 * Callers:
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A04E4 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisUpdateOperationalStatus @ 0x1C00145CC (ndisUpdateOperationalStatus.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     NdisMRestartComplete @ 0x1C0017830 (NdisMRestartComplete.c)
 *     ndisSetupLwfMiniportHandlers @ 0x1C0017B40 (ndisSetupLwfMiniportHandlers.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     ndisLWM5RestartMinport @ 0x1C0059540 (ndisLWM5RestartMinport.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C006EE8C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ndisMInvokeRestart @ 0x1C00A0614 (ndisMInvokeRestart.c)
 *     ndisMiniportFatalError @ 0x1C00D4838 (ndisMiniportFatalError.c)
 */

__int64 __fastcall ndisMRestartMiniportInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RESTART_ATTRIBUTES *a2)
{
  KIRQL v4; // al
  KIRQL v5; // bp
  bool v6; // zf
  bool v7; // cf
  NDIS_STATUS restarted; // eax
  unsigned int AsyncOpCompletionStatus; // edi
  _QWORD v11[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-20h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xFu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)a1);
  if ( ndisReferenceMiniportByHandle(a1, 0, 25) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v5 = v4;
    v6 = a1->State == NdisMiniportPaused;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 3801384;
    if ( v6 )
    {
      ndisSetupLwfMiniportHandlers((__int64)a1);
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      a1->State = NdisMiniportRestarting;
      KeReleaseSpinLock(&a1->Lock, v5);
      if ( (unsigned __int8)byte_1C0085310 >= 4u )
        WPP_SF_qZ(
          0x10u,
          &WPP_0f031f2086e21aadff9092658e664f02_Traceguids,
          (__int64)a1,
          (__int64 *)a1->pAdapterInstanceName);
      v11[1] = a2;
      v11[2] = 0LL;
      v11[0] = 1573248LL;
      if ( a1->SelectiveSuspend )
        ndisSetBusySync(a1, 35, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v7 = a1->MajorNdisVersion < 6u;
      a1->AsyncOpCompletionEvent = &Event;
      if ( v7 )
        restarted = ndisLWM5RestartMinport((__int64)a1);
      else
        restarted = ndisMInvokeRestart((__int64)a1, (__int64)v11);
      AsyncOpCompletionStatus = restarted;
      if ( restarted == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        AsyncOpCompletionStatus = a1->AsyncOpCompletionStatus;
      }
      else
      {
        NdisMRestartComplete(a1, restarted);
      }
      if ( a1->SelectiveSuspend )
        ndisClearBusy((__int64)a1, 1, 35);
      if ( AsyncOpCompletionStatus )
      {
        a1->State = NdisMiniportPaused;
        ndisMiniportFatalError((__int64)a1, 0x49u);
        NdisTraceLoggingRareMiniportPath((const struct _TlgProvider_t *)a1);
      }
      else
      {
        a1->State = NdisMiniportRunning;
        ndisLogMiniportEvent((__int64)a1, 0x36u);
      }
      if ( !AsyncOpCompletionStatus )
        ndisUpdateOperationalStatus(a1);
    }
    else
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      AsyncOpCompletionStatus = -1073741808;
      KeReleaseSpinLock(&a1->Lock, v4);
    }
    ndisDereferenceMiniport((__int64)a1, 0x19u);
  }
  else
  {
    AsyncOpCompletionStatus = -1073676282;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)a1, AsyncOpCompletionStatus);
  return AsyncOpCompletionStatus;
}
