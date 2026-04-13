/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEB_W@Z @ 0x1800491E4
 * Callers:
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(_QWORD *a1, const WCHAR *a2)
{
  LPCWCH *v4; // rdi
  char *v5; // rdi
  char *v6; // rcx
  _QWORD *v7; // rdx

  v4 = (LPCWCH *)&off_1800F3140;
  while ( CompareStringOrdinal(*v4, -1, a2, -1, 1) != 2 )
  {
    v4 += 5;
    if ( v4 == (LPCWCH *)&unk_1800F31B8 )
    {
      *a1 = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      a1[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
      a1[3] = a1;
      return a1;
    }
  }
  v5 = (char *)(v4 + 1);
  a1[3] = 0LL;
  v6 = (char *)*((_QWORD *)v5 + 3);
  if ( v6 )
  {
    if ( v6 == v5 )
      v7 = a1;
    else
      v7 = 0LL;
    a1[3] = (**(__int64 (__fastcall ***)(char *, _QWORD *))v6)(v6, v7);
  }
  else
  {
    a1[3] = 0LL;
  }
  return a1;
}
