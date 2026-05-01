/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C2C0
 * Callers:
 *     ?AddRef@CImmersiveWindowFactory@@UEAAKXZ @ 0x18002B680 (-AddRef@CImmersiveWindowFactory@@UEAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18002C6A0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@_ea_18002C6A0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x18002C750 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@_ea_18002C750.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x18002C780 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@_ea_18002C780.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x18002C7D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@_ea_18002C7D0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x18002C870 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveWindowFactoryBase@@VNil@Details@_ea_18002C870.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveWindowFactoryBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 152);
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
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 152), v2 + 1, v2);
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
