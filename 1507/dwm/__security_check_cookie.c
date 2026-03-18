/*
 * XREFs of __security_check_cookie @ 0x140003080
 * Callers:
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x140002610 (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002880 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002AB0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     __GSHandlerCheckCommon @ 0x140003E40 (__GSHandlerCheckCommon.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140004830 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     Template_q @ 0x14000494C (Template_q.c)
 *     Template_qqq @ 0x1400049B0 (Template_qqq.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004ED0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
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
