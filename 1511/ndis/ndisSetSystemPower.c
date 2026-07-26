/*
 * XREFs of ndisSetSystemPower @ 0x1C0097BD0
 * Callers:
 *     ndisSetPower @ 0x1C0097B38 (ndisSetPower.c)
 * Callees:
 *     NdisResetEvent @ 0x1C00103F0 (NdisResetEvent.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0012550 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C001268C (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ndisRequestedDevicePowerIrpComplete @ 0x1C0012CF0 (ndisRequestedDevicePowerIrpComplete.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_jqxqq @ 0x1C003AED0 (Template_jqxqq.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_LqZ @ 0x1C0045484 (WPP_SF_LqZ.c)
 *     ndisRequestDeviceLowPower @ 0x1C0097E18 (ndisRequestDeviceLowPower.c)
 *     ndisPowerSaveStop @ 0x1C0099100 (ndisPowerSaveStop.c)
 *     ndisCancelInitModeTimeoutTimer @ 0x1C00A97A4 (ndisCancelInitModeTimeoutTimer.c)
 *     ndisMPowerPolicy @ 0x1C00DFB64 (ndisMPowerPolicy.c)
 *     ndisMShutdownMiniport @ 0x1C00EF14C (ndisMShutdownMiniport.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(_IO_STATUS_BLOCK *Context, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v7; // esi
  __int64 v8; // rcx
  POWER_STATE v9; // r14d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // rcx
  unsigned __int64 Information; // rax
  unsigned __int64 v15; // rax
  _DEVICE_OBJECT *v16; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-58h]
  _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-38h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a3 + 1332) = v3;
  v7 = 0;
  if ( (unsigned __int8)byte_1C0083710 >= 4u )
    WPP_SF_LqZ(0x5Au, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, v3, a3, *(_QWORD *)(a3 + 3912));
  if ( *(_DWORD *)(a3 + 2256) != 1 || *(_DWORD *)(a3 + 1520) == 1 )
  {
    if ( v3 == 1 )
    {
      if ( (*(_DWORD *)(a3 + 124) & 0x800) == 0 )
      {
        if ( (unsigned __int8)byte_1C0083715 >= 3u )
          WPP_SF_q(0x5Cu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
        ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
      }
      ndisMPowerPolicy(a3, 1, (*(_DWORD *)(a2 + 8) >> 8) & 0xF, (unsigned int)&PowerState, 0);
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
        WPP_SF_q(0x5Du, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3);
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        Template_jqxqq(
          v13,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4064),
          a3 + 4064,
          *(_DWORD *)(a3 + 4112),
          *(_QWORD *)(a3 + 4080),
          1,
          PowerState.SystemState);
      Information = Context[11].Information;
      *(_OWORD *)(Information - 72) = *(_OWORD *)Information;
      *(_OWORD *)(Information - 56) = *(_OWORD *)(Information + 16);
      *(_OWORD *)(Information - 40) = *(_OWORD *)(Information + 32);
      *(_QWORD *)(Information - 24) = *(_QWORD *)(Information + 48);
      *(_BYTE *)(Information - 69) = 0;
      v15 = Context[11].Information;
      *(_QWORD *)(v15 - 16) = ndisSetSystemPowerOnComplete;
      *(_QWORD *)(v15 - 8) = a3;
      *(_BYTE *)(v15 - 69) = -32;
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3896), (PIRP)Context);
    }
    else
    {
      if ( v3 <= 1 )
        return v7;
      if ( v3 > 5 )
      {
        if ( v3 == 6 )
        {
          if ( (unsigned __int8)byte_1C0083715 >= 4u )
            WPP_SF_qD(0x5Bu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, 6);
          if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
            Template_jqxqq(
              (__int64)Context,
              &MiniportPowerSystemState,
              (const GUID *)(a3 + 4064),
              a3 + 4064,
              *(_DWORD *)(a3 + 4112),
              *(_QWORD *)(a3 + 4080),
              0,
              6);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
          ndisInvokeMiniportSysPowerNotify(
            (struct _NDIS_MINIPORT_BLOCK *)a3,
            (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
          if ( (*(_BYTE *)(*(_QWORD *)(a3 + 3816) + 26LL) & 1) == 0 )
            ndisMShutdownMiniport(a3);
          ++BYTE3(Context[4].Pointer);
          Context[11].Information += 72LL;
          Context[3].Status = 0;
          return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3896), (PIRP)Context);
        }
        return v7;
      }
      KeWaitForSingleObject((PVOID)(a3 + 4280), Executive, 0, 0, 0LL);
      ndisPowerSaveStop((struct _NDIS_MINIPORT_BLOCK *)a3, NdisSSSystemPower);
      ndisInvokeMiniportSysPowerNotify(
        (struct _NDIS_MINIPORT_BLOCK *)a3,
        (enum _SYSTEM_POWER_STATE)((*(_DWORD *)(a2 + 8) >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)*(_DWORD *)(a2 + 8) >> 12));
      if ( (unsigned int)ndisMPowerPolicy(a3, v3, (*(_DWORD *)(a2 + 8) >> 8) & 0xF, (unsigned int)&PowerState, 0) == -2147483633 )
      {
        Context[3].Status = 0;
        IofCompleteRequest((PIRP)Context, 0);
        return v7;
      }
      v9.SystemState = PowerState.SystemState;
      if ( (unsigned __int8)byte_1C0083715 >= 4u )
      {
        LODWORD(Timeout) = PowerState;
        WPP_SF_qdD(0x5Eu, &WPP_22c072e0c2b3ae0d66e251cc0b513786_Traceguids, a3, v3, Timeout);
      }
      if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
        Template_jqxqq(
          v8,
          &MiniportPowerStates,
          (const GUID *)(a3 + 4064),
          a3 + 4064,
          *(_DWORD *)(a3 + 4112),
          *(_QWORD *)(a3 + 4080),
          v3,
          v9.SystemState);
      NdisResetEvent((PNDIS_EVENT)(a3 + 3784));
      LOBYTE(v10) = 1;
      ndisCancelInitModeTimeoutTimer(a3, v10);
      ndisPrepForLowPower((struct _NDIS_MINIPORT_BLOCK *)a3, (enum _NDIS_DEVICE_POWER_STATE)v9.SystemState);
      *(_QWORD *)(Context[11].Information - 32) = *(_QWORD *)(a3 + 3880);
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      v11 = ndisRequestDeviceLowPower(
              (struct _NDIS_MINIPORT_BLOCK *)a3,
              v9.DeviceState,
              (PREQUEST_POWER_COMPLETE)ndisRequestedDevicePowerIrpComplete,
              Context,
              1);
      if ( v11 != 259 )
      {
        v16 = *(_DEVICE_OBJECT **)(a3 + 3888);
        IoStatus.Status = v11;
        IoStatus.Information = 0LL;
        ndisRequestedDevicePowerIrpComplete(v16, 2u, v9, Context, &IoStatus);
      }
    }
    return 259;
  }
  ++BYTE3(Context[4].Pointer);
  Context[11].Information += 72LL;
  Context[3].Status = 0;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 3896), (PIRP)Context);
}
