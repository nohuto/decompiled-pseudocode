/*
 * XREFs of ?get_Size@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180051040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
  return result;
}
