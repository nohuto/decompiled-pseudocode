/*
 * XREFs of ?ReleaseMarshalData@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@@Z @ 0x180002950
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
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
