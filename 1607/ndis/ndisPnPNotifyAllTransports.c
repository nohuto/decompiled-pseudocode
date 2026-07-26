/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C00E90B8
 * Callers:
 *     ndisFNetPnPEventInternal @ 0x1C009CA10 (ndisFNetPnPEventInternal.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009E1CC (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000E320 (NdisAcquireRWLockRead.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C0016198 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C0016214 (ndisAcquireMiniportPnPEventLock.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018D20 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C001A340 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ndisUnprocessAllOpens @ 0x1C001FF0C (ndisUnprocessAllOpens.c)
 *     Template_jqxzqq @ 0x1C0023D8C (Template_jqxzqq.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C004F774 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C004F790 (ndisReceiveQueueingRestart.c)
 *     WPP_SF_ZLqL @ 0x1C00627E0 (WPP_SF_ZLqL.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A6BC8 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00D6E04 (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00E7B60 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  int v2; // esi
  int *v4; // r15
  unsigned int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UnprocessedOpen; // rax
  __int64 v11; // rbx
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  unsigned int m_numElements; // r12d
  __int64 i; // rbx
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *p; // r13
  __int64 v17; // [rsp+28h] [rbp-110h]
  struct _KEVENT v18; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v19[20]; // [rsp+70h] [rbp-C8h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+148h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 8);
  v4 = *(int **)(a2 + 16);
  v6 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x10u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)a1, v2);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 9 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisAcquireMiniportPnPEventLock((__int64)a1, &v18);
  if ( (unsigned int)(v2 - 13) > 1 || (v6 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx((__int64)a1);
      v11 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v7 = ndisPnPNotifyBinding(UnprocessedOpen, a2);
      v6 = v7;
      if ( v7 )
      {
        if ( (unsigned __int8)byte_1C00895D4 >= 4u )
        {
          LODWORD(v17) = v7;
          WPP_SF_ZLqL(v9, v8, (unsigned __int16 *)(*(_QWORD *)(v11 + 24) + 72LL), v2, a1, v17);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800000000LL) != 0 )
          Template_jqxzqq(
            v9,
            &TransportFailedPnPEvent,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            *(const wchar_t **)(*(_QWORD *)(v11 + 24) + 80LL),
            v2,
            v6);
        if ( v2 != 1 && (v2 == 2 || !v2 && *v4 > 1) )
          break;
        v6 = 0;
      }
    }
    ndisUnprocessAllOpens((__int64)a1);
  }
  ndisReleaseMiniportPnPEventLock((__int64)a1);
  if ( !v2 && *v4 == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(0xBAD0FFu);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i]._p->BindState, BindingEnabled, Reason_MiniportLowPower)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)v19);
        WPP_SF_Zq(0x12u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (unsigned __int16 *)v19[1], v19[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v12);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && v2 == 8 && LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x13u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, (__int64)a1);
  return v6;
}
