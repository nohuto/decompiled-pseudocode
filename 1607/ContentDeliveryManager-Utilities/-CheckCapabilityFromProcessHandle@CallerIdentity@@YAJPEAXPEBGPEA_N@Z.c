/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003B1CC
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18003B2A8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C880 (--0-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180032B70 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x18003AF20 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18003B1A8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  void *v6; // rdx
  void **v7; // r9
  HANDLE v8; // rsi
  DWORD LastError; // ebx
  int ImpersonationTokenFromProcess; // eax
  unsigned int v11; // ebx
  HANDLE v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v18; // [rsp+48h] [rbp+10h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp+18h] BYREF

  v18 = a2;
  *(_BYTE *)a3 = 0;
  Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(&hObject);
  v8 = hObject;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    LastError = GetLastError();
    CloseHandle(v8);
    SetLastError(LastError);
  }
  hObject = 0LL;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(this, v6, &hObject, v7);
  v11 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
  {
    v12 = hObject;
    *(_BYTE *)a3 = 0;
    v13 = CapabilityCheck(v12, L"targetedContentSubscription", &v18);
    if ( v13 >= 0 )
    {
      v11 = 0;
      *(_BYTE *)a3 = (_BYTE)v18 != 0;
    }
    else
    {
      v11 = wil::details::in1diag3::Return_NtStatus(retaddr, v14, v15, (const char *)(unsigned int)v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  return v11;
}
