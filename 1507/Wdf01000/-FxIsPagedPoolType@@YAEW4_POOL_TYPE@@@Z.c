/*
 * XREFs of ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4
 * Callers:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0001F60 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C000FFA0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1C0010230 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0017B80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800 (--_GFxRequest@@UEAAPEAXI@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0025DCC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0026420 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     imp_WdfLookasideListCreate @ 0x1C0073370 (imp_WdfLookasideListCreate.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0078D0C (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsPagedPoolType(_POOL_TYPE Type)
{
  unsigned __int32 v1; // ecx

  v1 = (Type & 0xFFFFFEFF) - 1;
  return !v1 || v1 == 4;
}
