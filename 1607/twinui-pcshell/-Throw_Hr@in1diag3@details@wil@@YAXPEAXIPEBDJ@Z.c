/*
 * XREFs of ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002EB8
 * Callers:
 *     ?_com_issue_error@@YAXJ@Z @ 0x180003D64 (-_com_issue_error@@YAXJ@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002BFC (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::Throw_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    0x13u,
    (__int64)"pcshell\\twinui\\dll\\twinui.cpp",
    0LL,
    0LL,
    retaddr,
    0,
    (unsigned int)a4);
}
