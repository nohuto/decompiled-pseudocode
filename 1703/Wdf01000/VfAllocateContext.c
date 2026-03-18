/*
 * XREFs of VfAllocateContext @ 0x1C00D2048
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00D1914 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00D1C98 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x1C007FD9C (-FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z.c)
 */

__int64 __fastcall VfAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **ContextHeader,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 size; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributes((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 8, a4);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    if ( Attributes->ContextTypeInfo )
    {
      result = FxCalculateObjectTotalSize(DriverName, 0, 0, Attributes, &size);
      if ( (int)result < 0 )
        return result;
      v9 = FxPoolAllocator(
             DriverName,
             &DriverName->FxPoolFrameworks,
             ExDefaultNonPagedPoolType,
             size,
             DriverName->Tag,
             retaddr);
      if ( v9 )
        *ContextHeader = v9;
      else
        return (unsigned int)-1073741670;
    }
    else
    {
      v8 = -1073741773;
      WPP_IFR_SF_qd(DriverName, 3u, 0xBu, 0xBu, WPP_Verifier_cpp_Traceguids, Attributes, -1073741773);
    }
    return v8;
  }
  return result;
}
