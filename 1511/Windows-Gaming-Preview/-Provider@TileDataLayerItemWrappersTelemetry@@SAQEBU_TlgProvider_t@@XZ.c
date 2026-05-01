/*
 * XREFs of ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020324
 * Callers:
 *     ?NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ @ 0x1800214D4 (-NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ.c)
 *     _lambda_4b113ca380de658e4b053f81fda3c9b1_::operator() @ 0x180022F84 (_lambda_4b113ca380de658e4b053f81fda3c9b1_--operator().c)
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 *     ??$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z @ 0x18002432C (--$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z.c)
 * Callees:
 *     ?Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ @ 0x1800203B4 (-Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180025CCC (atexit.c)
 */

const struct _TlgProvider_t *TileDataLayerItemWrappersTelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`TileDataLayerItemWrappersTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `TileDataLayerItemWrappersTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit(`TileDataLayerItemWrappersTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`TileDataLayerItemWrappersTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180037B48;
    qword_180037B48 = &wil::TraceLoggingProvider::`vftable';
    TileDataLayerItemWrappersTelemetry::Create((TileDataLayerItemWrappersTelemetry *)&qword_180037B48);
    InitOnceComplete(&`TileDataLayerItemWrappersTelemetry::Instance'::`2'::wrapper, 0, &qword_180037B48);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
