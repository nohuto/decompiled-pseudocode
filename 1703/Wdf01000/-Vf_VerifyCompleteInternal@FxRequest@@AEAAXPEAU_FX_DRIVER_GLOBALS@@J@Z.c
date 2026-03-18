/*
 * XREFs of ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00D3F28
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDxD @ 0x1C007C834 (WPP_IFR_SF_qDxD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int16 m_VerifierFlags; // ax
  const void *_a1; // rcx
  FxIrp *p_m_Irp; // r15
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int level; // r9d
  unsigned int id; // esi
  unsigned __int8 v14; // dl
  unsigned __int64 flags; // rdx
  unsigned __int16 *p_m_ObjectSize; // rbx
  WDFREQUEST__ *v17; // rdi
  WDFREQUEST__ *v18; // rcx
  _IRP *v19; // rdx
  bool v20; // zf
  _FX_DRIVER_GLOBALS *v21; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-48h] BYREF
  _FX_DRIVER_GLOBALS *irql; // [rsp+A8h] [rbp+10h] OVERLAPPED BYREF

  irql = Status;
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, FxDriverGlobals);
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO && m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  m_VerifierFlags = this->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x10) != 0 && (m_VerifierFlags & 0x40) == 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  p_m_Irp = &this->m_Irp;
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  level = CurrentStackLocation->MajorFunction;
  if ( level == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    id = CurrentStackLocation->Parameters.Read.Length;
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 14 )
      goto LABEL_14;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_14;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_14;
  }
  if ( FxDriverGlobals >= 0 )
  {
    flags = m_Irp->IoStatus.Information;
    if ( flags > id )
    {
      p_m_ObjectSize = &this->m_ObjectSize;
      v17 = (WDFREQUEST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = v17;
      if ( !*p_m_ObjectSize )
        v18 = 0LL;
      WPP_IFR_SF_qDxD(*p_m_Globals, flags, (unsigned int)m_Irp, level, traceGuid, v18, level, flags, id);
      v19 = p_m_Irp->m_Irp;
      v20 = *p_m_ObjectSize == 0;
      v21 = *p_m_Globals;
      data.Irp = p_m_Irp->m_Irp;
      if ( v20 )
        v17 = 0LL;
      data.Request = v17;
      data.OutputBufferLength = id;
      data.Information = v19->IoStatus.Information;
      data.MajorFunction = v19->Tail.Overlay.CurrentStackLocation->MajorFunction;
      FxVerifierBugCheckWorker(v21, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
    }
  }
LABEL_14:
  v14 = (unsigned __int8)irql;
  this->m_Completed = 1;
  FxNonPagedObject::Unlock(this, v14, (unsigned __int8)m_Irp);
}
