/*
 * XREFs of __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$0 @ 0x18005BE97
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001870C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 424),
                           (void *)0x1C1,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targeted"
                                    "contentsubscription.cpp",
                           a4);
  return &loc_18005BE7C;
}
