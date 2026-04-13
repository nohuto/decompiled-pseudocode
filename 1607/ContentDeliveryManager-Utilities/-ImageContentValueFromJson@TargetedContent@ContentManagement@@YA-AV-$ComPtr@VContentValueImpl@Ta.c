/*
 * XREFs of ?ImageContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B248
 * Callers:
 *     ?MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B588 (-MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImp.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003A1C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIThumbnailCacheHelper@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFA0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIThumbnailCach.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?GetStreamRefFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIRandomAccessStreamReference@Streams@Storage@Windows@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAUHSTRING__@@PEAI@Z @ 0x18004AE1C (-GetStreamRefFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIRandomAccessStreamRefer.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BFA0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_18004BFA0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C0B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_18004C0B0.c)
 *     ??0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180050564 (--0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall ContentManagement::TargetedContent::ImageContentValueFromJson(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // r12d
  int v12; // r13d
  __int64 v13; // rdi
  char *v14; // rax
  char *v15; // rbx
  int v16; // esi
  int v17; // edi
  _QWORD *v18; // r15
  __int64 v19; // rcx
  void *v20; // rdi
  ContentManagement::TargetedContent::ContentValueImpl *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  void *v24; // rcx
  __int64 v25; // rcx
  void *v27; // [rsp+28h] [rbp-79h] BYREF
  int v28; // [rsp+30h] [rbp-71h]
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  double v30; // [rsp+40h] [rbp-61h] BYREF
  double v31[3]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v33[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v34[32]; // [rsp+A0h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v31[1] = NAN;
  *(_QWORD *)&v31[2] = a1;
  v28 = 0;
  v6 = (__int64 *)Windows::Internal::StringReference::StringReference((__int64)v32, (const WCHAR **)off_18006EAB0);
  ContentManagement::TargetedContent::GetStreamRefFromJson((HSTRING)&v29, a2, *v6, a3);
  v7 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v33, (const WCHAR **)off_18006EAA0);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)a2 + 88LL))(a2, *v7, v31);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1E1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)v34, (const WCHAR **)off_18006EA90);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, double *))(*(_QWORD *)a2 + 88LL))(a2, *v9, &v30);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1E3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v10);
  v11 = (int)v30;
  v12 = (int)v31[0];
  v13 = v29;
  v27 = 0LL;
  v14 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  v16 = -2147024882;
  if ( v14 )
  {
    v18 = v14 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v14 + 8));
    v18[5] = &ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper::`vftable';
    v18[6] = 0LL;
    *((_QWORD *)v15 + 9) = 1LL;
    *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentImage,ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentImage,ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v15 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentImage,ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v15 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentImage,ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentImage'};
    *((_QWORD *)v15 + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentImage,ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v15 = &ContentManagement::TargetedContent::ImageImpl::`vftable';
    *v18 = &ContentManagement::TargetedContent::ImageImpl::`vftable'{for `Microsoft::WRL::FtmBase'};
    *((_QWORD *)v15 + 4) = &ContentManagement::TargetedContent::ImageImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v15 + 5) = &ContentManagement::TargetedContent::ImageImpl::`vftable'{for `ContentManagement::TargetedContent::ITargetedContentImage'};
    *((_QWORD *)v15 + 6) = &ContentManagement::TargetedContent::ImageImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( *((_QWORD *)v15 + 7) != v13 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      v19 = *((_QWORD *)v15 + 7);
      *((_QWORD *)v15 + 7) = v13;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    *((_DWORD *)v15 + 20) = v12;
    *((_DWORD *)v15 + 21) = v11;
    v17 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
            (ContentManagement::TargetedContent::ImageImpl *)v15,
            &GUID_9e70de81_066b_494d_b0da_f90a90bf8266,
            &v27);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((ContentManagement::TargetedContent::ImageImpl *)v15);
  }
  else
  {
    v17 = -2147024882;
  }
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1E6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  v28 = 1;
  v20 = v27;
  *a1 = 0LL;
  v21 = (ContentManagement::TargetedContent::ContentValueImpl *)operator new(
                                                                  0x68uLL,
                                                                  (const struct std::nothrow_t *)&std::nothrow);
  if ( v21 )
  {
    v22 = ContentManagement::TargetedContent::ContentValueImpl::ContentValueImpl(v21);
    *(_DWORD *)(v22 + 64) = 5;
    if ( v20 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
    v23 = *(_QWORD *)(v22 + 96);
    *(_QWORD *)(v22 + 96) = v20;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v22);
    *a1 = v22;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v22);
    v16 = 0;
  }
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1E9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v16);
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return a1;
}
