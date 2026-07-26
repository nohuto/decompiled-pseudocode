/*
 * XREFs of ndisPnPNotifyAllTransports @ 0x1C00E6058
 * Callers:
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C009B450 (ndisFNetPnPEventInternal.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C000AB30 (NdisAcquireRWLockRead.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000E630 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceNextUnprocessedOpenEx @ 0x1C000EEC0 (ndisReferenceNextUnprocessedOpenEx.c)
 *     ndisUnprocessAllOpens @ 0x1C000EFC0 (ndisUnprocessAllOpens.c)
 *     ndisReleaseMiniportPnPEventLock @ 0x1C001911C (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C0019198 (ndisAcquireMiniportPnPEventLock.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     ndisReceiveQueueingPaused @ 0x1C004A4B8 (ndisReceiveQueueingPaused.c)
 *     ndisReceiveQueueingRestart @ 0x1C004A4D4 (ndisReceiveQueueingRestart.c)
 *     Template_jqxzqq @ 0x1C0058D98 (Template_jqxzqq.c)
 *     WPP_SF_ZLqL @ 0x1C005EEA0 (WPP_SF_ZLqL.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00D7744 (ndisMHandleNDKPnPEvents.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F48 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisPnPNotifyBinding @ 0x1C00E98E4 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyAllTransports(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int *v5; // r13
  unsigned int v7; // ebp
  __int64 UnprocessedOpen; // rax
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // r12
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  bool v15; // zf
  unsigned int m_numElements; // r12d
  __int64 i; // rbx
  KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > *p; // r13
  __int64 v20; // [rsp+28h] [rbp-110h]
  struct _KEVENT v21; // [rsp+50h] [rbp-E8h] BYREF
  _QWORD v22[20]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 LockState; // [rsp+148h] [rbp+10h] BYREF

  LockState = a2;
  v3 = *(_DWORD *)(a3 + 8);
  v5 = *(int **)(a3 + 16);
  v7 = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x10u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1, v3);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( !MiniportSupportsReceiveThrottle(a1) && v3 == 9 && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, (PLOCK_STATE_EX)&LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingRestart((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, (PLOCK_STATE_EX)&LockState);
  }
  ndisAcquireMiniportPnPEventLock((__int64)a1, &v21);
  if ( (unsigned int)(v3 - 13) > 1 || (v7 = ndisMHandleNDKPnPEvents(a1)) == 0 )
  {
    while ( 1 )
    {
      UnprocessedOpen = ndisReferenceNextUnprocessedOpenEx((__int64)a1);
      v9 = UnprocessedOpen;
      if ( !UnprocessedOpen )
        break;
      v10 = ndisPnPNotifyBinding(UnprocessedOpen, a3);
      v7 = v10;
      if ( v10 )
      {
        if ( (unsigned __int8)byte_1C0085314 >= 4u )
        {
          LODWORD(v20) = v10;
          WPP_SF_ZLqL(v12, v11, (__int64 *)(*(_QWORD *)(v9 + 24) + 72LL), v3, a1, v20);
        }
        if ( (Microsoft_Windows_NDISEnableBits & 0x800000000LL) != 0 )
          Template_jqxzqq(
            v12,
            &TransportFailedPnPEvent,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            *(const wchar_t **)(*(_QWORD *)(v9 + 24) + 80LL),
            v3,
            v7);
        if ( v3 != 1 && (v3 == 2 || !v3 && *v5 > 1) )
          break;
        v7 = 0;
      }
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    OpenQueue = a1->OpenQueue;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 1638885;
    while ( OpenQueue )
    {
      KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
      if ( (unsigned int)(v3 - 8) <= 1 )
        v15 = (OpenQueue->OpenFlags & 0x8000) == 0;
      else
        v15 = (OpenQueue->OpenFlags & 0x18000) == 0;
      if ( !v15 )
      {
        KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
        break;
      }
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v13);
    ndisUnprocessAllOpens((__int64)a1);
  }
  ndisReleaseMiniportPnPEventLock((__int64)a1);
  if ( !v3 && *v5 == 1 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
    m_numElements = a1->Bindings.Protocols.m_numElements;
    for ( i = 0LL; (_DWORD)i != m_numElements; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a1->Bindings.Protocols.m_numElements )
        __fastfail(0xBAD0FFu);
      p = a1->Bindings.Protocols._p;
      if ( Ndis::BindState::SetBinding(&p[i]._p->BindState, BindingEnabled, Reason_MiniportLowPower)
        && (unsigned __int8)byte_1C0085323 >= 4u )
      {
        ndisGetBindLinkNameForTracing(p[i]._p, (struct NDIS_PNPTRACE_LOCALS *)v22);
        WPP_SF_Zq(0x12u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64 *)v22[1], v22[0]);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine);
  }
  if ( !MiniportSupportsReceiveThrottle(a1) && v3 == 8 && ndisPeriodicReceives )
  {
    NdisAcquireRWLockRead(Lock, (PLOCK_STATE_EX)&LockState, 0);
    KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    ndisReceiveQueueingPaused((__int64)a1);
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    NdisReleaseRWLock(Lock, (PLOCK_STATE_EX)&LockState);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x13u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)a1);
  return v7;
}
