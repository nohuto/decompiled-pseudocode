/*
 * XREFs of __security_check_cookie @ 0x140003130
 * Callers:
 *     ?GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z @ 0x140002580 (-GetFloat@CSettingsManager@@AEAAJPEBGPEAM@Z.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002930 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140002B60 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     __GSHandlerCheckCommon @ 0x140003EF0 (__GSHandlerCheckCommon.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x1400048B0 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 *     Template_q @ 0x1400049CC (Template_q.c)
 *     Template_qqq @ 0x140004A30 (Template_qqq.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x140004F50 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
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
