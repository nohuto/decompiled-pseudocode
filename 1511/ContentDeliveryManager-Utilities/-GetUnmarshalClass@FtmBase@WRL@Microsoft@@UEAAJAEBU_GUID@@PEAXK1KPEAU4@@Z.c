/*
 * XREFs of ?GetUnmarshalClass@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAU4@@Z @ 0x180002720
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::GetUnmarshalClass(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  __int64 v7; // rdi

  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, struct _GUID *))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
