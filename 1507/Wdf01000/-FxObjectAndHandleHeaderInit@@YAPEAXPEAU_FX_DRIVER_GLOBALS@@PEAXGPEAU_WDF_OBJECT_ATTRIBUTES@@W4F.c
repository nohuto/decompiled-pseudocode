/*
 * XREFs of ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0022F90
 * Callers:
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000EE68 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0077DA0 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ??2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0079300 (--2FxMemoryBufferFromPoolLookaside@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@PEAXPEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

FxObject *__fastcall FxObjectAndHandleHeaderInit(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *AllocationStart,
        unsigned __int16 ObjectSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObjectType ObjectType)
{
  FxObject *v7; // rbx

  v7 = AllocationStart;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    memset(AllocationStart, 0, 0x20uLL);
    *(_DWORD *)(&v7->m_ObjectState + 1) = 1146058822;
    v7 = (FxObject *)((char *)v7 + 32);
  }
  if ( ObjectType == FxObjectTypeExternal )
    FxContextHeaderInit((FxContextHeader *)((char *)v7 + ObjectSize), v7, Attributes);
  return v7;
}
