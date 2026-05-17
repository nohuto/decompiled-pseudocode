/*
 * XREFs of LdrpCorInitialize @ 0x1800863F0
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x1800153AC (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x180018C08 (LdrpBuildSystem32FileName.c)
 *     RtlQueryEnvironmentVariable @ 0x1800196D0 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F018 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(_QWORD *a1)
{
  bool v2; // bl
  int Dll; // ebx
  int *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-1B0h] BYREF
  int v12; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v13; // [rsp+48h] [rbp-1A0h]
  _WORD v14[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v15[16]; // [rsp+150h] [rbp-98h] BYREF

  v2 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, (__int64)&v11) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, (__int64)&v11) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v13 = v14;
  v12 = 0x1000000;
  v14[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v12, (__int64)&LdrpMscoreeDllName);
    v4 = &v12;
  }
  else
  {
    v4 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, v15);
    Dll = LdrpLoadDll((__int64)v4, (int)v15, 0, 0, (__int64)&v10);
    LdrpReleaseDllPath((__int64)v15);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v10 + 48), "_CorExeMain", 0, (char **)&v11);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v10, 0LL, v5, v6);
        v8 = v10;
      }
      else
      {
        v7 = (char *)__ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        LdrpCorExeMainRoutine = (__int64)v7;
        v8 = v10;
        *a1 = v10;
      }
      LdrpDereferenceModule(v8, v7, v5, v6);
    }
  }
  if ( v14 != v13 )
    NtdllpFreeStringRoutine((__int64)v13);
  return (unsigned int)Dll;
}
