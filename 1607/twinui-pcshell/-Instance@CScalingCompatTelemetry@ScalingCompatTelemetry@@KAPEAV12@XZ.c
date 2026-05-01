/*
 * XREFs of ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18001B578
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x18001B258 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 * Callees:
 *     ?Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18001B4B4 (-Provider@ScalingCompatLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18002EB20 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18002F67C (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x18002F688 (InitOnceComplete_0.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

struct ScalingCompatTelemetry::CScalingCompatTelemetry *ScalingCompatTelemetry::CScalingCompatTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit(`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize_0(
    &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    qword_18004CC98 = (__int64)&ScalingCompatTelemetry::CScalingCompatTelemetry::`vftable';
    Context = &qword_18004CC98;
    qword_18004CCA0 = (__int64)ScalingCompatLogging::Provider();
    byte_18004CCA8 = 0;
    dword_18004CCAC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18004CC98 + 8))(&qword_18004CC98);
    InitOnceComplete_0(&`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper, 0, &qword_18004CC98);
  }
  return (struct ScalingCompatTelemetry::CScalingCompatTelemetry *)Context;
}
