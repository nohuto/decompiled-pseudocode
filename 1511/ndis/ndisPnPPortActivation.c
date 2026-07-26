/*
 * XREFs of ndisPnPPortActivation @ 0x1C003B198
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00CDE10 (NdisMNetPnPEvent.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003AE50 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     ndisFindPortByPortNumber @ 0x1C003B16C (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortActivation @ 0x1C003BBF0 (ndisRollbackPortActivation.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A581C (ndisInitializeNetPnPEvent.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  __int64 v6; // rdx
  KIRQL v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int Flags; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 *PortByPortNumber; // rax
  __int64 v16; // rcx
  unsigned __int8 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  _BYTE v21[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v22; // [rsp+44h] [rbp-F4h]
  int v23; // [rsp+48h] [rbp-F0h]
  __int64 v24; // [rsp+50h] [rbp-E8h]
  int v25; // [rsp+58h] [rbp-E0h]

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008371E >= 4u )
    WPP_SF_q(0xEu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
  v7 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2359724;
  v8 = *(__int64 **)(a2 + 16);
  if ( v8 )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || *((_DWORD *)v8 + 9) )
    {
      while ( 1 )
      {
        v14 = *((_DWORD *)v8 + 9);
        if ( !v14 )
          break;
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v14);
        if ( !PortByPortNumber )
        {
          if ( v17 >= 2u )
            WPP_SF_qD(0x14u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1, *((_DWORD *)v8 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            Template_jqxqq(
              v16,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              *((_DWORD *)v8 + 9));
          v3 = -1071448019;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
          v4 = 0;
          goto LABEL_49;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 2 )
        {
          v3 = -1071448018;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
          v4 = 0;
          if ( (unsigned __int8)byte_1C008371E >= 2u )
            WPP_SF_qD(0x15u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1, *((_DWORD *)v8 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            Template_jqxqq(
              v18,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              4,
              *((_DWORD *)v8 + 9));
          goto LABEL_49;
        }
        ++a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        v8[1] = (__int64)PortByPortNumber;
        *((_DWORD *)PortByPortNumber + 4) = 4;
        *(_OWORD *)(PortByPortNumber + 3) = *((_OWORD *)v8 + 2);
        *(_OWORD *)(PortByPortNumber + 5) = *((_OWORD *)v8 + 3);
        *(_OWORD *)(PortByPortNumber + 7) = *((_OWORD *)v8 + 4);
        *(_OWORD *)(PortByPortNumber + 9) = *((_OWORD *)v8 + 5);
        if ( (v8[5] & 1) != 0 )
        {
          *((_DWORD *)PortByPortNumber + 17) = a1->DefaultSendControlState;
          *((_DWORD *)PortByPortNumber + 18) = a1->DefaultRcvControlState;
          *((_DWORD *)PortByPortNumber + 19) = a1->DefaultSendAuthorizationState;
          *((_DWORD *)PortByPortNumber + 20) = a1->DefaultRcvAuthorizationState;
        }
        ++v4;
        if ( v17 >= 5u )
          WPP_SF_qD(0x16u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1, *((_DWORD *)v8 + 9));
        v8 = (__int64 *)*v8;
        if ( !v8 )
          goto LABEL_49;
      }
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v8);
      v4 = 0;
      if ( (unsigned __int8)byte_1C008371E >= 2u )
        WPP_SF_q(0x13u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        Template_jqxqq(
          v19,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (unsigned __int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
LABEL_49:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v7);
      if ( v4 )
      {
        ndisInitializeNetPnPEvent(v21, 0LL);
        v22 = *(_DWORD *)(a2 + 4);
        v24 = *(_QWORD *)(a2 + 16);
        v25 = *(_DWORD *)(a2 + 24);
        v23 = 10;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else if ( *v8 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v7);
      v3 = -1071448019;
      if ( (unsigned __int8)byte_1C008371E >= 2u )
        WPP_SF_q(0x10u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        Template_jqxqq(
          v10,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (unsigned __int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v7);
        v3 = -1071448018;
        if ( (unsigned __int8)byte_1C008371E >= 2u )
          WPP_SF_q(0x11u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
          Template_jqxqq(
            v12,
            &PnPPortActivationFailed,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            0);
      }
      else
      {
        a1->Flags = Flags | 0x10000;
        if ( (v8[5] & 1) == 0 )
        {
          a1->DefaultPortSendControlState = *((_DWORD *)v8 + 19);
          a1->DefaultPortRcvControlState = *((_DWORD *)v8 + 20);
          a1->DefaultPortSendAuthorizationState = *((_DWORD *)v8 + 21);
          a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v8 + 22);
        }
        LOBYTE(v6) = 1;
        ndisIfSetInterfaceState((const struct _TlgProvider_t *)a1, v6, v7);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v7);
        if ( (unsigned __int8)byte_1C008371E >= 4u )
          WPP_SF_q(0x12u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000) != 0 )
          Template_jqxq(
            v13,
            &DefaultPortActivated,
            &a1->InterfaceGuid,
            (unsigned __int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            23);
        ndisMSetMiniportReadyForBinding(a1);
      }
    }
  }
  else
  {
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v7);
    v3 = -1073741811;
    if ( (unsigned __int8)byte_1C008371E >= 2u )
      WPP_SF_q(0xFu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
      Template_jqxqq(
        v9,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C008371E >= 4u )
    WPP_SF_qD(0x17u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1, v3);
  return v3;
}
