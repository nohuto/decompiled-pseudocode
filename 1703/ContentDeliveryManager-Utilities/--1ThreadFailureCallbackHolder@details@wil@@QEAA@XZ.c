/*
 * XREFs of ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180022D98
 * Callers:
 *     ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180024724 (--1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180024E30 (--1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x180025470 (--1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180028480 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180038C10 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180050B9C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180050FEC (--1DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMana.c)
 *     ??1DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180051ADC (--1DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800522D0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     _lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator() @ 0x180052698 (_lambda_093e5cd604f7ab5de7acc075fbba0f63_--operator().c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180052960 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     _lambda_54b1615c74727b96cfd9244fd3177ed2_::operator() @ 0x180052CFC (_lambda_54b1615c74727b96cfd9244fd3177ed2_--operator().c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180022CF8 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL);
    v4 = *(_QWORD **)this;
    *((_DWORD *)this + 6) = 0;
    if ( *v4 )
    {
      while ( **(wil::details::ThreadFailureCallbackHolder ***)this != this )
      {
        v5 = (_QWORD *)(**(_QWORD **)this + 16LL);
        *(_QWORD *)this = v5;
        if ( !*v5 )
          goto LABEL_9;
      }
      **(_QWORD **)this = *((_QWORD *)this + 2);
    }
LABEL_9:
    *(_QWORD *)this = 0LL;
  }
}
