/*
 * XREFs of WPP_IFR_SF_ds @ 0x1C006EF50
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006E654 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_ds(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        int flags,
        const char *id)
{
  const char *v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rbx

  v7 = id;
  v8 = "NULL";
  v9 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x200000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( id[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = "NULL";
    if ( id )
      v13 = id;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_TracingIfrReplay_cpp_Traceguids,
      0xDu,
      &flags,
      4LL,
      v13,
      v12,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v9;
    while ( v7[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( v7 )
    v8 = v7;
  FxIFR(globals, 2u, 0x16u, WPP_TracingIfrReplay_cpp_Traceguids, 0xDu, &flags, 4LL, v8, v14, 0LL);
}
