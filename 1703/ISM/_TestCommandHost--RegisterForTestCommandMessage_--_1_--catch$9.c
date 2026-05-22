/*
 * XREFs of _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$9 @ 0x18009F345
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180009A2C (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall TestCommandHost::RegisterForTestCommandMessage_::_1_::catch_9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(*(wil::details::in1diag3 **)(a2 + 56), (void *)0x3E, a3, a4);
  return &loc_180009B6D;
}
