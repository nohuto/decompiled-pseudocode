/*
 * XREFs of imp_WdfIoTargetCreate @ 0x1C002D490
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002D380 (-_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBa.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoTargetCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *IoTargetAttributes,
        WDFIOTARGET__ **IoTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int16 v9; // r9
  WDFIOTARGET__ *v10; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDeviceBase *pDevice; // [rsp+50h] [rbp+8h] BYREF
  FxIoTargetRemote *pTarget; // [rsp+68h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !IoTarget )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x13u, WPP_FxIoTargetAPI_cpp_Traceguids, Device);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, IoTargetAttributes, 0, v9);
    if ( (int)result >= 0 )
    {
      result = FxIoTargetRemote::_Create(m_Globals, IoTargetAttributes, pDevice, &pTarget);
      if ( (int)result >= 0 )
      {
        if ( pTarget->m_ObjectSize )
          v10 = (WDFIOTARGET__ *)((unsigned __int64)pTarget ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v10 = 0LL;
        *IoTarget = v10;
      }
    }
  }
  return result;
}
