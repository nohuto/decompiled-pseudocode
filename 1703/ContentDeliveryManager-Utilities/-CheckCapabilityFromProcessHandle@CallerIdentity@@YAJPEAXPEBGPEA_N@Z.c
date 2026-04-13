/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180044FF8
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18004508C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180038E0C (--0-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180038E14 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x18003D5A4 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180044FA4 (-CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1800456B4 (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  void *v6; // rdx
  void **v7; // r9
  int ImpersonationTokenFromProcess; // eax
  void *v9; // rdx
  bool *v10; // r9
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  hObject = a2;
  *(_BYTE *)a3 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>::close_reset(hObject);
  hObject = 0LL;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(this, v6, (unsigned int)&hObject, v7);
  v11 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
    v11 = CallerIdentity::CheckCapabilityFromImpersonationToken((CallerIdentity *)hObject, v9, a3, v10);
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  return v11;
}
