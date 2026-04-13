/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVTargetedContentItem@TargetedContent@ContentManagement@@V?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentItem@TargetedContent@ContentManagement@@PEAI@Z @ 0x180013070
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180058F42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  int v9; // ebx
  _DWORD *v10; // r15
  int v11; // eax
  __int64 i; // rbx
  __int64 v13; // rcx

  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 72);
  v10 = *(_DWORD **)(a1 + 64);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v10 + 128LL))(
            v10,
            a2,
            a3,
            a4,
            a5);
    v9 = v11;
    if ( *(_DWORD *)(a1 + 76) != v10[28] )
    {
      *(_DWORD *)(a1 + 72) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( i = 0LL; (unsigned int)i < *a5; i = (unsigned int)(i + 1) )
        {
          v13 = *((_QWORD *)a4 + i);
          if ( v13 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            *((_QWORD *)a4 + i) = 0LL;
          }
          *((_QWORD *)a4 + i) = 0LL;
        }
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
