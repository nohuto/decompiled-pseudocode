/*
 * XREFs of ?Create@TileDataLayerItemWrappersTelemetry@@IEAAXXZ @ 0x1800203B4
 * Callers:
 *     ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020324 (-Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 *     atexit @ 0x180025CCC (atexit.c)
 */

void __fastcall TileDataLayerItemWrappersTelemetry::Create(TileDataLayerItemWrappersTelemetry *this)
{
  GUID v2; // xmm0
  __int64 v3; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-38h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-30h] BYREF
  GUID ProviderId; // [rsp+30h] [rbp-28h] BYREF

  if ( (`TileDataLayerItemWrappersLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `TileDataLayerItemWrappersLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`TileDataLayerItemWrappersLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`TileDataLayerItemWrappersLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180037B18;
    qword_180037B18 = (__int64)&wil::TraceLoggingProvider::`vftable';
    qword_180037B30 = (__int64)&`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    qword_180037B20 = (__int64)&`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    byte_180037B28 = 1;
    v2 = (GUID)*((_OWORD *)off_180037048 - 1);
    qword_180037068 = 0LL;
    qword_180037070 = 0LL;
    ProviderId = v2;
    if ( !EventRegister(
            &ProviderId,
            TlgEnableCallback,
            &`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner,
            &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_180037048, *(unsigned __int16 *)off_180037048);
    dword_180037B2C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180037B18 + 8))(&qword_180037B18);
    InitOnceComplete(&`TileDataLayerItemWrappersLogging::Instance'::`2'::wrapper, 0, &qword_180037B18);
  }
  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = *((_QWORD *)Context + 1);
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(TileDataLayerItemWrappersTelemetry *))(v3 + 8))(this);
}
