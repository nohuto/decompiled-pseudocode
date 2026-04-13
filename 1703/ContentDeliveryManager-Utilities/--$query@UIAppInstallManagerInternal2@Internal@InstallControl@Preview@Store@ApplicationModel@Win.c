/*
 * XREFs of ??$query@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$com_ptr_t@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180057AD4
 * Callers:
 *     ?InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z @ 0x180056C08 (-InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager,wil::err_exception_policy>::query<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_b527c122_ff18_462f_9ce6_1b3c6ad37793, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180057B21LL);
  }
  return a2;
}
