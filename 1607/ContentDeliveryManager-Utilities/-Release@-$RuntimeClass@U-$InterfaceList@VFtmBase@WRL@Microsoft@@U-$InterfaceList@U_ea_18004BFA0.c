/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004BFA0
 * Callers:
 *     ?Release@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180048B40 (-Release@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ.c)
 *     ?ImageContentValueFromJson@TargetedContent@ContentManagement@@YA?AV?$ComPtr@VContentValueImpl@TargetedContent@ContentManagement@@@WRL@Microsoft@@PEAUIJsonObject@Json@Data@Windows@@PEAI@Z @ 0x18004B248 (-ImageContentValueFromJson@TargetedContent@ContentManagement@@YA-AV-$ComPtr@VContentValueImpl@Ta.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180052E40 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180052E40.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180052FE0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180052FE0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180053030 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_180053030.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x1800531F0 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@U_ea_1800531F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  unsigned __int32 v2; // ebx
  bool v3; // zf
  __int64 v4; // rax
  signed __int32 v5; // r8d

  v1 = *((_QWORD *)a1 + 9);
  if ( v1 < 0 )
  {
    do
LABEL_8:
      v5 = *(_DWORD *)(2 * v1 + 0x10);
    while ( v5 != 0x7FFFFFFF && v5 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v5 - 1, v5) );
    v2 = v5 - 1;
LABEL_10:
    if ( !v2 )
    {
      if ( a1 )
        (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  else
  {
    while ( (_DWORD)v1 != 0x7FFFFFFF )
    {
      v2 = v1 - 1;
      v4 = _InterlockedCompareExchange64(a1 + 9, v1 - 1, v1);
      v3 = v1 == v4;
      v1 = v4;
      if ( v3 )
        goto LABEL_10;
      if ( v4 < 0 )
        goto LABEL_8;
    }
    return 2147483646;
  }
  return v2;
}
