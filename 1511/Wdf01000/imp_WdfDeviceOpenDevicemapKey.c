/*
 * XREFs of imp_WdfDeviceOpenDevicemapKey @ 0x1C0067450
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054F08 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKey@@@Z @ 0x1C006A938 (-OpenDevicemapKeyWorker@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@KPEAVFxRegKe.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceOpenDevicemapKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *KeyName,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v8; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int _a1; // edi
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r9
  _WDF_OBJECT_ATTRIBUTES *v14; // rsi
  FxRegKey *v15; // rax
  FxRegKey *v16; // rax
  FxRegKey *v17; // rdi
  FxDevice *v18; // rcx
  int v19; // esi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v8 = Key;
  m_Globals = pDevice->m_Globals;
  if ( !Key )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Key = 0LL;
  result = FxValidateUnicodeString(m_Globals, KeyName);
  if ( (int)result >= 0 )
  {
    if ( !KeyName->Length )
    {
      _a1 = -1073741811;
      v12 = 20;
LABEL_6:
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v12, WPP_FxDeviceApi_cpp_Traceguids, _a1);
      return (unsigned int)_a1;
    }
    _a1 = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( _a1 < 0 )
    {
      FxVerifierDbgBreakPoint(m_Globals);
      return (unsigned int)_a1;
    }
    v14 = KeyAttributes;
    result = FxValidateObjectAttributes(m_Globals, KeyAttributes, 1, v13);
    if ( (int)result >= 0 )
    {
      v15 = (FxRegKey *)FxObjectHandleAlloc(
                          m_Globals,
                          ExDefaultNonPagedPoolType,
                          0x80uLL,
                          0,
                          v14,
                          0,
                          FxObjectTypeExternal);
      if ( v15 )
      {
        FxRegKey::FxRegKey(v15, m_Globals);
        v17 = v16;
      }
      else
      {
        v17 = 0LL;
      }
      if ( !v17 )
      {
        _a1 = -1073741670;
        v12 = 21;
        goto LABEL_6;
      }
      v17->m_DeviceBase = pDevice;
      v19 = FxObject::Commit(v17, v14, (void **)&Key, 0LL, 1u);
      if ( v19 < 0 || (v19 = FxDevice::OpenDevicemapKeyWorker(v18, m_Globals, KeyName, DesiredAccess, v17), v19 < 0) )
        FxObject::DeleteFromFailedCreate(v17);
      else
        *v8 = (WDFKEY__ *)Key;
      return (unsigned int)v19;
    }
  }
  return result;
}
