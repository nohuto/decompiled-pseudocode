/*
 * XREFs of ?Initialize@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@345@@Z @ 0x18005187C
 * Callers:
 *     ?Split@View@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@0@Z @ 0x18004FBD0 (-Split@View@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  int v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+60h] [rbp+30h] BYREF
  __int64 v15; // [rsp+68h] [rbp+38h] BYREF

  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
  if ( v4 < 0 )
    goto LABEL_17;
  v15 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_dd1b833f_723d_5fa3_a2d6_43df7a6e41a1,
         &v15);
  if ( v4 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v14);
  }
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v9 = v14;
  }
  else
  {
    v8 = v13;
    v9 = v14;
    if ( *(_QWORD *)(a1 + 88) != v14 )
    {
      v10 = v14;
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        v9 = v14;
      }
      v11 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v10;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v9 = v14;
      }
    }
    *(_DWORD *)(a1 + 96) = v8;
    *(_BYTE *)(a1 + 101) = 1;
    v4 = 0;
  }
  if ( v9 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}
