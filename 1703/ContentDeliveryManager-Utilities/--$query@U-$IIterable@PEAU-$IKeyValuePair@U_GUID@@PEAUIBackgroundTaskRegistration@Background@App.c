/*
 * XREFs of ??$query@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800690C4
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_0a057cecd063e9fd0dcc901606d00cc2___ @ 0x18006864C (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_0a057cecd063e9fd0dcc901606d00c.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae80___ @ 0x180068AEC (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_f56adf79d146d9a4fc4e45ef3be9ae.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Foundation::Collections::IMapView<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>>(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_80fb0327_5a00_55cc_85db_a852719981b9, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15CA,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180069111LL);
  }
  return a2;
}
