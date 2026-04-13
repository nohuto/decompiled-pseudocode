/*
 * XREFs of _ContentManagement::TargetedContent::TryReportInteraction_::_1_::catch$0 @ 0x18005C372
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x1800535B0 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ContentManagement::TargetedContent::TryReportInteraction_::_1_::catch_0(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-10h]

  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 552),
    (void *)0xC3,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
    "Failure reporting subscribed content interaction",
    v3);
  return &loc_180049606;
}
