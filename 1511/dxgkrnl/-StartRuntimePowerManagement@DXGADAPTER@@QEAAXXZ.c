/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C012F3F0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C0019C84 (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z @ 0x1C001B6BC (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIE@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C0127450 (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  if ( *((_QWORD *)this + 254) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 22) + 64LL);
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
    if ( *((int *)this + 414) >= 0x2000 && v6 >= 0x5006 )
      DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this, v5, a3, a4);
    if ( v6 >= 0x3008 )
    {
      *((_BYTE *)this + 2465) = 1;
      DXGADAPTER::DdiPowerRuntimeControlRequest(
        this,
        &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_BYTE *)this + 2464) )
    {
      v7 = *((_DWORD *)this + 543);
      if ( v7 != -1 )
        DXGADAPTER::SetPowerComponentActiveCBInternal(this, v7, 0);
    }
    PoFxStartDevicePowerManagement(*((_QWORD *)this + 254));
    if ( v6 >= 0x3008 )
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
    v8 = PoRegisterPowerSettingCallback(
           *((PDEVICE_OBJECT *)this + 22),
           &GUID_MONITOR_POWER_ON,
           (PPOWER_SETTING_CALLBACK)DxgkPowerSettingCallback,
           this,
           (PVOID *)this + 313);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdError(v11);
    }
  }
}
