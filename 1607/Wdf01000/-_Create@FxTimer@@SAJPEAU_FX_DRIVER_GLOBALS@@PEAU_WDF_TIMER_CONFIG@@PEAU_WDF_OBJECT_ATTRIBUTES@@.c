/*
 * XREFs of ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0017328
 * Callers:
 *     imp_WdfTimerCreate @ 0x1C0017200 (imp_WdfTimerCreate.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0019EB0 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001A0E4 (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxTimer::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  FxTimer *v9; // rax
  FxTimer *v10; // rax
  FxTimer *v11; // rbx
  int v12; // edi

  v9 = (FxTimer *)FxObjectHandleAlloc(
                    FxDriverGlobals,
                    ExDefaultNonPagedPoolType,
                    0x160uLL,
                    0,
                    Attributes,
                    0,
                    FxObjectTypeExternal);
  if ( v9 )
  {
    FxTimer::FxTimer(v9, FxDriverGlobals);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    return 3221225626LL;
  v12 = FxTimer::Initialize(v11, Attributes, Config, ParentObject, Timer);
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v11);
  return (unsigned int)v12;
}
