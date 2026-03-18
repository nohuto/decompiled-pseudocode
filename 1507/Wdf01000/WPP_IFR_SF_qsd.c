/*
 * XREFs of WPP_IFR_SF_qsd @ 0x1C00705B8
 * Callers:
 *     imp_WdfDeviceSetPowerCapabilities @ 0x1C002B220 (imp_WdfDeviceSetPowerCapabilities.c)
 *     imp_WdfDeviceSetPnpCapabilities @ 0x1C002B500 (imp_WdfDeviceSetPnpCapabilities.c)
 *     imp_WdfDeviceSetDeviceState @ 0x1C0071D60 (imp_WdfDeviceSetDeviceState.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        const char *level,
        int flags)
{
  const char *v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rbx

  v8 = level;
  v9 = "NULL";
  v10 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( level )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( level[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    if ( level )
      v15 = level;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      v15,
      v14,
      &flags,
      4LL,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v10;
    while ( v8[v10] );
    v16 = v10 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( v8 )
    v9 = v8;
  FxIFR(globals, 2u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, _a2, &globals_0, 8LL, v9, v16, &flags, 4LL, 0LL);
}
