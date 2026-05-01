/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18001F06C
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18001F118 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18001F048 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x18001F2C0 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        void **a4)
{
  int ImpersonationTokenFromProcess; // eax
  unsigned int v6; // ebx
  HANDLE v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+38h] [rbp+10h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp+18h] BYREF

  v13 = a2;
  hObject = 0LL;
  *(_BYTE *)a3 = 0;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(this, a2, (unsigned int)&hObject, a4);
  v6 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
  {
    v7 = hObject;
    *(_BYTE *)a3 = 0;
    v8 = CapabilityCheck(v7, L"gameList", &v13);
    if ( v8 >= 0 )
    {
      v6 = 0;
      *(_BYTE *)a3 = (_BYTE)v13 != 0;
    }
    else
    {
      v6 = wil::details::in1diag3::Return_NtStatusPreRelease(retaddr, v9, v10, (const char *)(unsigned int)v8);
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      28LL,
      (__int64)"shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
