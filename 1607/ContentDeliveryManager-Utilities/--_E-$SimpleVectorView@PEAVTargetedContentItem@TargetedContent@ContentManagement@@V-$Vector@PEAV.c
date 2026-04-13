/*
 * XREFs of ??_E?$SimpleVectorView@PEAVTargetedContentItem@TargetedContent@ContentManagement@@V?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x180014500
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,XWinRT::IntVersionTag,1>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = a1[8];
  if ( v4 )
  {
    a1[8] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[7];
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v5));
  v6 = a1[5];
  if ( v6 )
  {
    a1[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
