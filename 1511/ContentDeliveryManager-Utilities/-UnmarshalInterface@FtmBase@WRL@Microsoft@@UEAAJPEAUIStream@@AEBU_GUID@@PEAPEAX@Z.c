/*
 * XREFs of ?UnmarshalInterface@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1800028D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::UnmarshalInterface(
        Microsoft::WRL::FtmBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rdi

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v4 + 48LL))(
             *((_QWORD *)this + 2),
             a2,
             a3,
             a4);
  else
    return 2147942414LL;
}
