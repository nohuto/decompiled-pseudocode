/*
 * XREFs of ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18003D370 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18003D4B4 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18003D6C0 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18003D898 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003DB80 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800777E0 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_1800777E0.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180078350 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078FFC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800790D0 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180079200 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180079518 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180079ECC (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180079FA0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C8EC (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C968 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C9E4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007CA60 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18007E940 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800420F0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004F4AC (atexit.c)
 */

struct WindowFrameLogging *WindowFrameLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`WindowFrameLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `WindowFrameLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`WindowFrameLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_1800B7D38;
    qword_1800B7D38[0] = &WindowFrameLogging::`vftable';
    qword_1800B7D50 = (__int64)&`WindowFrameLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_1800B7D38,
      (const struct _TlgProvider_t *const)&`WindowFrameLogging::StaticHandle::StaticHandle'::`2'::__hInner);
    InitOnceComplete(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, qword_1800B7D38);
  }
  return (struct WindowFrameLogging *)Context;
}
