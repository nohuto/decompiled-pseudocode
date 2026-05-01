/*
 * XREFs of ?CreatePackageEnergyStateChangeWnfState@AppEnergyUsageManager@@IEAAJXZ @ 0x180024460
 * Callers:
 *     ?RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@@Z @ 0x18002450C (-RuntimeClassInitialize@AppEnergyUsageManager@@QEAAJPEAUIRMExecServicesProvider@ExecutionModel@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180053190 (-Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800531E4 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::CreatePackageEnergyStateChangeWnfState(AppEnergyUsageManager *this)
{
  const char *v2; // r9
  int v3; // eax
  PSECURITY_DESCRIPTOR v4; // rcx
  unsigned int v5; // ebx
  unsigned int LastErrorPreRelease; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SecurityDescriptor = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;GR;;;AU)(A;;GR;;;AC)(A;;GA;;;SY)(A;;GR;;;IU)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v3 = NtCreateWnfStateName(&v9, 3LL, 0LL);
    if ( v3 >= 0 )
    {
      v4 = SecurityDescriptor;
      *((_QWORD *)this + 9) = v9;
      if ( v4 )
        LocalFree(v4);
      return 0;
    }
    LastErrorPreRelease = wil::details::in1diag3::Return_NtStatusPreRelease(
                            retaddr,
                            (void *)0x25B,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            (const char *)(unsigned int)v3,
                            0);
  }
  else
  {
    LastErrorPreRelease = wil::details::in1diag3::Return_GetLastErrorPreRelease(
                            retaddr,
                            (void *)0x250,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            v2);
  }
  v5 = LastErrorPreRelease;
  if ( v9 )
    NtDeleteWnfStateName(&v9);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return v5;
}
