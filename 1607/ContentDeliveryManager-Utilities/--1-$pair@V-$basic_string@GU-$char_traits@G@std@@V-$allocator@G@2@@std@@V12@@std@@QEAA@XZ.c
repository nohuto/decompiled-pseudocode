/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18003348C
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$12 @ 0x18005B20E (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$8 @ 0x18005B462 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B462.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<std::wstring,std::wstring>::~pair<std::wstring,std::wstring>(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 56) >= 8uLL )
    operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
}
