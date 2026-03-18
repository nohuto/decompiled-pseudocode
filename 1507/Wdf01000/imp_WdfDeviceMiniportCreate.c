/*
 * XREFs of imp_WdfDeviceMiniportCreate @ 0x1C0007710
 * Callers:
 *     <none>
 * Callees:
 *     ??0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z @ 0x1C0007898 (--0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C000F93C (-ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C000FA70 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceMiniportCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *AttachedDeviceObject,
        _DEVICE_OBJECT *Pdo,
        WDFDEVICE__ **Device)
{
  FxDriver *v9; // rcx
  __int64 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _DEVICE_OBJECT *v12; // rsi
  _DEVICE_OBJECT *v13; // rdi
  int result; // eax
  FxMpDevice *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  int Target; // esi
  unsigned __int8 CurrentIrql; // al
  FxDriver *pDriver; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v22; // [rsp+78h] [rbp+10h] BYREF

  if ( !Driver )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1001uLL);
  v9 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Driver & 1) != 0 )
  {
    v10 = LOWORD(v9->FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDriver *)((char *)v9 - v10);
  }
  if ( v9->m_Type == 4097 )
  {
    pDriver = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDriver, (void *)Driver, 0x1001u, v10);
    v9 = pDriver;
  }
  m_Globals = v9->m_Globals;
  if ( !DeviceObject )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  v12 = AttachedDeviceObject;
  v13 = Pdo;
  if ( AttachedDeviceObject )
  {
    if ( !Pdo )
      FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  }
  else if ( Pdo )
  {
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  }
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    v22 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v22,
      m_Globals->Public.DriverName,
      (const char *)&v22);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    result = FxValidateObjectAttributes(v9->m_Globals, Attributes, 0);
    if ( result >= 0 )
    {
      v15 = (FxMpDevice *)FxObjectHandleAlloc(
                            m_Globals,
                            ExDefaultNonPagedPoolType,
                            0xD0uLL,
                            0,
                            Attributes,
                            0,
                            FxObjectTypeExternal);
      if ( v15 )
      {
        FxMpDevice::FxMpDevice(v15, m_Globals, pDriver, DeviceObject, v12, v13);
        v17 = v16;
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 )
      {
        if ( v12
          && (Target = FxDeviceBase::AllocateTarget((FxDeviceBase *)v17, (FxIoTarget **)(v17 + 200), 0), Target < 0)
          || (Target = FxDisposeList::_Create(m_Globals, *(void **)(v17 + 144), (FxDisposeList **)(v17 + 128)),
              Target < 0)
          || (Target = FxDeviceBase::ConfigureConstraints((FxDeviceBase *)v17, Attributes), Target < 0)
          || (Target = FxObject::Commit((FxObject *)v17, Attributes, (void **)Device, 0LL, 1u), Target < 0) )
        {
          FxObject::DeleteFromFailedCreate((FxObject *)v17);
        }
        return Target;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
