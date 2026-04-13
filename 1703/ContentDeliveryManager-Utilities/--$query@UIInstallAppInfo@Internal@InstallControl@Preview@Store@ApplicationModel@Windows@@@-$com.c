/*
 * XREFs of ??$query@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180057FC4
 * Callers:
 *     ??$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18005784C (--$ActivateInstance@UIInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Wind.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IInstallAppInfo>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_2b7a9a4b_b688_42bc_8b8e_b3439137d20e, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180058011LL);
  }
  return a2;
}
