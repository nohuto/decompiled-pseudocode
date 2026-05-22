/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x18008369C
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180082E90 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(**(_QWORD **)(a1 + 32) + 112LL))(
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 40),
         v9);
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 129, v6);
    return 0;
  }
  return *(_DWORD *)a2 == v9[0]
      && *(_DWORD *)(a2 + 4) == v9[1]
      && *(_DWORD *)(a2 + 8) == v9[2]
      && *(_QWORD *)(a2 + 16) == v10
      && *(_QWORD *)(a2 + 24) == v11
      && *(_QWORD *)(a2 + 32) == v12
      && *(_QWORD *)(a1 + 56) == a3;
}
