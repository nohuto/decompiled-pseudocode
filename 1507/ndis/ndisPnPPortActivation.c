/*
 * XREFs of ndisPnPPortActivation @ 0x1C003A458
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C00D4680 (NdisMNetPnPEvent.c)
 * Callees:
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     Template_jqxqq @ 0x1C003A190 (Template_jqxqq.c)
 *     ndisFindPortByPortNumber @ 0x1C003A42C (ndisFindPortByPortNumber.c)
 *     ndisRollbackPortActivation @ 0x1C003AEB0 (ndisRollbackPortActivation.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00A6A98 (ndisInitializeNetPnPEvent.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  KIRQL v6; // r15
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int Flags; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 *PortByPortNumber; // rax
  __int64 v15; // rcx
  unsigned __int8 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[4]; // [rsp+40h] [rbp-F8h] BYREF
  int v21; // [rsp+44h] [rbp-F4h]
  int v22; // [rsp+48h] [rbp-F0h]
  __int64 v23; // [rsp+50h] [rbp-E8h]
  int v24; // [rsp+58h] [rbp-E0h]

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_q(0xEu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 2359724;
  v7 = *(__int64 **)(a2 + 16);
  if ( v7 )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || *((_DWORD *)v7 + 9) )
    {
      while ( 1 )
      {
        v13 = *((_DWORD *)v7 + 9);
        if ( !v13 )
          break;
        PortByPortNumber = ndisFindPortByPortNumber((__int64)a1, v13);
        if ( !PortByPortNumber )
        {
          if ( v16 >= 2u )
            WPP_SF_qD(20LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, *((unsigned int *)v7 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            Template_jqxqq(
              v15,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              *((_DWORD *)v7 + 9));
          v3 = -1071448019;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
          v4 = 0;
          goto LABEL_49;
        }
        if ( *((_DWORD *)PortByPortNumber + 4) != 2 )
        {
          v3 = -1071448018;
          ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
          v4 = 0;
          if ( (unsigned __int8)byte_1C008531E >= 2u )
            WPP_SF_qD(21LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, *((unsigned int *)v7 + 9));
          if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
            Template_jqxqq(
              v17,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (unsigned __int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              4,
              *((_DWORD *)v7 + 9));
          goto LABEL_49;
        }
        ++a1->NumberOfActivePorts;
        *((_DWORD *)PortByPortNumber + 5) = *((_DWORD *)PortByPortNumber + 4);
        v7[1] = (__int64)PortByPortNumber;
        *((_DWORD *)PortByPortNumber + 4) = 4;
        *(_OWORD *)(PortByPortNumber + 3) = *((_OWORD *)v7 + 2);
        *(_OWORD *)(PortByPortNumber + 5) = *((_OWORD *)v7 + 3);
        *(_OWORD *)(PortByPortNumber + 7) = *((_OWORD *)v7 + 4);
        *(_OWORD *)(PortByPortNumber + 9) = *((_OWORD *)v7 + 5);
        if ( (v7[5] & 1) != 0 )
        {
          *((_DWORD *)PortByPortNumber + 17) = a1->DefaultSendControlState;
          *((_DWORD *)PortByPortNumber + 18) = a1->DefaultRcvControlState;
          *((_DWORD *)PortByPortNumber + 19) = a1->DefaultSendAuthorizationState;
          *((_DWORD *)PortByPortNumber + 20) = a1->DefaultRcvAuthorizationState;
        }
        ++v4;
        if ( v16 >= 5u )
          WPP_SF_qD(22LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, *((unsigned int *)v7 + 9));
        v7 = (__int64 *)*v7;
        if ( !v7 )
          goto LABEL_49;
      }
      v3 = -1071448019;
      ndisRollbackPortActivation(a1, *(_QWORD *)(a2 + 16), v7);
      v4 = 0;
      if ( (unsigned __int8)byte_1C008531E >= 2u )
        WPP_SF_q(0x13u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        Template_jqxqq(
          v18,
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
      KeReleaseSpinLock(&a1->Lock, v6);
      if ( v4 )
      {
        ndisInitializeNetPnPEvent(v20, 0LL);
        v21 = *(_DWORD *)(a2 + 4);
        v23 = *(_QWORD *)(a2 + 16);
        v24 = *(_DWORD *)(a2 + 24);
        v22 = 10;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1);
      }
    }
    else if ( *v7 )
    {
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v6);
      v3 = -1071448019;
      if ( (unsigned __int8)byte_1C008531E >= 2u )
        WPP_SF_q(0x10u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
        Template_jqxqq(
          v9,
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
        KeReleaseSpinLock(&a1->Lock, v6);
        v3 = -1071448018;
        if ( (unsigned __int8)byte_1C008531E >= 2u )
          WPP_SF_q(0x11u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
          Template_jqxqq(
            v11,
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
        if ( (v7[5] & 1) == 0 )
        {
          a1->DefaultPortSendControlState = *((_DWORD *)v7 + 19);
          a1->DefaultPortRcvControlState = *((_DWORD *)v7 + 20);
          a1->DefaultPortSendAuthorizationState = *((_DWORD *)v7 + 21);
          a1->DefaultPortRcvAuthorizationState = *((_DWORD *)v7 + 22);
        }
        ndisIfSetInterfaceState(a1, 1, v6);
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v6);
        if ( (unsigned __int8)byte_1C008531E >= 4u )
          WPP_SF_q(0x12u, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x8000) != 0 )
          Template_jqxq(
            v12,
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
    KeReleaseSpinLock(&a1->Lock, v6);
    v3 = -1073741811;
    if ( (unsigned __int8)byte_1C008531E >= 2u )
      WPP_SF_q(0xFu, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, (__int64)a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x20000000) != 0 )
      Template_jqxqq(
        v8,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (unsigned __int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( (unsigned __int8)byte_1C008531E >= 4u )
    WPP_SF_qD(23LL, &WPP_19165d00fb3b32ae989335dc29d87a5c_Traceguids, a1, v3);
  return v3;
}
