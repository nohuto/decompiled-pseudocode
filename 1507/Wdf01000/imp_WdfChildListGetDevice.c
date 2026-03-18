/*
 * XREFs of imp_WdfChildListGetDevice @ 0x1C002E040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfChildListGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 DeviceList)
{
  WDFCHILDLIST__ *_a1; // rbx
  FxChildList *v3; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxDeviceBase *m_DeviceBase; // rax
  FxChildList *pList; // [rsp+48h] [rbp+10h] BYREF

  _a1 = (WDFCHILDLIST__ *)DeviceList;
  if ( !DeviceList )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1029uLL);
  v3 = (FxChildList *)(~DeviceList & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(DeviceList) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    DeviceList = LOWORD(v3->__vftable);
    v3 = (FxChildList *)((char *)v3 - DeviceList);
  }
  if ( v3->m_Type == 4137 )
  {
    pList = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pList, _a1, 0x1029u, DeviceList);
    v3 = pList;
  }
  m_Globals = v3->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xDu, WPP_FxChildListAPI_cpp_Traceguids, _a1);
    v3 = pList;
  }
  m_DeviceBase = v3->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
