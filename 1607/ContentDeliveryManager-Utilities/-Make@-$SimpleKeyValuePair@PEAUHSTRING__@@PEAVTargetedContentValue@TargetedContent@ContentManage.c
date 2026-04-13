/*
 * XREFs of ?Make@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@SAJAEBQEAUHSTRING__@@AEBV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@XWinRT@@PEAPEAV12345@@Z @ 0x18004EFA4
 * Callers:
 *     ?GetMany@Iterator@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJIQEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@PEAI@Z @ 0x18004E320 (-GetMany@Iterator@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManag.c)
 *     ?get_Current@Iterator@?$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@456@@Z @ 0x18004E5E0 (-get_Current@Iterator@-$HashMap@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentM.c)
 * Callees:
 *     ??$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentValue@TargetedContent@ContentManagement@@@detail@1@@Z @ 0x180013180 (--$Destroy@UITargetedContentValue@TargetedContent@ContentManagement@@@InterfaceLifetimeTraits@XW.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004ED70 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValu.c)
 *     ??$Make@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@@12@$$QEAUpermission@?$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@$00@Internal@Collections@Foundation@Windows@@@Z @ 0x18005048C (--$Make@V-$SimpleKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentMan.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>::Make(
        HSTRING *a1,
        __m128i *a2,
        _QWORD *a3)
{
  __int64 v6; // rbx
  HRESULT v7; // edi
  HSTRING v8; // rax
  HSTRING v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __m128i v14; // [rsp+40h] [rbp-10h]
  HSTRING newString; // [rsp+90h] [rbp+40h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>,Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::TargetedContent::TargetedContentValue *>,1>::permission>(&v16);
  v6 = v16;
  if ( v16 )
  {
    v7 = WindowsDuplicateString(*a1, &newString);
    v8 = newString;
    if ( v7 < 0 )
      v8 = 0LL;
    newString = v8;
    if ( v7 >= 0 )
    {
      v14 = *a2;
      BYTE8(v13) = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
      if ( BYTE8(v13) )
      {
        *(_QWORD *)&v13 = v14.m128i_i64[0];
        _InterlockedIncrement((volatile signed __int32 *)v14.m128i_i64[0]);
        v6 = v16;
      }
      else
      {
        *(_QWORD *)&v13 = v14.m128i_i64[0];
        if ( v14.m128i_i64[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14.m128i_i64[0] + 8LL))(v14.m128i_i64[0]);
      }
      v7 = 0;
      v9 = *(HSTRING *)(v6 + 56);
      *(_QWORD *)(v6 + 56) = newString;
      newString = v9;
      v10 = *(_OWORD *)(v6 + 64);
      *(_OWORD *)(v6 + 64) = v13;
      v13 = v10;
      XWinRT::InterfaceLifetimeTraits::Destroy<ContentManagement::TargetedContent::ITargetedContentValue>((__int64)&v13);
    }
    WindowsDeleteString(newString);
    if ( v7 >= 0 )
    {
      v11 = v6;
      v6 = 0LL;
      *a3 = v11;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,ContentManagement::TargetedContent::TargetedContentValue *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release((volatile signed __int64 *)v6);
  return (unsigned int)v7;
}
