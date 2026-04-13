/*
 * XREFs of ??_ETargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180043280
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011AB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x18003D668 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocat_ea_18003D668.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::`vector deleting destructor'(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        char a2)
{
  _QWORD *v2; // rbx
  void *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = (_QWORD *)((char *)this + 80);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    (__int64)this + 80,
    *(__int64 **)(*((_QWORD *)this + 10) + 8LL));
  *(_QWORD *)(*v2 + 8LL) = *v2;
  *(_QWORD *)*v2 = *v2;
  *(_QWORD *)(*v2 + 16LL) = *v2;
  v5 = (void *)*v2;
  v2[1] = 0LL;
  operator delete(v5);
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v7));
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
