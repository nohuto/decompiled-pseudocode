/*
 * XREFs of ??1?$ComPtr@VChunk@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800519E0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentValue_____ptr64__Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__0_1_0___::ChunkView::Initialize_::_1_::dtor$0 @ 0x18005C861 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_______ptr64_Con_ea_18005C861.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>::~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rcx

  v1 = *a1;
  v2 = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      *(_QWORD *)v1 = &Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Chunk::`vftable';
      if ( *((_DWORD *)v1 + 3) )
      {
        do
        {
          v3 = *(_QWORD *)&v1[2 * v2 + 4];
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
          ++v2;
        }
        while ( v2 < *((_DWORD *)v1 + 3) );
      }
      operator delete((void *)v1);
    }
  }
}
