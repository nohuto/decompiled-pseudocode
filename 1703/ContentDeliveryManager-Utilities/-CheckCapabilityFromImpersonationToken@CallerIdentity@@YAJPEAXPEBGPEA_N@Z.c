/*
 * XREFs of ?CheckCapabilityFromImpersonationToken@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180044FA4
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180044FF8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180038010 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromImpersonationToken(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *(_BYTE *)a3 = 0;
  v5 = CapabilityCheck(this, L"targetedContent", &v8, a4);
  if ( v5 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x11,
             (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
             (const char *)(unsigned int)v5);
  *(_BYTE *)a3 = (_BYTE)v8 != 0;
  return 0LL;
}
