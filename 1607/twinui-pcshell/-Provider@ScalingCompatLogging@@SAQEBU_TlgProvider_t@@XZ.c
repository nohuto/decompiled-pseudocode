/*
 * XREFs of ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18001B4B4
 * Callers:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18001B400 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18001B578 (-Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001090 (TraceLoggingRegister.c)
 *     atexit @ 0x18002EB20 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18002F67C (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x18002F688 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ScalingCompatLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`ScalingCompatLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `ScalingCompatLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`ScalingCompatLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_18004CCC0;
    qword_18004CCC0 = (__int64)&ScalingCompatLogging::`vftable';
    byte_18004CCD0 = 1;
    qword_18004CCD8 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    qword_18004CCC8 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    TraceLoggingRegister((TraceLoggingHProvider)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner);
    dword_18004CCD4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18004CCC0 + 8))(&qword_18004CCC0);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &qword_18004CCC0);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
