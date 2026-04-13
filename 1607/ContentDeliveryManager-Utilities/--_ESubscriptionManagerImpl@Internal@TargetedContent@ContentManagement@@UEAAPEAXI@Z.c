/*
 * XREFs of ??_ESubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x180039700
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@@Z @ 0x180038098 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::`vector deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        char a2)
{
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 10);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 10) + 8LL) = *((_QWORD *)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  if ( v6 != *((_QWORD **)this + 10) )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::_Freenode(
        (__int64)v4,
        (__int64)v6);
      v6 = v7;
    }
    while ( v7 != *((_QWORD **)this + 10) );
  }
  operator delete(*((void **)this + 10));
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  if ( v8 )
    (**v8)(v8, 1LL);
  v9 = *((_QWORD *)this + 7);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v9));
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
