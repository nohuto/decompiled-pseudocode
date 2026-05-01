/*
 * XREFs of ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800079E8
 * Callers:
 *     _wil::ResultFromCaughtException_::_1_::catch$2 @ 0x1800274D6 (_wil--ResultFromCaughtException_--_1_--catch$2.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180008A54 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_FailFast_Hr(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, 2782LL, "internal\\sdk\\inc\\wil\\result.h", 0LL, 0LL, retaddr, 4, (_DWORD)a4);
}
