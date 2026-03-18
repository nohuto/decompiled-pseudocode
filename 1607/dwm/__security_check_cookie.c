/*
 * XREFs of __security_check_cookie @ 0x1400030F0
 * Callers:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002900 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002B30 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     __GSHandlerCheckCommon @ 0x140003E94 (__GSHandlerCheckCommon.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004618 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     Template_q @ 0x140004734 (Template_q.c)
 *     Template_qqq @ 0x140004798 (Template_qqq.c)
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x14000486C (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z @ 0x140004BCC (-QueryFeatureOverride@@YAHIHPEAW4reg_FeatureEnabledState@@PEAJ@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004D60 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140005480 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
