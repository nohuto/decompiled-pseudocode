/*
 * XREFs of ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006E170
 * Callers:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800071D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18006F408 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_Unexpected(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(this, 1881LL, "internal\\sdk\\inc\\wil\\Result.h", 0LL, 0LL, retaddr, 4, -2147418113);
}
