/*
 * XREFs of ?NewNode@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@AEAAJAEBQEAUHSTRING__@@IIPEAPEAVCNode@12@@Z @ 0x180052A84
 * Callers:
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@2@PEAPEAUTXPOSITION@2@@Z @ 0x18004FD38 (-SetAt@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Conten.c)
 * Callees:
 *     ?Rehash@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@QEAAJI@Z @ 0x1800528FC (-Rehash@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Conte.c)
 *     ?PickSize@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@@4@@XWinRT@@AEBAI_K@Z @ 0x180052A00 (-PickSize@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UITargetedContentValue@TargetedContent@Con.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::NewNode(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  __int64 v6; // rbp
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 result; // rax
  int v13; // edx
  _QWORD *i; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax

  v6 = a3;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v9 = 40LL * *(unsigned int *)(a1 + 60);
    if ( is_mul_ok(*(unsigned int *)(a1 + 60), 0x28uLL) && v9 + 8 >= v9 )
    {
      v10 = malloc(v9 + 8);
      v11 = v10;
      if ( !v10 )
        return 2147942414LL;
      *v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v10;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
      return 2147942414LL;
    v13 = *(_DWORD *)(a1 + 60);
    for ( i = &v11[4 * (v13 - 1) + 1 + (unsigned int)(v13 - 1)]; --v13 >= 0; i -= 5 )
    {
      i[3] = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = i;
    }
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( !v15 )
    return 2147549183LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v15 + 24);
  *(_QWORD *)v15 = *a2;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_BYTE *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 32) = a4;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v15 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = v15;
  v16 = *(_QWORD *)(a1 + 16);
  if ( v16 <= *(_QWORD *)(a1 + 40)
    || *(_DWORD *)(a1 + 56)
    || (v17 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::PickSize(
                a1,
                v16),
        result = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<ContentManagement::TargetedContent::ITargetedContentValue>>>::Rehash(
                   a1,
                   v17),
        (int)result >= 0) )
  {
    *a5 = v15;
    return 0LL;
  }
  return result;
}
