/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@QEAA@XZ @ 0x18003783C
 * Callers:
 *     _std::unordered_map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue__std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_______::operator[]_::_1_::dtor$1 @ 0x18005B659 (_std--unordered_map_std--basic_string_unsigned_short_std--char_traits_unsigned_shor_ea_18005B659.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::pair<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::~pair<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rdi

  v1 = *(volatile signed __int32 **)(a1 + 40);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
}
