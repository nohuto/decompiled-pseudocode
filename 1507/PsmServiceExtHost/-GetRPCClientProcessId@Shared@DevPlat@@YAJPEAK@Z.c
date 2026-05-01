/*
 * XREFs of ?GetRPCClientProcessId@Shared@DevPlat@@YAJPEAK@Z @ 0x18004D360
 * Callers:
 *     ?GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z @ 0x18004647C (-GetPackageFullNameFromRPCContext@@YAJPEAIPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18004C454 (-Return_NtStatusPreRelease@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DevPlat::Shared::GetRPCClientProcessId(DevPlat::Shared *this, unsigned int *a2)
{
  RPC_STATUS v4; // eax
  DWORD CurrentProcessId; // eax
  _DWORD RpcCallAttributes[32]; // [rsp+20h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( !this )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      20LL,
      (__int64)"base\\appmodel\\execmodel\\shared\\utility\\rpcutilscontext.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  *(_DWORD *)this = 0;
  memset_0(RpcCallAttributes, 0, 0x78uLL);
  RpcCallAttributes[0] = 3;
  RpcCallAttributes[1] = 16;
  v4 = RpcServerInqCallAttributesW(0LL, RpcCallAttributes);
  if ( !v4 )
  {
    CurrentProcessId = RpcCallAttributes[16];
LABEL_7:
    *(_DWORD *)this = CurrentProcessId;
    return 0LL;
  }
  if ( v4 == 1725 )
  {
    CurrentProcessId = GetCurrentProcessId();
    goto LABEL_7;
  }
  if ( v4 >= 0 )
    return 0LL;
  return wil::details::in1diag3::Return_NtStatusPreRelease(
           retaddr,
           (void *)0x27,
           (__int64)"base\\appmodel\\execmodel\\shared\\utility\\rpcutilscontext.cpp",
           (const char *)(unsigned int)v4);
}
