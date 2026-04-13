/*
 * XREFs of ?_Destroy@?$_Ref_count@VLaunchUriService@Actions@CreativeFramework@@@std@@EEAAXXZ @ 0x18005E260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<CreativeFramework::Actions::LaunchUriService>::_Destroy(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
