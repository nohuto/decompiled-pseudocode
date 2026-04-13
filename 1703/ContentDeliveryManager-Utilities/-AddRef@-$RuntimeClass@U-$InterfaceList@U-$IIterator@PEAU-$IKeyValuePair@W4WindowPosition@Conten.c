/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IIterator@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016AA0
 * Callers:
 *     ?AddRef@ChunkElementIterator@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x180016C30 (-AddRef@ChunkElementIterator@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqu.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18001E9D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$IKeyValuePair@W4WindowPosition@ContentManagement@@I@C.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18001F3E0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UITargetedContentTriggerInternal@Internal@TargetedConten.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 48);
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
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v2 + 1, v2);
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
