/*
 * XREFs of ?Provider@TileDataLayerItemWrappersLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800215B4
 * Callers:
 *     ??1?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800216F0 (--1-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x1800217D0 (-StopActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180021BB8 (-StartActivity@TileRetrieve@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ @ 0x180021D10 (-StopActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x1800220D4 (-StartActivity@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800239D0 (-NotifyFailure@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180023F78 (-Stop@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18002410C (-reset@-$shared_object@V-$ActivityData@VTileDataLayerItemWrappersLogging@@U_TlgReflectorTag_Para.c)
 *     ?ReportStopActivity@?$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180024258 (-ReportStopActivity@-$ActivityBase@VTileDataLayerItemWrappersLogging@@$00$0A@$04U_TlgReflectorTa.c)
 * Callees:
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     atexit @ 0x180026778 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *TileDataLayerItemWrappersLogging::Provider(void)
{
  GUID v0; // xmm0
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
    Context = &qword_180038AF0;
    qword_180038AF0 = (__int64)&TileDataLayerItemWrappersLogging::`vftable';
    qword_180038B08 = (__int64)&`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    qword_180038AF8 = (__int64)&`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    byte_180038B00 = 1;
    v0 = (GUID)*((_OWORD *)off_180038008 - 1);
    qword_180038028 = 0LL;
    qword_180038030 = 0LL;
    ProviderId = v0;
    if ( !EventRegister(
            &ProviderId,
            TlgEnableCallback,
            &`TileDataLayerItemWrappersLogging::StaticHandle::StaticHandle'::`2'::__hInner,
            &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_180038008, *(unsigned __int16 *)off_180038008);
    dword_180038B04 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180038AF0 + 8))(&qword_180038AF0);
    InitOnceComplete(&`TileDataLayerItemWrappersLogging::Instance'::`2'::wrapper, 0, &qword_180038AF0);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
