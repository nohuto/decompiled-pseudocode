/*
 * XREFs of WPP_IFR_SF_qqs @ 0x1C0083504
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000EA8C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        const void *flags,
        const char *id)
{
  const char *v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rbx

  v8 = id;
  v9 = "NULL";
  v10 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
  {
    if ( id )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( id[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = "NULL";
    if ( id )
      v14 = id;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&FxObject::`vftable'.DebugExtension,
      0x63u,
      &level,
      8LL,
      &flags,
      8LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v10;
    while ( v8[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( v8 )
    v9 = v8;
  FxIFR(globals, 5u, 0xDu, (_GUID *)&FxObject::`vftable'.DebugExtension, 0x63u, &level, 8LL, &flags, 8LL, v9, v15, 0LL);
}
