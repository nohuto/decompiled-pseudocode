/*
 * XREFs of LdrpCorInitialize @ 0x18004EBB0
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180012044 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlQueryEnvironmentVariable @ 0x18002EB50 (RtlQueryEnvironmentVariable.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 LdrpCorInitialize()
{
  bool v0; // bl
  int appended; // ebx
  int *v2; // r8
  __int64 v4; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int16 v5[12]; // [rsp+38h] [rbp-140h] BYREF
  int v6; // [rsp+50h] [rbp-128h] BYREF
  _WORD *v7; // [rsp+58h] [rbp-120h]
  _WORD v8[128]; // [rsp+60h] [rbp-118h] BYREF

  v0 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, (__int64)&v4) == -1073741789 )
    v0 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, (__int64)&v4) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v7 = v8;
  v6 = 0x1000000;
  v8[0] = 0;
  if ( v0 )
  {
    RtlInitUnicodeStringEx((__int64)v5, 2147352624LL);
    appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v6, v5);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v6, SlashSystem32SlashString);
      if ( appended >= 0 )
        appended = LdrpAppendUnicodeStringToFilenameBuffer((unsigned __int16 *)&v6, LdrpMscoreeDllName);
    }
    v2 = &v6;
  }
  else
  {
    v2 = (int *)LdrpMscoreeDllName;
    appended = 0;
  }
  if ( appended >= 0 )
  {
    appended = LdrLoadDll(0LL, 0LL, (__int64)v2, &v4);
    if ( appended >= 0 )
    {
      appended = LdrGetProcedureAddress(v4, &LdrpCorExeMainName, 0LL, v5);
      if ( appended < 0 )
        LdrUnloadDll(v4);
      else
        LdrpCorExeMainRoutine = __ROR8__(*(_QWORD *)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
    }
  }
  if ( v8 != v7 )
    NtdllpFreeStringRoutine((__int64)v7);
  return (unsigned int)appended;
}
