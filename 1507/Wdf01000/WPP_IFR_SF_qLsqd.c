/*
 * XREFs of WPP_IFR_SF_qLsqd @ 0x1C0032B08
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005650 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001FC00 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00973F4 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C00015E0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0066AD0 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qLsqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        unsigned int _a4,
        const char *_a5,
        const void *globals_0,
        int level_0)
{
  const char *v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax
  __int64 v19; // rbx

  v10 = _a5;
  v11 = "NULL";
  v12 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a5 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( _a5[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = "NULL";
    if ( _a5 )
      v18 = _a5;
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      &_a3,
      8LL,
      &_a4,
      4LL,
      v18,
      v17,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  if ( v10 )
  {
    do
      ++v12;
    while ( v10[v12] );
    v19 = v12 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( v10 )
    v11 = v10;
  FxIFR(
    globals,
    level,
    0xDu,
    (_GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
    _a1,
    &_a3,
    8LL,
    &_a4,
    4LL,
    v11,
    v19,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
