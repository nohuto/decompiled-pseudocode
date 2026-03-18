/*
 * XREFs of WPP_IFR_SF_sqq @ 0x1C007AA74
 * Callers:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0004A00 (--1FxObject@@UEAA@XZ.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const char *level,
        const void *flags,
        const void *id)
{
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rbx

  v8 = "NULL";
  v9 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x80000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) )
  {
    if ( level )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( level[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = "NULL";
    if ( level )
      v13 = level;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxObject_cpp_Traceguids,
      0xAu,
      v13,
      v12,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  }
  if ( level )
  {
    do
      ++v9;
    while ( level[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( level )
    v8 = level;
  FxIFR(globals, 1u, 0x14u, WPP_FxObject_cpp_Traceguids, 0xAu, v8, v14, &flags, 8LL, &id, 8LL, 0LL);
}
