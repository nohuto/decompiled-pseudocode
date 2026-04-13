/*
 * XREFs of ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800380FC
 * Callers:
 *     ??0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@PEBGU_FILETIME@@@Z @ 0x18003A1C0 (--0SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA.c)
 * Callees:
 *     ?ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z @ 0x180002A84 (-ReportFailure_GetLastError@details@wil@@YAKPEAXIPEBD110W4FailureType@2@@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_GetLastError(
    (__int64)this,
    0x14Fu,
    (__int64)"internal\\shell\\inc\\subscribedcontentstore.h",
    (__int64)a4,
    v4,
    retaddr,
    0);
}
