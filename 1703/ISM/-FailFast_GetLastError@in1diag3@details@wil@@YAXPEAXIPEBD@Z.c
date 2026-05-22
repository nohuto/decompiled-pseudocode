/*
 * XREFs of ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180053708
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180053948 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180002FC4 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    (__int64)this,
    0x15BEu,
    (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
    (__int64)a4,
    v4,
    retaddr,
    3u);
}
