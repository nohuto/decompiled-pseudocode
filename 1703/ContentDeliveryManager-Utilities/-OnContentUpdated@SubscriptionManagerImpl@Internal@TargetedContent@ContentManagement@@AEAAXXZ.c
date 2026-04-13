/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18003B3F4
 * Callers:
 *     _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator() @ 0x18003A570 (_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--operator().c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002D14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F3C (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180022D3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x18002BE9C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180038030 (-Return_HrMsg_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x1800387AC (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180038C10 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180038FF4 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18003B7C8 (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18003BCD4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     ??$Start@$$V@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SA?AV0123@XZ @ 0x18003E15C (--$Start@$$V@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgroun.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
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
  int v13; // r14d
  LSTATUS ValueW; // eax
  signed int v15; // ebx
  const WCHAR **v16; // rdi
  const WCHAR **v17; // r14
  const WCHAR *v18; // rbx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  bool v22; // [rsp+48h] [rbp-C0h]
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-B0h] BYREF
  __int64 pvData; // [rsp+60h] [rbp-A8h] BYREF
  LPCWSTR v26; // [rsp+68h] [rbp-A0h]
  PSRWLOCK v27; // [rsp+70h] [rbp-98h] BYREF
  LPCWSTR lpSubKey[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v29[40]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  lpSubKey[3] = (LPCWSTR)-2LL;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Start<>((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v29);
  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v2 = 0LL;
  v3 = 0;
  wil::srwlock::lock_shared(this + 9, &v27);
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
    v26 = 0LL;
    memset(lpSubKey, 0, 24);
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
            v7);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_42;
    v2 = (RTL_SRWLOCK *)lpSubKey[0];
    v26 = lpSubKey[0];
    v22 = 0;
    v13 = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey[0], L"UpdateDrivenByExpiration", 0x10u, 0LL, &pvData, pcbData);
    v15 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v15 = ValueW;
    if ( v15 >= 0 )
    {
      v13 = pvData;
LABEL_18:
      v15 = 0;
      goto LABEL_19;
    }
    if ( v15 == -2147024894 )
      goto LABEL_18;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x4D,
      (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v15,
      (__int64)"RegKey: %ws %ws",
      (const char *)v2,
      L"UpdateDrivenByExpiration");
LABEL_19:
    if ( v15 >= 0 )
    {
      v22 = v13 != 0;
      v15 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_HrMsg_NoOriginate(
        retaddr,
        (void *)0x116,
        (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
        (const char *)(unsigned int)v15,
        (__int64)"RegKey: %ws %ws",
        (const char *)v2,
        L"UpdateDrivenByExpiration");
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1C1,
        (__int64)"internal\\shell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v15);
LABEL_42:
      wil::details::in1diag3::_Throw_Hr(
        v12,
        (void *)0x8B,
        (__int64)"internal\\shell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v11);
      break;
    }
    if ( v2 )
      CoTaskMemFree(v2);
    v16 = (const WCHAR **)(*v8)[1];
    v17 = (const WCHAR **)(*v8)[2];
    if ( v16 != v17 )
    {
      while ( 1 )
      {
        v18 = *v16;
        v26 = v18;
        if ( v18 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 8LL))(v18);
        v19 = 0LL;
        *(_QWORD *)pcbData = 0LL;
        if ( !v18 )
          goto LABEL_31;
        if ( (*(int (__fastcall **)(const WCHAR *, GUID *, DWORD *))(*(_QWORD *)v18 + 24LL))(
               v18,
               &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
               pcbData) >= 0 )
          break;
LABEL_34:
        v21 = *(_QWORD *)pcbData;
        if ( *(_QWORD *)pcbData )
        {
          *(_QWORD *)pcbData = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        if ( v18 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v18 + 16LL))(v18);
        if ( ++v16 == v17 )
          goto LABEL_39;
      }
      v19 = *(_QWORD *)pcbData;
LABEL_31:
      LOBYTE(v4) = v22;
      v20 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *))(*(_QWORD *)v19 + 48LL))(v19, v4);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
          (const char *)(unsigned int)v20);
      ++v3;
      goto LABEL_34;
    }
LABEL_39:
    v2 = SRWLock;
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v29,
    (int)v2,
    v3);
  if ( v27 )
    ReleaseSRWLockShared(v27);
  v29[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
}
