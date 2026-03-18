/*
 * XREFs of ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0013DB0
 * Callers:
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0013B60 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00148C0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C005C814 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008409C (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084868 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

void __fastcall FxRequestBase::CompleteSubmitted(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxIoTarget *m_Target; // rsi
  FxRequestContext *m_RequestContext; // rcx
  void (__fastcall *m_Completion)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *); // r10
  void *m_TargetCompletionContext; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _WDF_REQUEST_COMPLETION_PARAMS *p_m_CompletionParams; // r8
  _IRP *m_Irp; // rax
  FxIoTarget *v11; // rdx
  _IO_STATUS_BLOCK IoStatus; // xmm0
  unsigned __int8 v13; // r8
  _FX_DRIVER_GLOBALS *v14; // rax
  unsigned __int8 v15; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  char v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h]
  _IO_STATUS_BLOCK v19; // [rsp+38h] [rbp-50h]
  __int64 v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp-28h]
  __int64 v24; // [rsp+68h] [rbp-20h]
  __int64 v25; // [rsp+70h] [rbp-18h]
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  m_Target = this->m_Target;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + PfnKeGetCurrentProcessorNumberEx(0LL) * FxLibraryGlobals.DriverTracker.m_EntrySize) = m_Globals;
  if ( this->m_Globals->FxVerifierOn )
  {
    memset(&this->m_Irp.m_Irp->Tail, 0, 0x20uLL);
    v14 = this->m_Globals;
    if ( v14->FxVerifierOn )
    {
      if ( v14->FxVerifierIO )
      {
        FxNonPagedObject::Lock(this, &PreviousIrql, v13);
        this->m_VerifierFlags &= ~0x80u;
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)this[-1].m_IrpQueue) != 0LL )
          FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v15);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
      }
    }
  }
  m_RequestContext = this->m_RequestContext;
  if ( !m_RequestContext )
  {
    m_Completion = this->m_CompletionRoutine.m_Completion;
    if ( !m_Completion )
      goto LABEL_12;
    m_Irp = this->m_Irp.m_Irp;
    v11 = this->m_Target;
    m_TargetCompletionContext = this->m_TargetCompletionContext;
    v18 = 255;
    IoStatus = m_Irp->IoStatus;
    v20 = 0LL;
    v19 = IoStatus;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    this->m_TargetCompletionContext = 0LL;
    if ( v11->m_ObjectSize )
      v7 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    p_m_CompletionParams = (_WDF_REQUEST_COMPLETION_PARAMS *)&v17;
    goto LABEL_11;
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
LABEL_11:
    this->m_CompletionRoutine.m_Completion = 0LL;
    m_Completion((WDFREQUEST__ *)v8, (WDFIOTARGET__ *)v7, p_m_CompletionParams, m_TargetCompletionContext);
  }
LABEL_12:
  this->Release(this, m_Target, 530, "minkernel\\wdf\\framework\\shared\\core\\fxrequestbase.cpp");
}
