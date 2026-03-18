/*
 * XREFs of WPP_IFR_SF_qdL @ 0x1C008E01C
 * Callers:
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0067590 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qdL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxUsbPipe_cpp_Traceguids,
      0xCu,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 4u, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, 0xCu, &level, 8LL, &flags, 4LL, &id, 4LL, 0LL);
}
