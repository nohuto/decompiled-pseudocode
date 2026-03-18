/*
 * XREFs of WPP_IFR_SF_sd @ 0x1C009F650
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001B130 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        const char *id)
{
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const char *v11; // rax
  __int64 v12; // rbx
  int _a2[4]; // [rsp+50h] [rbp-18h] BYREF

  v6 = "NULL";
  v7 = -1LL;
  _a2[0] = -1073741808;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( id[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = "NULL";
    if ( id )
      v11 = id;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgPnp_cpp_Traceguids,
      0x32u,
      v11,
      v10,
      _a2,
      4LL,
      0LL);
  }
  if ( id )
  {
    do
      ++v7;
    while ( id[v7] );
    v12 = v7 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( id )
    v6 = id;
  FxIFR(globals, 2u, 0xCu, WPP_FxPkgPnp_cpp_Traceguids, 0x32u, v6, v12, _a2, 4LL, 0LL);
}
