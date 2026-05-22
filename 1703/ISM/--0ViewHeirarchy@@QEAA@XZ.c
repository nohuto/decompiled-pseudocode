/*
 * XREFs of ??0ViewHeirarchy@@QEAA@XZ @ 0x18006E95C
 * Callers:
 *     ??$MakeAndInitialize@VViewHeirarchy@@UIViewHeirarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHeirarchy@@@Z @ 0x18006E888 (--$MakeAndInitialize@VViewHeirarchy@@UIViewHeirarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000A980 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@st.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
ViewHeirarchy *__fastcall ViewHeirarchy::ViewHeirarchy(ViewHeirarchy *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *((_DWORD *)this + 7) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyListener,IMessageListListener,IViewHeirarchy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyListener,IMessageListListener,IViewHeirarchy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageProxyListener,IMessageListListener,IViewHeirarchy,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IViewHeirarchy,Microsoft::WRL::Details::Nil>,1,0>'};
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewHeirarchy::`vftable';
  *((_QWORD *)this + 1) = &ViewHeirarchy::`vftable'{for `IMessageListListener'};
  *((_QWORD *)this + 2) = &ViewHeirarchy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IViewHeirarchy,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>>::_Buynode0(
                             (__int64)v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 20) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    (_QWORD *)this + 10,
    8LL);
  return this;
}
