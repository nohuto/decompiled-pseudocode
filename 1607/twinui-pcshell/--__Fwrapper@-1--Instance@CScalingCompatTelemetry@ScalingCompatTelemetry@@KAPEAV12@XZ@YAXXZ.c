/*
 * XREFs of ??__Fwrapper@?1??Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ@YAXXZ @ 0x180031E30
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18002F67C (InitOnceBeginInitialize_0.c)
 */

void __fastcall `ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper''()
{
  _QWORD *v0; // rbx
  bool v1; // zf
  __int64 v2; // rbx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         1u,
         &fPending,
         &Context)
    && !fPending )
  {
    v0 = Context;
    v1 = *((_BYTE *)Context + 16) == 0;
    *(_QWORD *)Context = &wil::TraceLoggingProvider::`vftable';
    if ( !v1 )
    {
      v2 = v0[1];
      EventUnregister(*(_QWORD *)(v2 + 32));
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)v2 = 0;
    }
  }
}
