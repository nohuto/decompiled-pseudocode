/*
 * XREFs of ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::catch$0 @ 0x18005BD19 (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAndQueueRetryIfApp_ea_18005BD19.c)
 *     __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$1 @ 0x18005BE05 (__lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_--operator()_--_1_--catch$1.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000401C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003EA2C (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAA.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 *     ?Stop@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180041E30 (-Stop@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAA.c)
 *     ??$Start@PEBGAEAIAEB_N@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@$$QEAPEBGAEAIAEB_N@Z @ 0x18004358C (--$Start@PEBGAEAIAEB_N@QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 *     ??$AsWeak@VSubscriptionImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJPEAVSubscriptionImpl@TargetedContent@ContentManagement@@PEAVWeakRef@01@@Z @ 0x180043660 (--$AsWeak@VSubscriptionImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@YAJPEAVSubscripti.c)
 *     ??$WrapWithTask@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Z @ 0x180044318 (--$WrapWithTask@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     pow_0 @ 0x1800597A6 (pow_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock(
        ContentManagement::TargetedContent::SubscriptionImpl *this)
{
  __int64 *v2; // rsi
  __int64 v3; // rcx
  unsigned int v4; // r15d
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct Windows::Internal::IComPoolTask *v8; // rdi
  DWORD CurrentThreadId; // eax
  int v10; // edi
  PCWSTR v11; // rcx
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  ContentManagement::TargetedContent::SubscriptionImpl *v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  _QWORD v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v16 = -2LL;
  v2 = (__int64 *)((char *)this + 160);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = 60000 * (int)pow_0(2.0, (double)*((int *)this + 42));
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 9), 0LL);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::Start<unsigned short const *,unsigned int &,bool const &>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity *)v17);
  if ( v4 <= 0x5265C00 )
  {
    v13 = 0LL;
    v5 = Microsoft::WRL::AsWeak<ContentManagement::TargetedContent::SubscriptionImpl>(this, &v13);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v14 = this;
    v6 = v13;
    v15 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v7 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = *(struct Windows::Internal::IComPoolTask **)Windows::Internal::ComTaskPool::WrapWithTask<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>(
                                                       &StringRawBuffer,
                                                       &v14);
    CurrentThreadId = GetCurrentThreadId();
    v10 = Windows::Internal::ComTaskPool::RunTask(0, 0, CurrentThreadId, v4, v8, v2);
    v11 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      StringRawBuffer = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1C7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
        (const char *)(unsigned int)v10);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  v17[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
}
