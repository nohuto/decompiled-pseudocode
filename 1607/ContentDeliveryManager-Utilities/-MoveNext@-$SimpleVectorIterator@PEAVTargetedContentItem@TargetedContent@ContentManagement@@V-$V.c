/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVTargetedContentItem@TargetedContent@ContentManagement@@V?$Vector@PEAVTargetedContentItem@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@U?$VectorOptions@PEAVTargetedContentItem@TargetedContent@ContentManagement@@$0A@$00$0A@@5678@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentItem@TargetedContent@ContentManagement@@@5678@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180012AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::Vector<ContentManagement::TargetedContent::TargetedContentItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::TargetedContent::TargetedContentItem *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentItem *>,XWinRT::IntVersionTag,1>::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned __int32 v5; // r8d
  bool v6; // zf
  signed __int32 v7; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a1 + 56);
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 64);
    while ( 1 )
    {
      *a2 = 0;
      if ( v5 >= *(_DWORD *)(a1 + 68) )
        break;
      v3 = 0;
      *a2 = v5 + 1 < *(_DWORD *)(a1 + 68);
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v5 + 1, v5);
      v6 = v5 == v7;
      v5 = v7;
      if ( v6 )
        goto LABEL_8;
      *a2 = 0;
    }
    v3 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
LABEL_8:
    if ( *(_DWORD *)(a1 + 76) != *(_DWORD *)(v4 + 112) )
    {
      *(_DWORD *)(a1 + 72) = -2147483636;
      if ( v3 < 0 )
      {
        RoTransformError((unsigned int)v3, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a2 = 0;
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
