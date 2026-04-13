/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800065F0
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180007E00 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180007E80 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180007E80.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x180007EA0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180007EA0.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180007F80 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180007FC0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180007FC0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180008100 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180008100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
