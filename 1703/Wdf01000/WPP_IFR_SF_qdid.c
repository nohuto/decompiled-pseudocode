/*
 * XREFs of WPP_IFR_SF_qdid @ 0x1C0078A48
 * Callers:
 *     imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1C0079890 (imp_WdfRequestRetrieveUnsafeUserInputBuffer.c)
 *     imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1C0079B00 (imp_WdfRequestRetrieveUnsafeUserOutputBuffer.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qdid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        int level,
        __int64 flags)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741789;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequestApi_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0x10u,
    WPP_FxRequestApi_cpp_Traceguids,
    _a2,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    _a4,
    4LL,
    0LL);
}
