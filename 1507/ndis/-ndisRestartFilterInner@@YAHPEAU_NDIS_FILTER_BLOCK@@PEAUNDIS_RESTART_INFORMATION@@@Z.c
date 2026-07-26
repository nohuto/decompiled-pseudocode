/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00E96F0
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00A1520 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqZZ @ 0x1C005676C (WPP_SF_qqZZ.c)
 *     Template_jcqjzzz @ 0x1C006BBA0 (Template_jcqjzzz.c)
 *     ndisFInvokeRestart @ 0x1C00A14C4 (ndisFInvokeRestart.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v5; // al
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v7; // edi
  KIRQL v8; // al
  _NDIS_MINIPORT_BLOCK *v10; // rcx
  KIRQL v11; // al
  _BYTE v12[40]; // [rsp+58h] [rbp-19h] BYREF
  int v13; // [rsp+80h] [rbp+Fh] BYREF
  _NDIS_MEDIUM MediaType; // [rsp+84h] [rbp+13h]
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // [rsp+88h] [rbp+17h]
  struct NDIS_RESTART_INFORMATION *v16; // [rsp+90h] [rbp+1Fh]
  unsigned int IfIndex; // [rsp+98h] [rbp+27h]
  _NET_LUID_LH v18; // [rsp+A0h] [rbp+2Fh]

  Miniport = a1->Miniport;
  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xFu, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LOBYTE(a1->Flags) = 0;
  a1->Flags |= 0x20u;
  a1->LockThread = 0LL;
  a1->LockDbg = 0;
  KeReleaseSpinLock(&a1->Lock, v5);
  a1->State = NdisFilterRestarting;
  if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
    Template_jcqjzzz(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName._p,
      &a1->InterfaceGuid,
      (unsigned __int64)&a1->InterfaceGuid,
      3,
      166,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName._p->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent((PRKEVENT)&v12[16], NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)v12;
  v13 = 3146139;
  v16 = a2;
  if ( LowerFilter )
  {
    MediaType = LowerFilter->MediaType;
    PhysicalMediaType = LowerFilter->PhysicalMediaType;
    IfIndex = LowerFilter->IfIndex;
    v18.Value = (ULONG64)LowerFilter->IfBlock->NetLuid;
  }
  else
  {
    v10 = a1->Miniport;
    MediaType = v10->MiniportMediaType;
    PhysicalMediaType = v10->MiniportPhysicalMediumType;
    IfIndex = v10->IfIndex;
    v18.Value = (ULONG64)v10->NetLuid;
  }
  if ( (unsigned __int8)byte_1C0085310 >= 4u )
    WPP_SF_qqZZ(
      0x10u,
      &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids,
      Miniport,
      a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName,
      Miniport->pAdapterInstanceName);
  v7 = ndisFInvokeRestart((__int64)a1, (__int64)&v13);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&v12[16], Executive, 0, 0, 0LL);
    v7 = *(_DWORD *)&v12[8];
  }
  a1->AsyncOpContext = 0LL;
  if ( v7 )
  {
    a1->State = NdisFilterPaused;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._p,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        2,
        216,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._p->Buffer,
        a1->FilterFriendlyName->Buffer);
    v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v11);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 0x10u;
    a1->LockThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v8);
    a1->State = NdisFilterRunning;
    if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
      Template_jcqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName._p,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        4,
        255,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName._p->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_f895400b377d408c29ede7c9eddd0dec_Traceguids, (__int64)a1, v7);
  return v7;
}
