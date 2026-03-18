/*
 * XREFs of _anonymous_namespace_::GNT_NextTopScan @ 0x14023BDA4
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400483F8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x140048624 (_anonymous_namespace_--NTW_GetNextTop.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GNT_NextTopScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 88);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 488);
    if ( !v6 || (*(_DWORD *)(v6 + 48) & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 27LL);
    v7 = *(_QWORD *)(a1 + 488);
    if ( !v7 || (*(_DWORD *)(v7 + 48) & 2) != 0 )
      return 0LL;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL) + 112LL);
  }
  while ( result && *(_QWORD *)(result + 120) != a3 )
    result = *(_QWORD *)(result + 88);
  return result;
}
