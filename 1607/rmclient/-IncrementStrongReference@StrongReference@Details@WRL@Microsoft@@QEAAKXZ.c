/*
 * XREFs of ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18000921C
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800036A0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180004140 (-QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x1800042E0 (-AddRef@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAppMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800079D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIAppMemoryReport@System@Windows@@U-$Interf_ea_1800079D0.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180008B40 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(this, a2);
}
