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
  _UNICODE_STRING *p_DllName; // r8
  ULONG_PTR ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-140h] BYREF
  _UNICODE_STRING DllName; // [rsp+50h] [rbp-128h] BYREF
  _WORD v7[128]; // [rsp+60h] [rbp-118h] BYREF

  v0 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v0 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  DllName.Buffer = v7;
  *(_DWORD *)&DllName.Length = 0x1000000;
  v7[0] = 0;
  if ( v0 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)0x7FFE0030);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName.Length, &DestinationString.Length);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName.Length, &SlashSystem32SlashString.Length);
      if ( appended >= 0 )
        appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName.Length, LdrpMscoreeDllName);
    }
    p_DllName = &DllName;
  }
  else
  {
    p_DllName = (_UNICODE_STRING *)LdrpMscoreeDllName;
    appended = 0;
  }
  if ( appended >= 0 )
  {
    appended = LdrLoadDll(0LL, 0LL, p_DllName, (PVOID *)&ReturnLength);
    if ( appended >= 0 )
    {
      appended = LdrGetProcedureAddress(
                   (PVOID)ReturnLength,
                   (PANSI_STRING)&LdrpCorExeMainName,
                   0,
                   (PVOID *)&DestinationString);
      if ( appended < 0 )
        LdrUnloadDll((PVOID)ReturnLength);
      else
        LdrpCorExeMainRoutine = __ROR8__(
                                  *(_QWORD *)&DestinationString.Length ^ (unsigned int)MEMORY[0x7FFE0330],
                                  (unsigned __int8)MEMORY[0x7FFE0330] & 0x3F);
    }
  }
  if ( v7 != DllName.Buffer )
    NtdllpFreeStringRoutine(DllName.Buffer);
  return (unsigned int)appended;
}
