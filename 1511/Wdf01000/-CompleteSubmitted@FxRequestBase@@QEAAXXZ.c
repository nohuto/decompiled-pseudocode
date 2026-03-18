/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005A30
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0005730 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00197F0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00565C8 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0075DF0 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00764C4 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0055ACC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoTarget *m_Target; // rdi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  void *m_TargetCompletionContext; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  _IRP *m_Irp; // rax
  FxIoTarget *v11; // rdx
  _IO_STATUS_BLOCK IoStatus; // xmm0
  char v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+34h] [rbp-54h]
  _IO_STATUS_BLOCK v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  __int64 v21; // [rsp+70h] [rbp-18h]

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    FxRequestBase::VerifierClearFormatted(this);
  }
  m_RequestContext = this->m_RequestContext;
  if ( !m_RequestContext )
  {
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_13;
    m_Irp = this->m_Irp.m_Irp;
    v11 = this->m_Target;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v14 = 255;
    IoStatus = m_Irp->IoStatus;
    v16 = 0LL;
    v15 = IoStatus;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( v11->m_ObjectSize )
      v7 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)&v13;
    goto LABEL_12;
  }
  m_RequestContext->m_CompletionParams.IoStatus = this->m_Irp.m_Irp->IoStatus;
  this->m_RequestContext->CopyParameters(this->m_RequestContext, this);
  m_Completion = this->m_CompletionRoutine.m_Completion;
  if ( m_Completion )
  {
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    this->m_TargetCompletionContext = 0LL;
    if ( m_Target->m_ObjectSize )
      v7 = (unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    p_m_CompletionParams = &this->m_RequestContext->m_CompletionParams;
LABEL_12:
    this->m_CompletionRoutine.m_Completion = 0LL;
    m_Completion((WDFREQUEST__ *)v8, (WDFIOTARGET__ *)v7, p_m_CompletionParams, m_TargetCompletionContext);
  }
LABEL_13:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
