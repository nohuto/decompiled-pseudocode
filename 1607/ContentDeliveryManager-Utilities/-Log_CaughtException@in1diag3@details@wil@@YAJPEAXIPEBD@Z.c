/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180032860
 * Callers:
 *     __lambda_65e132131f351cb9064538b793e0e588_::operator()_::_1_::catch$0 @ 0x18005B392 (__lambda_65e132131f351cb9064538b793e0e588_--operator()_--_1_--catch$0.c)
 *     _ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::catch$0 @ 0x18005BC7A (_ContentManagement--TargetedContent--SubscriptionImpl--_SubscriptionImpl_--_1_--catch$0.c)
 *     __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$1 @ 0x18005BE05 (__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator()_--_1_--catch$1.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800186A0 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
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
