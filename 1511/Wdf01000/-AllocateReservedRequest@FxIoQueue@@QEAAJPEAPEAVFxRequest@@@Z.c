/*
 * XREFs of ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001E440
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C001F684 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0031FE4 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0069D70 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int _a1; // eax
  int v8; // esi
  FxRequest *v9; // rdi
  _FXIO_FORWARD_PROGRESS_CONTEXT **p_m_FwdProgContext; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  *Request = 0LL;
  m_CxDeviceInfo = this->m_CxDeviceInfo;
  if ( m_CxDeviceInfo )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  _a1 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, 0LL, &pRequest);
  v8 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x68u, (const _GUID *)&FxObject::`vftable'.DebugExtension, _a1);
    return (unsigned int)v8;
  }
  v9 = pRequest;
  p_m_FwdProgContext = &this->m_FwdProgContext;
  pRequest->m_Reserved = 1;
  v9->m_IoQueue = this;
  v9->m_ForwardProgressQueue = this;
  v9->m_Completed = 0;
  if ( this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method )
  {
    v9->m_Presented = 1;
    if ( v9->m_ObjectSize )
      v12 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v12 = 0LL;
    if ( this->m_ObjectSize )
      v13 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v13 = 0LL;
    v14 = (*p_m_FwdProgContext)->m_IoReservedResourcesAllocate.Method((WDFQUEUE__ *)v13, (WDFREQUEST__ *)v12);
    v8 = v14;
    if ( v14 >= 0 )
      goto LABEL_6;
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x69u, (const _GUID *)&FxObject::`vftable'.DebugExtension, v14);
    FxRequest::FreeRequest(v9);
  }
  if ( v8 >= 0 )
LABEL_6:
    *Request = v9;
  return (unsigned int)v8;
}
