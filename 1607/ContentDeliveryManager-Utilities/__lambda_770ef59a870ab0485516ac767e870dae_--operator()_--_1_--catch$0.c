/*
 * XREFs of __lambda_770ef59a870ab0485516ac767e870dae_::operator()_::_1_::catch$0 @ 0x18005BF69
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001870C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_770ef59a870ab0485516ac767e870dae_::operator()_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0x23C,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targeted"
                                    "contentsubscription.cpp",
                           a4);
  return &loc_180041279;
}
