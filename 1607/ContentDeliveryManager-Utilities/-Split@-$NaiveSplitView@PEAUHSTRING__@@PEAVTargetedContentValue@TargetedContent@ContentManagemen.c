/*
 * XREFs of ?Split@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@345@0@Z @ 0x1800507F0
 * Callers:
 *     ?Split@View@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@0@Z @ 0x18004FBD0 (-Split@View@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@.c)
 * Callees:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180051220 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagemen.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Split(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v6; // edi
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rbx
  __int64 v10; // rbx

  *a2 = 0LL;
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 101) )
  {
    v6 = Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Force();
    if ( v6 >= 0 )
    {
      v6 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 64LL) + 12LL) )
      {
        v7 = *(_QWORD *)(a1 + 80);
        v8 = 0;
        if ( v7 )
        {
          if ( *(_BYTE *)(v7 + 101) )
          {
            v8 = *(_DWORD *)(v7 + 96);
          }
          else
          {
            v6 = -2147418113;
            RoOriginateError(2147549183LL, 0LL);
          }
        }
        if ( v6 >= 0 && v8 )
        {
          v9 = *(_QWORD *)(a1 + 72);
          if ( v9 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(a1 + 72));
          *a2 = v9;
          v10 = *(_QWORD *)(a1 + 80);
          if ( v10 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(a1 + 80));
          *a3 = v10;
        }
      }
    }
  }
  else
  {
    v6 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return (unsigned int)v6;
}
