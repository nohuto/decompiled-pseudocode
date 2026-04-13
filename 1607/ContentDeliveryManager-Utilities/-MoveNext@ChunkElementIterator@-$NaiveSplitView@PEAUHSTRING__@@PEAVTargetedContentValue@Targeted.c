/*
 * XREFs of ?MoveNext@ChunkElementIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800517C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkElementIterator::MoveNext(
        __int64 a1,
        bool *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // eax

  v2 = 0;
  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_DWORD *)(a1 + 64);
  if ( v4 >= *(_DWORD *)(v3 + 12) )
  {
    v2 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
  }
  else
  {
    v5 = v4 + 1;
    *(_DWORD *)(a1 + 64) = v5;
    *a2 = v5 < *(_DWORD *)(v3 + 12);
  }
  return v2;
}
