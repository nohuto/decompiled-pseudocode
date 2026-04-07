/*
 * XREFs of ?Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ @ 0x18004B7A4
 * Callers:
 *     ?ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z @ 0x18003E4C4 (-ScalingCompatCalculationTelemetry@@YAXW4AppType@ScalingCompatTelemetry@@II@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180041054 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004B830 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004F182 (InitOnceBeginInitialize_0.c)
 */

struct ScalingCompatTelemetry::CScalingCompatTelemetry *ScalingCompatTelemetry::CScalingCompatTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

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
    v2 = 0;
    Context = &qword_1800BE778;
    v1 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
    qword_1800BE778 = (__int64)&WindowFrameLogging::`vftable';
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v1);
  }
  return (struct ScalingCompatTelemetry::CScalingCompatTelemetry *)Context;
}
