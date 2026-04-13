/*
 * XREFs of ?FileContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B100
 * Callers:
 *     ?MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B588 (-MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImp.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIThumbnailCacheHelper@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFA0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIThumbnailCach.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?GetStreamRefFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@UIRandomAccessStreamReference@Streams@Storage@Windows@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAUHSTRING__@@PEAI@Z @ 0x18004AE1C (-GetStreamRefFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@UIRandomAccessStreamRefer.c)
 *     ??0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180050564 (--0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall ContentManagement::TargetedContent::FileContentValueFromJson(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  ContentManagement::TargetedContent::ContentValueImpl *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v14[1] = -2LL;
  v14[2] = a1;
  v6 = (__int64 *)Windows::Internal::StringReference::StringReference((__int64)&v15, (const WCHAR **)off_18006EA98);
  ContentManagement::TargetedContent::GetStreamRefFromJson((HSTRING)v14, a2, *v6, a3);
  v7 = v14[0];
  *a1 = 0LL;
  v8 = (ContentManagement::TargetedContent::ContentValueImpl *)operator new(
                                                                 0x68uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = ContentManagement::TargetedContent::ContentValueImpl::ContentValueImpl(v8);
    *(_DWORD *)(v10 + 64) = 4;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v11 = *(_QWORD *)(v10 + 96);
    *(_QWORD *)(v10 + 96) = v7;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v10);
    *a1 = v10;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v10);
    v9 = 0LL;
  }
  else
  {
    v9 = 2147942414LL;
  }
  if ( (int)v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1D9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)v9);
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return a1;
}
