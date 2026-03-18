/*
 * XREFs of ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00A692C
 * Callers:
 *     ?CreatePowerThread@FxPkgPnp@@IEAAJXZ @ 0x1C009D6A8 (-CreatePowerThread@FxPkgPnp@@IEAAJXZ.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ??0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00A6330 (--0FxSystemThread@@AEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxSystemThread@@AEAAEXZ @ 0x1C00A6658 (-Initialize@FxSystemThread@@AEAAEXZ.c)
 */

__int64 __fastcall FxSystemThread::_CreateAndInit(
        FxSystemThread **SystemThread,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DeviceObject)
{
  FxSystemThread *v8; // rax
  __int64 v9; // rdx
  unsigned __int8 v10; // r8
  FxSystemThread *v11; // rax
  FxSystemThread *v12; // rbx

  *SystemThread = 0LL;
  v8 = (FxSystemThread *)FxObjectHandleAlloc(
                           FxDriverGlobals,
                           ExDefaultNonPagedPoolType,
                           0x100uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeInternal);
  if ( v8 )
  {
    FxSystemThread::FxSystemThread(v8, FxDriverGlobals);
    v12 = v11;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    if ( FxSystemThread::Initialize(v12, v9, v10) )
    {
      *SystemThread = v12;
      return 0LL;
    }
    else
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0xCu,
        0xBu,
        WPP_FxSystemThread_cpp_Traceguids,
        Device,
        (__int64)DeviceObject,
        -1073741823);
      FxObject::DeleteFromFailedCreate(v12);
      return 3221225473LL;
    }
  }
  else
  {
    WPP_IFR_SF_qid(
      FxDriverGlobals,
      2u,
      0xCu,
      0xAu,
      WPP_FxSystemThread_cpp_Traceguids,
      Device,
      (__int64)DeviceObject,
      -1073741670);
    return 3221225626LL;
  }
}
