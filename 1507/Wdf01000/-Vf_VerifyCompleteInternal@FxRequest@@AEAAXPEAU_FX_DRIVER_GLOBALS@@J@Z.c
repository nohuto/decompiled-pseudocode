/*
 * XREFs of ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1C00D0860
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDxD @ 0x1C007575C (WPP_IFR_SF_qDxD.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int16 m_VerifierFlags; // ax
  const void *_a1; // rax
  __int64 v9; // rax
  FxIrp *p_m_Irp; // r14
  _IRP *m_Irp; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int level; // r9d
  unsigned int id; // edi
  char m_ObjectFlags; // al
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int64 flags; // rdx
  const void *v18; // rcx
  WDFREQUEST__ *v19; // rbx
  _FX_DRIVER_GLOBALS *v20; // rcx
  _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-30h] BYREF
  _GUID _a4; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)_a4.Data4 = Status;
  FxNonPagedObject::Lock(this, _a4.Data4, FxDriverGlobals);
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO && m_Globals->FxVerifierOn )
    FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
  m_VerifierFlags = this->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x10) != 0 && (m_VerifierFlags & 0x40) == 0 )
  {
    _a1 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequest_cpp_Traceguids, _a1);
    traceGuid = &_a4;
    _a4.Data1 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v9 + 318) )
      DbgBreakPoint();
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
      goto LABEL_16;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_16;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_16;
  }
  if ( FxDriverGlobals >= 0 )
  {
    flags = m_Irp->IoStatus.Information;
    if ( flags > id )
    {
      if ( this->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qDxD(*p_m_Globals, flags, (unsigned int)m_Irp, level, traceGuid, v18, level, flags, id);
      if ( this->m_ObjectSize )
        v19 = (WDFREQUEST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v19 = 0LL;
      v20 = *p_m_Globals;
      data.Irp = p_m_Irp->m_Irp;
      data.Request = v19;
      data.OutputBufferLength = id;
      data.Information = data.Irp->IoStatus.Information;
      data.MajorFunction = data.Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
      FxVerifierBugCheckWorker(v20, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
    }
  }
LABEL_16:
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_Completed = 1;
  if ( m_ObjectFlags < 0 && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    FxVerifierLock::Unlock(m_ForwardProgressQueue, _a4.Data4[0], (unsigned __int8)m_Irp);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, _a4.Data4[0]);
}
