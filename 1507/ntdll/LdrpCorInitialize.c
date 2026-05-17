/*
 * XREFs of LdrpCorInitialize @ 0x1800032D8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x1800353E0 (RtlQueryEnvironmentVariable.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 LdrpCorInitialize()
{
  bool v0; // bl
  __int64 v1; // rdx
  int appended; // ebx
  int *v3; // r8
  __int64 v5; // [rsp+30h] [rbp-148h] BYREF
  _QWORD v6[3]; // [rsp+38h] [rbp-140h] BYREF
  int v7; // [rsp+50h] [rbp-128h] BYREF
  _WORD *v8; // [rsp+58h] [rbp-120h]
  _WORD v9[128]; // [rsp+60h] [rbp-118h] BYREF

  v0 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 19LL, 0LL, 0LL, &v5) == -1073741789 )
    v0 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 15LL, 0LL, 0LL, &v5) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  v8 = v9;
  v7 = 0x1000000;
  v9[0] = 0;
  if ( v0 )
  {
    RtlInitUnicodeStringEx(v6, 2147352624LL);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(&v7, v6);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer(&v7, &SlashSystem32SlashString);
      if ( appended >= 0 )
        appended = LdrpAppendUnicodeStringToFilenameBuffer(&v7, &LdrpMscoreeDllName);
    }
    v3 = &v7;
  }
  else
  {
    v3 = (int *)&LdrpMscoreeDllName;
    appended = 0;
  }
  if ( appended >= 0 )
  {
    appended = LdrLoadDll(0LL, 0LL, v3, &v5);
    if ( appended >= 0 )
    {
      appended = LdrGetProcedureAddress(v5, &LdrpCorExeMainName, 0LL, v6);
      if ( appended < 0 )
      {
        LdrUnloadDll(v5);
      }
      else
      {
        v1 = __ROR8__(v6[0] ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        LdrpCorExeMainRoutine = v1;
      }
    }
  }
  if ( v9 != v8 )
    NtdllpFreeStringRoutine(v8, v1, v3);
  return (unsigned int)appended;
}
