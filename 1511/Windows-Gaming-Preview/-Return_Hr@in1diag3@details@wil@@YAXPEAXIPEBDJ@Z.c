/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800079B4
 * Callers:
 *     _lambda_96d0bed5b180209255fc5fd7d24cbe07_::operator() @ 0x180022238 (_lambda_96d0bed5b180209255fc5fd7d24cbe07_--operator().c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::catch$0 @ 0x180027293 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--catch$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::catch$0 @ 0x180027581 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027581.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008A54 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, a2, a3, 0LL, 0LL, retaddr, 1, (_DWORD)a4);
}
