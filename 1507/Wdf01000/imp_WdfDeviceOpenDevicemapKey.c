/*
 * XREFs of imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017C20 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C0075E60 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  FxDevice *v8; // rcx
  __int64 Offset; // r8
  WDFKEY__ **v10; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v14; // r9
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  _WDF_OBJECT_ATTRIBUTES *v17; // r14
  FxRegKey *v18; // rax
  FxRegKey *v19; // rax
  FxRegKey *v20; // rsi
  FxDevice *v21; // rcx
  int v22; // r14d
  FxDevice *pDevice; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  WDFKEY__ *keyHandle; // [rsp+98h] [rbp+38h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v8 = pDevice;
  }
  v10 = Key;
  m_Globals = v8->m_Globals;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  Length = KeyName->Length;
  if ( (KeyName->Length & 1) != 0 )
  {
    _a2 = Length;
    v14 = 13;
LABEL_12:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v14, WPP_FxValidateFunctions_hpp_Traceguids_0, KeyName, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = KeyName->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v14 = 14;
    goto LABEL_12;
  }
  if ( (_WORD)_a2 && !KeyName->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v14 = 15;
    goto LABEL_12;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      KeyName,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
  if ( !Length )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x14u, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    LODWORD(keyHandle) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    LODWORD(keyHandle) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    v17 = KeyAttributes;
    result = FxValidateObjectAttributes(m_Globals, KeyAttributes, 1, DesiredAccess);
    if ( (int)result >= 0 )
    {
      v18 = (FxRegKey *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x80uLL,
                          0,
                          v17,
                          0,
                          FxObjectTypeExternal);
      if ( v18 )
      {
        FxRegKey::FxRegKey(v18, m_Globals);
        v20 = v19;
      }
      else
      {
        v20 = 0LL;
      }
      if ( v20 )
      {
        v20->m_DeviceBase = pDevice;
        v22 = FxObject::Commit(v20, v17, (void **)&keyHandle, 0LL, 1u);
        if ( v22 < 0 || (v22 = FxDevice::OpenDevicemapKeyWorker(v21, m_Globals, KeyName, DesiredAccess, v20), v22 < 0) )
          FxObject::DeleteFromFailedCreate(v20);
        else
          *v10 = keyHandle;
        return (unsigned int)v22;
      }
      else
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x15u, WPP_FxDeviceApi_cpp_Traceguids, -1073741670);
        return 3221225626LL;
      }
    }
  }
  return result;
}
