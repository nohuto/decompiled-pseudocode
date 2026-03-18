/*
 * XREFs of ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001A6BC
 * Callers:
 *     imp_WdfStringCreate @ 0x1C00164A0 (imp_WdfStringCreate.c)
 *     imp_WdfTimerCreate @ 0x1C0017200 (imp_WdfTimerCreate.c)
 *     imp_WdfCollectionCreate @ 0x1C0019200 (imp_WdfCollectionCreate.c)
 *     imp_WdfSpinLockCreate @ 0x1C0019450 (imp_WdfSpinLockCreate.c)
 *     imp_WdfWaitLockCreate @ 0x1C001A180 (imp_WdfWaitLockCreate.c)
 *     imp_WdfObjectCreate @ 0x1C001A3B0 (imp_WdfObjectCreate.c)
 *     imp_WdfWorkItemCreate @ 0x1C001A700 (imp_WdfWorkItemCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x1C00398D0 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfDpcCreate @ 0x1C006BD30 (imp_WdfDpcCreate.c)
 *     imp_WdfLookasideListCreate @ 0x1C0076A70 (imp_WdfLookasideListCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007FBB0 (imp_WdfRegistryCreateKey.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B514 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008B734 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateObjectAttributesForParentHandle(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  if ( !Attributes )
  {
    if ( (Flags & 0x18) != 0 )
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_hpp_Traceguids, -1071644142);
    return 3223323154LL;
  }
  if ( Attributes->Size == 56 )
  {
    if ( Attributes->ParentObject )
      return 0LL;
    if ( (Flags & 0x18) != 0 )
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0xCu, WPP_FxValidateFunctions_hpp_Traceguids, Attributes, -1071644142);
    return 3223323154LL;
  }
  WPP_IFR_SF_qddd(
    FxDriverGlobals,
    (unsigned __int8)Attributes,
    6u,
    0xBu,
    WPP_FxValidateFunctions_hpp_Traceguids,
    Attributes,
    56,
    Attributes->Size,
    -1073741820);
  return 3221225476LL;
}
