/*
 * XREFs of ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C01467A4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C001E250 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C001FA4C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ @ 0x1C014B388 (-DdiPowerRuntimeSetDeviceHandle@DXGADAPTER@@QEAAJXZ.c)
 */

void __fastcall DXGADAPTER::StartRuntimePowerManagement(DXGADAPTER *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax

  if ( *((_QWORD *)this + 272) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL);
    if ( *((int *)this + 448) >= 0x2000 && v2 >= 0x5006 )
      DXGADAPTER::DdiPowerRuntimeSetDeviceHandle(this);
    if ( v2 >= 0x3008 )
    {
      *((_BYTE *)this + 2609) = 1;
      DXGADAPTER::DdiPowerRuntimeControlRequest(
        this,
        &GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*((_BYTE *)this + 2608) )
    {
      v3 = *((_DWORD *)this + 579);
      if ( v3 != -1 )
        DXGADAPTER::SetPowerComponentActiveCBInternal(this, v3, 0, 0);
    }
    PoFxStartDevicePowerManagement(*((_QWORD *)this + 272));
    if ( v2 >= 0x3008 )
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STARTED, 0LL, 0LL, 0LL, 0LL, 0LL);
    v4 = PoRegisterPowerSettingCallback(
           *((PDEVICE_OBJECT *)this + 24),
           &GUID_MONITOR_POWER_ON,
           (PPOWER_SETTING_CALLBACK)DXGADAPTER::PowerSettingCallback,
           this,
           (PVOID *)this + 331);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = v6;
      WdLogEvent5_WdError(v7);
    }
  }
}
