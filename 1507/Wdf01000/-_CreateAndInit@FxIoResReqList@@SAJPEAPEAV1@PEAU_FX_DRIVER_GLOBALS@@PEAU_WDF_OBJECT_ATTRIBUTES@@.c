/*
 * XREFs of ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C00A2E3C
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011B90 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0009D88 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 */

__int64 __fastcall FxIoResReqList::_CreateAndInit(
        FxIoResReqList **ResourceReqList,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebx
  FxIoResReqList *v7; // rax
  FxIoResReqList *v8; // rax

  v4 = 0;
  *ResourceReqList = 0LL;
  v7 = (FxIoResReqList *)FxObjectHandleAlloc(
                           FxDriverGlobals,
                           ExDefaultNonPagedPoolType,
                           0xA0uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeExternal);
  if ( v7 )
    FxIoResReqList::FxIoResReqList(v7, FxDriverGlobals);
  else
    v8 = 0LL;
  if ( v8 )
  {
    *ResourceReqList = v8;
  }
  else
  {
    v4 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxResource_hpp_Traceguids_0, -1073741670);
  }
  return v4;
}
