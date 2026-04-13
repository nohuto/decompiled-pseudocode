/*
 * XREFs of ?_Delete_this@?$_Ref_count_obj@VAppInstallService@Actions@CreativeFramework@@@std@@EEAAXXZ @ 0x180016590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::AppInstallService>::_Delete_this(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
  return result;
}
