/*
 * XREFs of ?ndisMPauseMiniportInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00EB7AC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     NdisMPauseComplete @ 0x1C001EF10 (NdisMPauseComplete.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_LqZ @ 0x1C0043EEC (WPP_SF_LqZ.c)
 *     ndisLWM5PauseMiniport @ 0x1C00593FC (ndisLWM5PauseMiniport.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 *     ndisSetBusySync @ 0x1C0068B84 (ndisSetBusySync.c)
 *     ndisMInvokePause @ 0x1C00B0A60 (ndisMInvokePause.c)
 */

void __fastcall ndisMPauseMiniportInner(struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle)
{
  KIRQL v2; // al
  KSPIN_LOCK *p_Lock; // rcx
  bool v4; // zf
  bool v5; // cf
  int v6; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v8[4]; // [rsp+48h] [rbp-18h] BYREF

  memset(v8, 0, 12);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xAu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisReferenceMiniportByHandle(MiniportAdapterHandle, 0, 24) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Lock);
    p_Lock = &MiniportAdapterHandle->Lock;
    MiniportAdapterHandle->MiniportThread = KeGetCurrentThread();
    MiniportAdapterHandle->MiniportThread = 0LL;
    MiniportAdapterHandle->LockDbg = 3801254;
    MiniportAdapterHandle->LockDbg = 0;
    if ( MiniportAdapterHandle->State == NdisMiniportRunning )
    {
      MiniportAdapterHandle->State = NdisMiniportPausing;
      KeReleaseSpinLock(p_Lock, v2);
      if ( (unsigned __int8)byte_1C0085310 >= 4u )
        WPP_SF_LqZ(
          0xBu,
          &WPP_0f031f2086e21aadff9092658e664f02_Traceguids,
          1,
          MiniportAdapterHandle,
          MiniportAdapterHandle->pAdapterInstanceName);
      v4 = MiniportAdapterHandle->SelectiveSuspend == 0LL;
      v8[0] = 786816;
      v8[2] = 1;
      if ( !v4 )
        ndisSetBusySync(MiniportAdapterHandle, 34, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v5 = MiniportAdapterHandle->MajorNdisVersion < 6u;
      MiniportAdapterHandle->AsyncOpCompletionEvent = &Event;
      if ( v5 )
        v6 = ndisLWM5PauseMiniport((__int64)MiniportAdapterHandle);
      else
        v6 = ndisMInvokePause((__int64)MiniportAdapterHandle, (__int64)v8);
      if ( v6 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      else
        NdisMPauseComplete(MiniportAdapterHandle);
      ndisLogMiniportEvent((__int64)MiniportAdapterHandle, 0x35u);
      if ( MiniportAdapterHandle->SelectiveSuspend )
        ndisClearBusy((__int64)MiniportAdapterHandle, 1, 34);
      MiniportAdapterHandle->State = NdisMiniportPaused;
    }
    else
    {
      KeReleaseSpinLock(p_Lock, v2);
    }
    ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x18u);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_0f031f2086e21aadff9092658e664f02_Traceguids, (__int64)MiniportAdapterHandle);
}
