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
  NTSTATUS appended; // ebx
  _UNICODE_STRING *p_DllName; // r8
  ULONG_PTR ReturnLength; // [rsp+30h] [rbp-148h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-140h] BYREF
  _UNICODE_STRING DllName; // [rsp+50h] [rbp-128h] BYREF
  _WORD v8[128]; // [rsp+60h] [rbp-118h] BYREF

  v0 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v0 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  DllName.Buffer = v8;
  *(_DWORD *)&DllName.Length = 0x1000000;
  v8[0] = 0;
  if ( v0 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)0x7FFE0030);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName, &DestinationString);
    if ( appended >= 0 )
    {
      appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName, &SlashSystem32SlashString);
      if ( appended >= 0 )
        appended = LdrpAppendUnicodeStringToFilenameBuffer(&DllName, &LdrpMscoreeDllName);
    }
    p_DllName = &DllName;
  }
  else
  {
    p_DllName = (_UNICODE_STRING *)&LdrpMscoreeDllName;
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
      {
        LdrUnloadDll((PVOID)ReturnLength);
      }
      else
      {
        v1 = __ROR8__(
               *(_QWORD *)&DestinationString.Length ^ (unsigned int)MEMORY[0x7FFE0330],
               (unsigned __int8)MEMORY[0x7FFE0330] & 0x3F);
        LdrpCorExeMainRoutine = v1;
      }
    }
  }
  if ( v8 != DllName.Buffer )
    NtdllpFreeStringRoutine(DllName.Buffer, v1, p_DllName);
  return (unsigned int)appended;
}
