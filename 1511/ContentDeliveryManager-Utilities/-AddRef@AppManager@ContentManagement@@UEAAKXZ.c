/*
 * XREFs of ?AddRef@AppManager@ContentManagement@@UEAAKXZ @ 0x180003490
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIContextualSuggestionsManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180005F60 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIContextualSug.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIContextualSuggestionsManager@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180005F90 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UI_ea_180005F90.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UICreativeEventReportedCache@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180005FE0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UICreativeEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::AppManager::AddRef(ContentManagement::AppManager *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
