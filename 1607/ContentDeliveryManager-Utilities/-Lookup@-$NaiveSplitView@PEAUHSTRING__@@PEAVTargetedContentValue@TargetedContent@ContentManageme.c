/*
 * XREFs of ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITargetedContentValue@TargetedContent@ContentManagement@@@Z @ 0x1800509D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUITargetedContentValue@TargetedContent@ContentManagement@@@Z @ 0x180051060 (-Lookup@ChunkView@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Conte.c)
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180051220 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagemen.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  char v8; // si
  int v9; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  v11 = a2;
  v4 = a1;
  v10 = 0LL;
  if ( *(_BYTE *)(a1 + 101) )
  {
    v8 = 0;
    v5 = 0;
    while ( !v8 )
    {
      if ( !v4 || !*(_DWORD *)(v4 + 96) )
      {
        v5 = -2147483637;
        break;
      }
      v5 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Force(v4);
      if ( v5 < 0 )
        break;
      v8 = 0;
      v9 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Lookup(
             *(_QWORD *)(v4 + 72),
             v11,
             &v10);
      v5 = v9;
      if ( v9 < 0 )
      {
        if ( v9 == -2147483637 )
          v5 = 0;
      }
      else
      {
        v8 = 1;
      }
      if ( v5 < 0 )
        goto LABEL_3;
      v4 = *(_QWORD *)(v4 + 80);
    }
    if ( v5 >= 0 )
    {
      *a3 = v10;
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
LABEL_3:
  v6 = v10;
  *a3 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}
