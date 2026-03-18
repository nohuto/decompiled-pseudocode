/*
 * XREFs of ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0
 * Callers:
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0002280 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C00028C0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0007AA0 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0007B90 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?SelfDestruct@FxObject@@MEAAXXZ @ 0x1C00087E0 (-SelfDestruct@FxObject@@MEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C0008F40 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C000CCD0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C000EFA0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C00146A0 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0014B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C0016F80 (--_GFxString@@UEAAPEAXI@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0032AE0 (imp_WdfObjectDereferenceActual.c)
 *     imp_WdfLookasideListCreate @ 0x1C0076A70 (imp_WdfLookasideListCreate.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsPagedPoolType(_POOL_TYPE Type)
{
  unsigned __int32 v1; // ecx

  v1 = (Type & 0xFFFFFEFF) - 1;
  return !v1 || v1 == 4;
}
