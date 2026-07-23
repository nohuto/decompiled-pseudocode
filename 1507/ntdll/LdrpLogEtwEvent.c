/*
 * XREFs of LdrpLogEtwEvent @ 0x1800BD334
 * Callers:
 *     LdrpTryAcquireLoaderLock @ 0x180008804 (LdrpTryAcquireLoaderLock.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     ApiSetQueryApiSetPresence @ 0x1800212C0 (ApiSetQueryApiSetPresence.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x180024024 (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x18002467C (LdrpFindLoadedDllByName.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpMapImage @ 0x180040760 (LdrpMapImage.c)
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     LdrpLogError @ 0x180075B80 (LdrpLogError.c)
 *     LdrpProcessInitializationComplete @ 0x180077CF0 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800BCF8C (LdrpEventAddUnicodeString.c)
 */

NTSTATUS __fastcall LdrpLogEtwEvent(__int16 a1, __int64 a2, char a3, unsigned __int8 a4, __int64 a5)
{
  ULONG v6; // r8d
  _DWORD v8[4]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE Fields[6]; // [rsp+30h] [rbp-258h] BYREF
  __int16 v10; // [rsp+36h] [rbp-252h]
  __int64 v11; // [rsp+50h] [rbp-238h]
  char v12; // [rsp+58h] [rbp-230h]
  unsigned __int8 v13; // [rsp+59h] [rbp-22Fh]
  _WORD v14[267]; // [rsp+5Ah] [rbp-22Eh] BYREF

  v6 = 0;
  v10 = a1;
  if ( a2 != -1 )
  {
    v6 = 8;
    v11 = a2;
    if ( a4 != -1 )
    {
      v13 = a4;
      v12 = a3;
      LdrpEventAddUnicodeString(a5, v14, 0x214u, v8);
      v6 = v8[0] + 10;
    }
  }
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v6, Fields);
}
