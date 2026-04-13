/*
 * XREFs of ??1?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@QEAA@XZ @ 0x180036FEC
 * Callers:
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$13 @ 0x18005B49E (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B49E.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$14 @ 0x18005B4AA (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B4AA.c)
 *     _std::unordered_map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue__std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_______::operator[]_::_1_::dtor$0 @ 0x18005B64D (_std--unordered_map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--alloc.c)
 *     _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const_____ptr64__FILETIME__::_1_::dtor$1 @ 0x18005B839 (_std--make_shared_ContentManagement--TargetedContent--Internal--SubscriptionManager_ea_18005B839.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::~shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>(
        __int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *(volatile signed __int32 **)(a1 + 8);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  return result;
}
