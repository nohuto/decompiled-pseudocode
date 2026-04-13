/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180038068
 * Callers:
 *     __lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator()_::_1_::catch$3 @ 0x180071E71 (__lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator()_--_1_--catch$3.c)
 *     _CreativeFramework::Actions::IsMsaConnected_::_1_::catch$13 @ 0x18007384F (_CreativeFramework--Actions--IsMsaConnected_--_1_--catch$13.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18001F62C (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3, (__int64)a4, v5, retaddr, 2);
}
