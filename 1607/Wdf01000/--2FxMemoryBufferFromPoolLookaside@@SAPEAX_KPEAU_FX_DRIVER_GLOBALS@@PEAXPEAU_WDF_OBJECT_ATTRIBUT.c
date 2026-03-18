/*
 * XREFs of ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C007B7D0
 * Callers:
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C007AA80 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C007AD70 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00167A8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 */

FxObject *__fastcall FxMemoryBufferFromPoolLookaside::operator new(
        unsigned __int64 FxDriverGlobals,
        _FX_DRIVER_GLOBALS *ValidMemory,
        FxObject *Attributes,
        _WDF_OBJECT_ATTRIBUTES *Size)
{
  return FxObjectAndHandleHeaderInit(ValidMemory, Attributes, 0x90u, Size, FxObjectTypeExternal);
}
