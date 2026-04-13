/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784
 * Callers:
 *     _lambda_3824f3ba179c9c834d671447a577c27a_::operator() @ 0x18001FDE8 (_lambda_3824f3ba179c9c834d671447a577c27a_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180021380 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ??$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@YAJPEBGPEAUICreativeEventReportedCache@0@PEAUHSTRING__@@W4CreativeEventType@0@2$$QEAV_lambda_3824f3ba179c9c834d671447a577c27a_@@@Z @ 0x180029BA4 (--$ExecuteHandlerByEventPolicy@V_lambda_3824f3ba179c9c834d671447a577c27a_@@@ContentManagement@@Y.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180035C78 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ??1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ @ 0x18003F988 (--1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 *     ?Invoke@?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@UEAAJXZ @ 0x180043EC0 (-Invoke@-$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800029E8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
