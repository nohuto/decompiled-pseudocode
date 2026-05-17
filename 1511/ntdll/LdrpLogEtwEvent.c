/*
 * XREFs of LdrpLogEtwEvent @ 0x1800CA054
 * Callers:
 *     LdrpLogError @ 0x180003CE8 (LdrpLogError.c)
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x18001527C (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x180015388 (LdrpFindLoadedDllByName.c)
 *     RtlpWaitOnCriticalSection @ 0x18002FD78 (RtlpWaitOnCriticalSection.c)
 *     LdrpTryAcquireLoaderLock @ 0x180051074 (LdrpTryAcquireLoaderLock.c)
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 *     LdrpProcessInitializationComplete @ 0x180083B90 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800C9CAC (LdrpEventAddUnicodeString.c)
 */

__int64 __fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, unsigned __int8 a4, __int64 a5)
{
  _DWORD v6[4]; // [rsp+20h] [rbp-268h] BYREF
  __int16 v7; // [rsp+36h] [rbp-252h]
  __int64 v8; // [rsp+50h] [rbp-238h]
  char v9; // [rsp+58h] [rbp-230h]
  unsigned __int8 v10; // [rsp+59h] [rbp-22Fh]
  _WORD v11[267]; // [rsp+5Ah] [rbp-22Eh] BYREF

  v7 = a1;
  if ( a2 != -1 )
  {
    v8 = a2;
    if ( a4 != -1 )
    {
      v10 = a4;
      v9 = a3;
      LdrpEventAddUnicodeString(a5, v11, 0x214u, v6);
    }
  }
  return NtTraceEvent();
}
