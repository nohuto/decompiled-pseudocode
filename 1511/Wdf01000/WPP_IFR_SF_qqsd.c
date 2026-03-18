/*
 * XREFs of WPP_IFR_SF_qqsd @ 0x1C00703C8
 * Callers:
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C006FFF4 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        const char *globals_0,
        int level_0)
{
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // rax
  __int64 v18; // rbx

  v9 = globals_0;
  v10 = "NULL";
  v11 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( globals_0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( globals_0[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = "NULL";
    if ( globals_0 )
      v17 = globals_0;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxtagtracker_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      v17,
      v16,
      &level_0,
      4LL,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v11;
    while ( v9[v11] );
    v18 = v11 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( v9 )
    v10 = v9;
  FxIFR(globals, level, 0x12u, WPP_fxtagtracker_cpp_Traceguids, _a1, &_a3, 8LL, &_a4, 8LL, v10, v18, &level_0, 4LL, 0LL);
}
