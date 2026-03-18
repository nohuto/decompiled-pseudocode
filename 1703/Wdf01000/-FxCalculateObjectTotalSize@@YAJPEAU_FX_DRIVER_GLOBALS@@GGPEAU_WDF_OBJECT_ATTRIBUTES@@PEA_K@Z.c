/*
 * XREFs of ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C007FD9C
 * Callers:
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007FAFC (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     VfAllocateContext @ 0x1C00D2048 (VfAllocateContext.c)
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 *Total)
{
  unsigned __int64 ContextSize; // rax
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r11

  ContextSize = FxGetContextSize(Attributes);
  return FxCalculateObjectTotalSize2(FxDriverGlobals, v8, v7, ContextSize, Total);
}
