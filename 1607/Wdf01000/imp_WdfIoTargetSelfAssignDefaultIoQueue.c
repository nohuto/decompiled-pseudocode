/*
 * XREFs of imp_WdfIoTargetSelfAssignDefaultIoQueue @ 0x1C0082750
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00768E0 (WPP_IFR_SF_qqqqd.c)
 */

__int64 __fastcall imp_WdfIoTargetSelfAssignDefaultIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFQUEUE__ *Queue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDeviceBase *m_DeviceBase; // rbx
  FxDeviceBase *v7; // rax
  const void *_a5; // rbx
  const void *_a3; // rax
  const void *v11; // rbx
  unsigned __int16 v12; // r9
  FxIoQueue *pFxIoQueue; // [rsp+70h] [rbp+8h] BYREF
  FxIoTargetSelf *pTargetSelf; // [rsp+88h] [rbp+20h] BYREF

  pFxIoQueue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)IoTarget,
    0x1205u,
    (void **)&pTargetSelf);
  m_Globals = pTargetSelf->m_Globals;
  m_DeviceBase = pTargetSelf->m_DeviceBase;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Queue, 0x1003u, (void **)&pFxIoQueue);
  v7 = pFxIoQueue->m_DeviceBase;
  if ( m_DeviceBase == v7 )
  {
    if ( BYTE5(m_DeviceBase[1].m_Globals) )
    {
      if ( (m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        if ( m_DeviceBase->m_ObjectSize )
          v11 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v11 = 0LL;
        v12 = 59;
LABEL_15:
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, v12, WPP_FxIoTargetAPI_cpp_Traceguids, v11, -1073741436);
        return 3221225860LL;
      }
    }
    else if ( LODWORD(m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) != 261 )
    {
      if ( m_DeviceBase->m_ObjectSize )
        v11 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v11 = 0LL;
      v12 = 60;
      goto LABEL_15;
    }
    pTargetSelf->m_DispatchQueue = pFxIoQueue;
    return 0LL;
  }
  if ( m_DeviceBase->m_ObjectSize )
    _a5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a5 = 0LL;
  if ( v7->m_ObjectSize )
    _a3 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a3 = 0LL;
  WPP_IFR_SF_qqqqd(
    m_Globals,
    (unsigned __int8)WPP_FxIoTargetAPI_cpp_Traceguids,
    0xDu,
    0x3Au,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    Queue,
    _a3,
    IoTarget,
    _a5,
    -1073741808);
  return 3221225488LL;
}
