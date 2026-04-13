/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180035C78
 * Callers:
 *     _lambda_e6eb226b317cc1f73aeda6968dc9daf6_::operator() @ 0x180034DD0 (_lambda_e6eb226b317cc1f73aeda6968dc9daf6_--operator().c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002C2C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E28 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180024744 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180032D90 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXII@Z @ 0x18003446C (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800348C0 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18003606C (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800365A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ??$Start@$$V@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@XZ @ 0x180038994 (--$Start@$$V@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  int v3; // r13d
  const unsigned __int16 *v4; // rdx
  _QWORD *Ptr; // r15
  _QWORD *i; // rsi
  CreativeFramework::SubscribedContentStore **v7; // rbx
  struct _FILETIME **v8; // r12
  CreativeFramework::SubscribedContentStore *v9; // rcx
  unsigned __int64 SubscriptionLastUpdated; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  char *v13; // r14
  LSTATUS ValueW; // eax
  signed int v15; // ebx
  const WCHAR **v17; // rdi
  const WCHAR **v18; // r14
  const WCHAR *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  bool v23; // [rsp+48h] [rbp-C0h]
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-B0h] BYREF
  __int64 pvData; // [rsp+60h] [rbp-A8h] BYREF
  LPCWSTR v27; // [rsp+68h] [rbp-A0h]
  PSRWLOCK v28; // [rsp+70h] [rbp-98h] BYREF
  LPCWSTR lpSubKey[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  lpSubKey[3] = (LPCWSTR)-2LL;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Start<>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v30);
  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v2 = 0LL;
  v3 = 0;
  wil::srwlock::lock_shared(this + 9, &v28);
  Ptr = this[10].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v7 = (CreativeFramework::SubscribedContentStore **)(i + 2);
    v8 = (struct _FILETIME **)(i + 6);
    v2 = (RTL_SRWLOCK *)((char *)v2 + ((__int64)(*(_QWORD *)(i[6] + 16LL) - *(_QWORD *)(i[6] + 8LL)) >> 3));
    SRWLock = v2;
    if ( i[5] < 8uLL )
      v9 = (CreativeFramework::SubscribedContentStore *)(i + 2);
    else
      v9 = *v7;
    SubscriptionLastUpdated = (unsigned __int64)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                  v9,
                                                  v4);
    v4 = (const unsigned __int16 *)((*v8)[4].dwLowDateTime + ((unsigned __int64)(*v8)[4].dwHighDateTime << 32));
    if ( (unsigned int)SubscriptionLastUpdated + (HIDWORD(SubscriptionLastUpdated) << 32) <= (unsigned __int64)v4 )
      continue;
    (*v8)[4] = (struct _FILETIME)SubscriptionLastUpdated;
    if ( i[5] >= 8uLL )
      v7 = (CreativeFramework::SubscribedContentStore **)*v7;
    v27 = 0LL;
    memset(lpSubKey, 0, 24);
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
            v7);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_47;
    v13 = (char *)lpSubKey[0];
    v27 = lpSubKey[0];
    v23 = 0;
    LODWORD(v2) = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey[0], L"UpdateDrivenByExpiration", 0x10u, 0LL, &pvData, pcbData);
    v15 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v15 = ValueW;
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -2147024894 )
    {
      if ( v15 >= 0 )
        LODWORD(v2) = pvData;
      v15 = 0;
    }
    else
    {
      if ( v15 >= 0 )
        goto LABEL_26;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x48,
        (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v15,
        (__int64)"RegKey: %ws %ws",
        v13,
        L"UpdateDrivenByExpiration");
    }
    if ( v15 >= 0 )
    {
LABEL_26:
      v23 = (_DWORD)v2 != 0;
      v15 = 0;
      goto LABEL_27;
    }
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x111,
      (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v15,
      (__int64)"RegKey: %ws %ws",
      v13,
      L"UpdateDrivenByExpiration");
LABEL_27:
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v15);
LABEL_47:
      wil::details::in1diag3::_Throw_Hr(
        v12,
        (void *)0x54,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v11);
      break;
    }
    if ( v13 )
      CoTaskMemFree(v13);
    v17 = (const WCHAR **)(*v8)[1];
    v18 = (const WCHAR **)(*v8)[2];
    if ( v17 != v18 )
    {
      while ( 1 )
      {
        v19 = *v17;
        v27 = v19;
        if ( v19 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v19 + 8LL))(v19);
        v20 = 0LL;
        *(_QWORD *)pcbData = 0LL;
        if ( !v19 )
          goto LABEL_36;
        if ( (*(int (__fastcall **)(const WCHAR *, GUID *, DWORD *))(*(_QWORD *)v19 + 24LL))(
               v19,
               &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
               pcbData) >= 0 )
          break;
LABEL_39:
        v22 = *(_QWORD *)pcbData;
        if ( *(_QWORD *)pcbData )
        {
          *(_QWORD *)pcbData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        if ( v19 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v19 + 16LL))(v19);
        if ( ++v17 == v18 )
          goto LABEL_44;
      }
      v20 = *(_QWORD *)pcbData;
LABEL_36:
      LOBYTE(v4) = v23;
      v21 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v20 + 48LL))(v20, v4);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v21);
      ++v3;
      goto LABEL_39;
    }
LABEL_44:
    v2 = SRWLock;
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v30,
    (int)v2,
    v3);
  if ( v28 )
    ReleaseSRWLockShared(v28);
  v30[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v30);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v30);
}
