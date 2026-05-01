/*
 * XREFs of ?CreateEnergyUsageWnfStates@AppEnergyInformation@@IEAAJPEAUEnergyNotificationStates@@@Z @ 0x180050054
 * Callers:
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x1800529E0 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     _lambda_498ad9702f385d27f598a98fb2568bd0_::operator() @ 0x18004FDB0 (_lambda_498ad9702f385d27f598a98fb2568bd0_--operator().c)
 *     ?Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180053190 (-Return_GetLastErrorPreRelease@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800531E4 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::CreateEnergyUsageWnfStates(
        AppEnergyInformation *this,
        struct EnergyNotificationStates *a2)
{
  const char *v3; // r9
  unsigned int LastErrorPreRelease; // eax
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  PSECURITY_DESCRIPTOR v8; // rcx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-9h] BYREF
  __int128 v11; // [rsp+48h] [rbp-1h]
  PSECURITY_DESCRIPTOR *p_SecurityDescriptor; // [rsp+58h] [rbp+Fh]
  __int128 v13; // [rsp+60h] [rbp+17h] BYREF
  PSECURITY_DESCRIPTOR *v14; // [rsp+70h] [rbp+27h]
  char v15; // [rsp+78h] [rbp+2Fh]
  __int64 v16; // [rsp+80h] [rbp+37h] BYREF
  __int64 v17; // [rsp+88h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  SecurityDescriptor = 0LL;
  *(_QWORD *)&v11 = &v17;
  v15 = 1;
  *((_QWORD *)&v11 + 1) = &v16;
  p_SecurityDescriptor = &SecurityDescriptor;
  v14 = &SecurityDescriptor;
  v13 = v11;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GR;;;AU)(A;;GR;;;AC)(A;;GA;;;SY)(A;;GR;;;IU)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    LastErrorPreRelease = wil::details::in1diag3::Return_GetLastErrorPreRelease(
                            retaddr,
                            (void *)0x500,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            v3);
LABEL_8:
    v15 = 0;
    v7 = LastErrorPreRelease;
    lambda_498ad9702f385d27f598a98fb2568bd0_::operator()((__int64)&v13);
    return v7;
  }
  v5 = NtCreateWnfStateName(&v17, 3LL, 0LL);
  if ( v5 < 0 )
  {
    v6 = 1291LL;
LABEL_7:
    LastErrorPreRelease = wil::details::in1diag3::Return_NtStatusPreRelease(
                            retaddr,
                            (void *)v6,
                            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
                            (const char *)(unsigned int)v5,
                            0);
    goto LABEL_8;
  }
  v5 = NtCreateWnfStateName(&v16, 3LL, 0LL);
  if ( v5 < 0 )
  {
    v6 = 1302LL;
    goto LABEL_7;
  }
  v8 = SecurityDescriptor;
  *(_QWORD *)a2 = v17;
  *((_QWORD *)a2 + 1) = v16;
  *((_DWORD *)a2 + 4) = 1;
  if ( v8 )
    LocalFree(v8);
  return 0;
}
