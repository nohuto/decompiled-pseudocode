/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAVTargetedContentItem@TargetedContent@ContentManagement@@V?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAIPEAE@Z @ 0x180012FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  _DWORD *v8; // r15
  int v9; // eax

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 72);
  v8 = *(_DWORD **)(a1 + 64);
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 72LL))(*(_QWORD *)(a1 + 64));
    v6 = v9;
    if ( *(_DWORD *)(a1 + 76) != v8[28] )
    {
      *(_DWORD *)(a1 + 72) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
