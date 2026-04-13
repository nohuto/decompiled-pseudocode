/*
 * XREFs of ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18001CB74
 * Callers:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001CCD0 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001CD60 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0I@Z @ 0x18001D290 (-StartActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEB.c)
 *     ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001D470 (-StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z @ 0x18001D888 (-StartActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG@Z.c)
 *     ?StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18001DA60 (-StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@M.c)
 *     ?StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXW4TriggerId@Triggers@4@@Z @ 0x18001DE78 (-StartActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@.c)
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001E0E0 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorT_ea_18001E0E0.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800237C0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAA.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180023E18 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_Tl.c)
 *     ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180023FB0 (-NotifyFailure@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800245D8 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180025F28 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18001CA20 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180058D18 (atexit.c)
 */

const struct _TlgProvider_t *CreativeFramework::Logging::ShellPlacementLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(
    &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    Context = qword_18008C020;
    qword_18008C020[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    qword_18008C038 = (__int64)&`CreativeFramework::Logging::ShellPlacementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_18008C020,
      (const struct _TlgProvider_t *const)&`CreativeFramework::Logging::ShellPlacementLogging::StaticHandle::StaticHandle'::`2'::__hInner);
    InitOnceComplete(&`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper, 0, qword_18008C020);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
