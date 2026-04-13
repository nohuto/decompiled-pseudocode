/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8
 * Callers:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180022D98 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180024300 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180024A40 (-StopActivity@LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ?StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x180025080 (-StopActivity@SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@M.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002B594 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_Tl.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002BD40 (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorT.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003C3F8 (-IgnoreCurrentThread@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMan.c)
 *     ?StopActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x180050BE0 (-StopActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentD.c)
 *     ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180051234 (-Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?StopActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@MEAAXXZ @ 0x1800516D0 (-StopActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x180051D24 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002A38 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x3AEu,
    (__int64)"internal\\sdk\\inc\\wil\\result.h",
    0LL,
    0LL,
    retaddr,
    2,
    (unsigned int)a4);
  return v4;
}
