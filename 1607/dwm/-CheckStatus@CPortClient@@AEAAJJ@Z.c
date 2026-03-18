/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001490
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001640 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1400024A0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140004FC0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 10, 1, 0);
  return a2;
}
