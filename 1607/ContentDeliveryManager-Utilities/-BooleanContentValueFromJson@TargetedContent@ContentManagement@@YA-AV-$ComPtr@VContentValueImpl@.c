/*
 * XREFs of ?BooleanContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18004A978
 * Callers:
 *     ?MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B588 (-MakeContentValueForJsonObject@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImp.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentValue@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AF00 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UITargetedCont.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIThumbnailCacheHelper@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AFA0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIThumbnailCach.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180018734 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800298AC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ??0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ @ 0x180050564 (--0ContentValueImpl@TargetedContent@ContentManagement@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ContentManagement::TargetedContent::BooleanContentValueFromJson(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // rax
  int v5; // eax
  ContentManagement::TargetedContent::ContentValueImpl *v6; // rax
  __int64 v7; // rbx
  _BYTE v8[4]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+24h] [rbp-44h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 *v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = -2LL;
  v11 = a1;
  v9 = 0;
  v4 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&v12, (const WCHAR **)off_18006EAC0);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)a2 + 96LL))(a2, *v4, v8);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x19E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v9 = 1;
  *a1 = 0LL;
  v6 = (ContentManagement::TargetedContent::ContentValueImpl *)operator new(
                                                                 0x68uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = ContentManagement::TargetedContent::ContentValueImpl::ContentValueImpl(v6);
    *(_BYTE *)(v7 + 88) = v8[0];
    *(_DWORD *)(v7 + 64) = 3;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IThumbnailCacheHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(v7);
    *a1 = v7;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentValue,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v7);
  }
  else
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentdata.cpp",
      (const char *)0x8007000ELL);
  }
}
