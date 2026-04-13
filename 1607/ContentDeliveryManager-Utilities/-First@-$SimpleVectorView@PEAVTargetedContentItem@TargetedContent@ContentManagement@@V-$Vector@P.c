/*
 * XREFs of ?First@?$SimpleVectorView@PEAVTargetedContentItem@TargetedContent@ContentManagement@@V?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@345@@Z @ 0x18004FE80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_be8b4504218368a8128c336e414a5d0a_::operator() @ 0x18004FF30 (_lambda_be8b4504218368a8128c336e414a5d0a_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,XWinRT::IntVersionTag,1>::First(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  v2 = a1 - 16;
  v3 = *(_DWORD *)(a1 - 16 + 72);
  v4 = *(_QWORD *)(a1 - 16 + 64);
  v8[0] = a1 - 16;
  v8[1] = &v9;
  if ( v3 >= 0 )
  {
    v5 = lambda_be8b4504218368a8128c336e414a5d0a_::operator()(v8);
    v3 = v5;
    if ( *(_DWORD *)(v2 + 76) != *(_DWORD *)(v4 + 112) )
    {
      *(_DWORD *)(v2 + 72) = -2147483636;
      if ( v5 < 0 )
      {
        RoTransformError((unsigned int)v5, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v6 = *v9;
        *v9 = 0LL;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
