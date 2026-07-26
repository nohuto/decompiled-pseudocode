/*
 * XREFs of ndisPnPPortDeactivation @ 0x1C003A9D8
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00D4680 (NdisMNetPnPEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003A190 (Template_jqxqq.c)
 *     ndisFindPortByPortNumber @ 0x1C003A42C (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortDeactivation @ 0x1C003AF44 (ndisRollbackPortDeactivation.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int *v5; // r15
  unsigned int v6; // esi
  KIRQL v7; // bp
  unsigned int PnPFlags; // eax
  unsigned __int64 *p_Lock; // rcx
  __int64 v10; // rcx
  unsigned int Flags; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned int *v15; // r12
  __int64 *PortByPortNumber; // rax
  __int64 v17; // rcx
  int v19; // [rsp+40h] [rbp-108h]
  KIRQL NewIrql; // [rsp+44h] [rbp-104h]
  _BYTE v21[4]; // [rsp+50h] [rbp-F8h] BYREF
  int v22; // [rsp+54h] [rbp-F4h]
  int v23; // [rsp+58h] [rbp-F0h]
  __int64 v24; // [rsp+60h] [rbp-E8h]
  int v25; // [rsp+68h] [rbp-E0h]

  v2 = 0;
  v19 = 0;
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_q(0x18u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
  v5 = *(unsigned int **)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 24) >> 2;
  if ( v5 && v6 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    NewIrql = v7;
    a1->MiniportThread = KeGetCurrentThread();
    PnPFlags = a1->PnPFlags;
    a1->LockDbg = 2360063;
    if ( (PnPFlags & 0x80u) == 0 || *v5 )
    {
      v14 = 0;
      v15 = v5;
      while ( *v15 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, *v15);
        if ( !PortByPortNumber )
        {
          v2 = -1071448019;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), v14);
          v19 = 0;
          if ( (unsigned __int8)byte_1C008531E >= 2u )
            WPP_SF_qD(30LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, v5[v14]);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
            Template_jqxqq(
              v5[v14],
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              v5[v14]);
          goto LABEL_42;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 4 )
        {
          v2 = -1071448018;
          ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), v14);
          v19 = 0;
          if ( (unsigned __int8)byte_1C008531E >= 2u )
            WPP_SF_qD(31LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, v5[v14]);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
            Template_jqxqq(
              v5[v14],
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              v5[v14]);
          goto LABEL_42;
        }
        ++v19;
        --a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        *((_DWORD *)PortByPortNumber + 4) = 2;
        if ( (unsigned __int8)byte_1C008531E >= 5u )
          WPP_SF_qD(32LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, *v15);
        ++v14;
        ++v15;
        if ( v14 >= v6 )
          goto LABEL_42;
      }
      v2 = -1071448019;
      ndisRollbackPortDeactivation(a1, *(_QWORD *)(a2 + 16), v14);
      v19 = 0;
      if ( (unsigned __int8)byte_1C008531E >= 2u )
        WPP_SF_q(0x1Du, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
        Template_jqxqq(
          v17,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (unsigned __int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_42:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
      if ( v19 )
      {
        ndisInitializeNetPnPEvent(v21, 0LL);
        v22 = *(_DWORD *)(a2 + 4);
        v24 = *(_QWORD *)(a2 + 16);
        v25 = *(_DWORD *)(a2 + 24);
        v23 = 11;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      p_Lock = &a1->Lock;
      if ( v6 <= 1 )
      {
        Flags = a1->Flags;
        if ( (Flags & 0x10000) != 0 )
        {
          a1->Flags = Flags & 0xFFFEFFFF;
          KeReleaseSpinLock(p_Lock, v7);
          ndisMSetMiniportReadyForBinding(a1);
          if ( (unsigned __int8)byte_1C008531E >= 4u )
            WPP_SF_q(0x1Cu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x8000) != 0 )
            Template_jqxq(
              v13,
              &DefaultPortDeactivated,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              67);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v7);
          v2 = -1071448018;
          if ( (unsigned __int8)byte_1C008531E >= 2u )
            WPP_SF_q(0x1Bu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
            Template_jqxqq(
              v12,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              6,
              0);
        }
      }
      else
      {
        KeReleaseSpinLock(p_Lock, v7);
        if ( (unsigned __int8)byte_1C008531E >= 2u )
          WPP_SF_q(0x1Au, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
          Template_jqxqq(
            v10,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            0);
        v2 = -1071448019;
      }
    }
  }
  else
  {
    v2 = -1073741811;
    if ( (unsigned __int8)byte_1C008531E >= 2u )
      WPP_SF_q(0x19u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000000LL) != 0 )
      Template_jqxqq(
        (__int64)a1,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_q(0x21u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
  return v2;
}
