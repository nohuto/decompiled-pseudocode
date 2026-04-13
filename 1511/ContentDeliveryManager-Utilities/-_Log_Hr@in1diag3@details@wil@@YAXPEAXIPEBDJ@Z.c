/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000839C
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     _lambda_4b060b54f37235af20e8475ff87a5fa2_::operator() @ 0x18000EF94 (_lambda_4b060b54f37235af20e8475ff87a5fa2_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180010514 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002514 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    a2,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    0LL,
    0LL,
    retaddr,
    3,
    (unsigned int)a4);
}
