/*
 * XREFs of ?_AllocateCxDeviceInit@WDFCXDEVICE_INIT@@SAPEAU1@PEAUWDFDEVICE_INIT@@@Z @ 0x1C006BB6C
 * Callers:
 *     imp_WdfCxDeviceInitAllocate @ 0x1C0065F40 (imp_WdfCxDeviceInitAllocate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

WDFCXDEVICE_INIT *__fastcall WDFCXDEVICE_INIT::_AllocateCxDeviceInit(WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *DriverGlobals; // rsi
  _LIST_ENTRY **v3; // rax
  _LIST_ENTRY **v4; // rbx
  _LIST_ENTRY *Flink; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  DriverGlobals = DeviceInit->DriverGlobals;
  v3 = (_LIST_ENTRY **)FxPoolAllocator(
                         DriverGlobals,
                         &DriverGlobals->FxPoolFrameworks,
                         ExDefaultNonPagedPoolType,
                         0xE0uLL,
                         DriverGlobals->Tag,
                         Caller);
  v4 = v3;
  if ( v3 )
  {
    v3[1] = (_LIST_ENTRY *)v3;
    *v3 = (_LIST_ENTRY *)v3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    memset(v3 + 6, 0, 0x38uLL);
    memset(v4 + 13, 0, 0x70uLL);
    v4[27] = 0LL;
    *((_DWORD *)v4 + 52) = 2;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    Flink = DeviceInit->CxDeviceInitListHead.Flink;
    *v4 = Flink;
    v4[1] = &DeviceInit->CxDeviceInitListHead;
    if ( Flink->Blink != &DeviceInit->CxDeviceInitListHead )
      __fastfail(3u);
    Flink->Blink = (_LIST_ENTRY *)v4;
    DeviceInit->CxDeviceInitListHead.Flink = (_LIST_ENTRY *)v4;
    return (WDFCXDEVICE_INIT *)v4;
  }
  else
  {
    WPP_IFR_SF_q(DriverGlobals, 2u, 0x12u, 0xAu, WPP_FxCxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
    return 0LL;
  }
}
