/*
 * XREFs of ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020664
 * Callers:
 *     ?NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ @ 0x1800218C0 (-NoDelayRetrySucceeded@TileDataLayerItemWrappersTelemetry@@SAXXZ.c)
 *     _lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator() @ 0x1800230B4 (_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_--operator().c)
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 *     ??$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z @ 0x18002442C (--$DelayedRetry@AEAJAEAHAEAH@TileDataLayerItemWrappersTelemetry@@SAXAEAJAEAH1@Z.c)
 * Callees:
 *     ?Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ @ 0x1800206F4 (-Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180025DFC (atexit.c)
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
    Context = qword_180037B30;
    qword_180037B30[0] = &wil::TraceLoggingProvider::`vftable';
    TileDataLayerItemWrappersTelemetry::Create((TileDataLayerItemWrappersTelemetry *)qword_180037B30);
    InitOnceComplete(&`TileDataLayerItemWrappersTelemetry::Instance'::`2'::wrapper, 0, qword_180037B30);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
