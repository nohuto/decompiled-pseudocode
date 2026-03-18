/*
 * XREFs of imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x1C00822F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00731D8 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Queue)
{
  FxIoTargetSelf *v5; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDeviceBase *m_DeviceBase; // rbx
  FxIoQueue *v9; // r11
  __int64 v10; // rcx
  FxDeviceBase *v11; // rax
  const void *_a5; // rbx
  const void *_a3; // rax
  const void *v15; // rbx
  unsigned __int16 v16; // r9
  FxIoQueue *pFxIoQueue; // [rsp+78h] [rbp+10h] BYREF
  FxIoTargetSelf *pTargetSelf; // [rsp+88h] [rbp+20h] BYREF

  pFxIoQueue = 0LL;
  if ( !IoTarget )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1205uLL);
  v5 = (FxIoTargetSelf *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (IoTarget & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxIoTargetSelf *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4613 )
  {
    pTargetSelf = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pTargetSelf, (void *)IoTarget, 0x1205u, Offset);
    v5 = pTargetSelf;
  }
  m_Globals = v5->m_Globals;
  m_DeviceBase = v5->m_DeviceBase;
  if ( !Queue )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  v9 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Queue & 1) != 0 )
  {
    v10 = LOWORD(v9->FxNonPagedObject::FxObject::__vftable);
    v9 = (FxIoQueue *)((char *)v9 - v10);
  }
  if ( v9->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pFxIoQueue = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pFxIoQueue, (void *)Queue, 0x1003u, v10);
    v9 = pFxIoQueue;
    v5 = pTargetSelf;
  }
  v11 = v9->m_DeviceBase;
  if ( m_DeviceBase == v11 )
  {
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
    {
      if ( (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        if ( m_DeviceBase->m_ObjectSize )
          v15 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        v16 = 59;
LABEL_29:
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v16, WPP_FxIoTargetAPI_cpp_Traceguids, v15, -1073741436);
        return 3221225860LL;
      }
    }
    else if ( LODWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) != 261 )
    {
      if ( m_DeviceBase->m_ObjectSize )
        v15 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v15 = 0LL;
      v16 = 60;
      goto LABEL_29;
    }
    v5->m_DispatchQueue = v9;
    return 0LL;
  }
  if ( m_DeviceBase->m_ObjectSize )
    _a5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a5 = 0LL;
  if ( v11->m_ObjectSize )
    _a3 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a3 = 0LL;
  WPP_IFR_SF_qqqqd(
    m_Globals,
    IoTarget,
    0xDu,
    0x3Au,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    (const void *)Queue,
    _a3,
    (const void *)IoTarget,
    _a5,
    -1073741808);
  return 3221225488LL;
}
