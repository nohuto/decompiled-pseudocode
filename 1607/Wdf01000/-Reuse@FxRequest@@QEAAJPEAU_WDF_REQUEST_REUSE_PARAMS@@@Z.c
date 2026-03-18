/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C001B770
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfRequestReuse @ 0x1C001AF10 (imp_WdfRequestReuse.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0078594 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007A3DC (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 m_IrpAllocation; // al
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  const void *_a1; // rax
  const void *_a2; // r8
  _IRP *v15; // rcx
  const void *TraceObjectHandle; // rax
  __int16 v17; // r8
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rdi
  const void *v20; // rax
  const void *v21; // rax
  int v22; // r8d
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock(this, &irql, v11);
    if ( (this->m_VerifierFlags & 0x100) != 0 )
    {
      _a1 = FxRequestBase::GetTraceObjectHandle(this);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(this, irql, v12);
  }
  WdfBindInfo = m_Globals->WdfBindInfo;
  Major = WdfBindInfo->Version.Major;
  if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 9 )
  {
    this->m_CompletionRoutine.m_Completion = 0LL;
    this->m_TargetCompletionContext = 0LL;
  }
  m_Irp = this->m_Irp.m_Irp;
  if ( m_Irp )
  {
    m_RequestContext = this->m_RequestContext;
    if ( m_RequestContext )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    m_IrpAllocation = this->m_IrpAllocation;
    if ( !m_IrpAllocation )
    {
      if ( (ReuseParams->Flags & 1) == 0 )
      {
        m_Irp->IoStatus.Status = ReuseParams->Status;
        m_Irp->Cancel = 0;
        *(_WORD *)&this->m_Completed = 0;
        return 0LL;
      }
      return 3223323144LL;
    }
    if ( m_IrpAllocation == 2 && this->m_CanComplete && !this->m_Completed )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::ClearVerifierFlags(this, 1);
      this->Release(this, (void *)1129464644, 2242, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    m_Irp = ReuseParams->NewIrp;
    if ( this->m_IrpAllocation == 1 )
    {
      v15 = this->m_Irp.m_Irp;
      this->m_Irp.m_Irp = m_Irp;
      if ( v15 )
        IoFreeIrp(v15);
    }
    else
    {
      this->m_Irp.m_Irp = m_Irp;
    }
    this->m_IrpAllocation = 2;
  }
  if ( this->m_IrpAllocation == 1 && m_Irp )
  {
    IoReuseIrp(m_Irp, ReuseParams->Status);
    m_Irp->Cancel = 0;
  }
  if ( (ReuseParams->Flags & 2) == 0 )
  {
    this->m_CanComplete = 0;
    *(_WORD *)&this->m_Completed = 0;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(this, 1);
    return 0LL;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
  {
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(this);
    v18 = v17 + 32;
    goto LABEL_40;
  }
  if ( m_Irp )
  {
    if ( this->m_IrpAllocation != 1 )
    {
      if ( this->m_Refcnt == 1 )
      {
        if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
        {
          FxObject::AddRef(this, (void *)0x43524344, 2395, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          this->m_SystemBuffer.m_Buffer = 0LL;
          this->m_OutputBuffer.m_Buffer = 0LL;
          FxRequestBase::ClearFieldsForReuse(this);
          this->m_CanComplete = 1;
          if ( m_Globals->FxVerifierOn )
            FxRequestBase::SetVerifierFlags(this, 1);
          return 0LL;
        }
        if ( this->m_ObjectSize )
          v19 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v19 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, m_Irp, v19, -1073741808);
      }
      else
      {
        v21 = FxRequestBase::GetTraceObjectHandle(this);
        WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, v21, v22, -1073741808);
      }
      goto LABEL_43;
    }
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(this);
    v18 = 45;
LABEL_40:
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v18, WPP_FxRequest_cpp_Traceguids, TraceObjectHandle, -1073741808);
LABEL_43:
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v20 = FxRequestBase::GetTraceObjectHandle(this);
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, v20, -1073741811);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225485LL;
}
