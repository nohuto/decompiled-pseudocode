/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009A2C
 * Callers:
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$9 @ 0x18009F345 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$9.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x18009F3D3 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800099C4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException(
           (__int64)this,
           (unsigned int)a2,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
           (__int64)a4,
           v5,
           retaddr,
           2);
}
