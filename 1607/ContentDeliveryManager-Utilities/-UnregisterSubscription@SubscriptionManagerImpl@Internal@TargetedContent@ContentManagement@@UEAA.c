/*
 * XREFs of ?UnregisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@@Z @ 0x1800358C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x180028718 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180036CE0 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180036E70 (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800370D8 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::UnregisterSubscription(
        RTL_SRWLOCK *this,
        HSTRING a2,
        struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *a3)
{
  char *StringRawBuffer; // rax
  char v7; // r14
  unsigned __int64 v8; // r8
  RTL_SRWLOCK *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 *v12; // rbx
  __int64 *v13; // rdi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v14; // rcx
  int v15; // eax
  char v16; // si
  __int64 *i; // rsi
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v18; // rcx
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  const char *v23; // r9
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v25; // [rsp+20h] [rbp-78h] BYREF
  struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *v26; // [rsp+28h] [rbp-70h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v28[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h]
  void *v30[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v31; // [rsp+58h] [rbp-40h]
  unsigned __int64 v32; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v29 = -2LL;
  try
  {
    wil::srwlock::lock_exclusive(this + 9, &SRWLock);
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
    v32 = 7LL;
    v7 = 0;
    v31 = 0LL;
    LOWORD(v30[0]) = 0;
    if ( *(_WORD *)StringRawBuffer )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&StringRawBuffer[2 * v8] );
    }
    else
    {
      v8 = 0LL;
    }
    std::wstring::assign(v30, StringRawBuffer, v8);
    v9 = this + 10;
    v10 = std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
            &this[10],
            v30);
    v11 = *(_QWORD *)v10;
    v12 = *(__int64 **)(*(_QWORD *)v10 + 16LL);
    v13 = *(__int64 **)(*(_QWORD *)v10 + 8LL);
    if ( v13 != v12 )
    {
      do
      {
        v14 = 0LL;
        v25 = 0LL;
        if ( *v13
          && (v15 = (*(__int64 (__fastcall **)(__int64, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(*(_QWORD *)*v13 + 24LL))(
                      *v13,
                      &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                      &v25),
              v14 = v25,
              v15 < 0)
          || (v16 = 1, a3 != v14) )
        {
          v16 = 0;
        }
        if ( v14 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( v16 )
          break;
        ++v13;
      }
      while ( v13 != v12 );
      if ( v13 != v12 )
      {
        for ( i = v13 + 1; i != v12; ++i )
        {
          v18 = 0LL;
          v26 = 0LL;
          if ( !*i
            || (v19 = (*(__int64 (__fastcall **)(__int64, GUID *, struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv **))(*(_QWORD *)*i + 24LL))(
                        *i,
                        &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                        &v26),
                v18 = v26,
                v19 >= 0) )
          {
            if ( a3 == v18 )
              v7 = 1;
          }
          if ( v18 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(struct ContentManagement::TargetedContent::Internal::ISubscriptionPriv *))(*(_QWORD *)v18 + 16LL))(v18);
          }
          if ( v7 )
          {
            v7 = 0;
          }
          else
          {
            v20 = v13++;
            v7 = 0;
            v21 = 0LL;
            if ( v28 != (_BYTE *)i )
            {
              v21 = *i;
              *i = 0LL;
            }
            v22 = *v20;
            *v20 = v21;
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
    }
    std::vector<Microsoft::WRL::WeakRef>::erase(v11 + 8, v28, v13, v12);
    if ( ((*(_QWORD *)(v11 + 16) - *(_QWORD *)(v11 + 8)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v9,
        v30);
    if ( v32 >= 8 )
      operator delete(v30[0]);
    v32 = 7LL;
    v31 = 0LL;
    LOWORD(v30[0]) = 0;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x99,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
                           v23);
  }
  return 0LL;
}
