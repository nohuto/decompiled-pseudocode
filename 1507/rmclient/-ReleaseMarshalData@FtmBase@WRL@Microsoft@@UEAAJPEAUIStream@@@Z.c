/*
 * XREFs of ?ReleaseMarshalData@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@@Z @ 0x18000D890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::ReleaseMarshalData(Microsoft::WRL::FtmBase *this, struct IStream *a2)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, struct IStream *))(*(_QWORD *)v2 + 56LL))(*((_QWORD *)this + 2), a2);
  else
    return 2147942414LL;
}
