/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004C040
 * Callers:
 *     ?AddRef@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180048B50 (-AddRef@ImageImpl@TargetedContent@ContentManagement@@UEAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180052EC0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180052EC0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180053210 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180053210.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180053340 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180053340.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UITargetedContentImage@TargetedContent@ContentManagement@@U?$InterfaceList@VRandomAccessStreamReferenceWrapper@TargetedContent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180053390 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180053390.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentImage,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::RandomAccessStreamReferenceWrapper,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 72);
  v3 = 0x7FFFFFFF;
  if ( v2 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v2 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v2 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v2 + 1, v2);
      v5 = v2 == v6;
      v2 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
