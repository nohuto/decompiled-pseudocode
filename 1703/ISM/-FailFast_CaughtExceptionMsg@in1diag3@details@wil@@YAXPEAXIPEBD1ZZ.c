/*
 * XREFs of ?FailFast_CaughtExceptionMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x18006EE58
 * Callers:
 *     _ViewHeirarchy::GetAllAncestors_::_1_::catch$155 @ 0x1800A2B0C (_ViewHeirarchy--GetAllAncestors_--_1_--catch$155.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18006ED9C (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 */

void wil::details::in1diag3::FailFast_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        char *a4,
        const char *a5,
        ...)
{
  __int64 v5; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  wil::details::ReportFailure_CaughtExceptionMsg(
    (__int64)this,
    (unsigned int)a2,
    a3,
    a4,
    v5,
    retaddr,
    v6,
    (unsigned __int16 *)a4,
    (va_list)&a5);
}
