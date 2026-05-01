/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007AAC
 * Callers:
 *     _lambda_63cb72c57790635ad1abe013bf6503f8_::operator() @ 0x1800224DC (_lambda_63cb72c57790635ad1abe013bf6503f8_--operator().c)
 *     __lambda_1bb9c5925967af19482f691dd21001c0_::operator()_::_1_::catch$0 @ 0x180027451 (__lambda_1bb9c5925967af19482f691dd21001c0_--operator()_--_1_--catch$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::catch$0 @ 0x180027757 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027757.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InvertDesktopPixelData_::_1_::catch$0 @ 0x180027B22 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InvertDesktopPix_ea_180027B22.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008B4C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, a2, a3, 0LL, 0LL, retaddr, 1, (_DWORD)a4);
}
