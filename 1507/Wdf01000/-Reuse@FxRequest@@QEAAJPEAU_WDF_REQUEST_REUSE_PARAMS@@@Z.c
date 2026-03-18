/*
 * XREFs of ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0020590
 * Callers:
 *     imp_WdfRequestReuse @ 0x1C001FB60 (imp_WdfRequestReuse.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0077068 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::Reuse(FxRequest *this, _WDF_REQUEST_REUSE_PARAMS *ReuseParams, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  unsigned __int8 m_IrpAllocation; // al
  unsigned __int8 v12; // r8
  FxIoTarget *m_Target; // rax
  const void *_a2; // rax
  const void *_a1; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  unsigned __int8 v17; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *v19; // rcx
  _IRP *v20; // rcx
  const void *v21; // rax
  int *v22; // rax
  int *v23; // r8
  unsigned __int64 v24; // rdi
  const void *v25; // rax
  const void *v26; // rax
  int m_Refcnt; // ecx
  const void *v28; // rax
  unsigned int v29; // r8d
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // r8
  char v33; // al
  FxVerifierLock *v34; // rcx
  KIRQL v35; // dl
  unsigned __int8 v36; // r8
  char v37; // al
  FxVerifierLock *v38; // rcx
  unsigned __int8 v39[4]; // [rsp+40h] [rbp-20h] BYREF
  int v40; // [rsp+44h] [rbp-1Ch] BYREF
  int v41; // [rsp+48h] [rbp-18h] BYREF
  int v42; // [rsp+4Ch] [rbp-14h] BYREF
  int v43; // [rsp+50h] [rbp-10h] BYREF
  int v44; // [rsp+54h] [rbp-Ch] BYREF
  int v45; // [rsp+58h] [rbp-8h] BYREF
  unsigned __int8 irql; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int8 v48; // [rsp+B8h] [rbp+58h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(this->m_Globals, (unsigned int)ReuseParams, 9u)
     || m_Globals->FxVerifyDownlevel) )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    if ( (this->m_VerifierFlags & 0x100) != 0 )
    {
      m_Target = this->m_Target;
      if ( m_Target->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      if ( !this->m_ObjectSize || (_a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        _a1 = this;
      WPP_IFR_SF_qq(m_Globals, 2u, 0x10u, 0x2Au, WPP_FxRequest_cpp_Traceguids, _a1, _a2);
      v40 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v40,
        m_Globals->Public.DriverName,
        (const char *)&v40);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v12);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
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
      {
        FxNonPagedObject::Lock(this, &PreviousIrql, a3);
        m_ObjectFlags = this->m_ObjectFlags;
        this->m_VerifierFlags &= ~1u;
        if ( m_ObjectFlags < 0 && (v19 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
          FxVerifierLock::Unlock(v19, PreviousIrql, v17);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
      }
      this->Release(this, (void *)1129464644, 2234, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
  }
  if ( (ReuseParams->Flags & 1) != 0 )
  {
    m_Irp = ReuseParams->NewIrp;
    if ( this->m_IrpAllocation == 1 )
    {
      v20 = this->m_Irp.m_Irp;
      this->m_Irp.m_Irp = m_Irp;
      if ( v20 )
        IoFreeIrp(v20);
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
    if ( !m_Globals->FxVerifierOn )
      return 0LL;
    FxNonPagedObject::Lock(this, v39, a3);
    v37 = this->m_ObjectFlags;
    this->m_VerifierFlags &= ~1u;
    if ( v37 < 0 )
    {
      v38 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
      if ( v38 )
      {
        FxVerifierLock::Unlock(v38, v39[0], v36);
        return 0LL;
      }
    }
    v35 = v39[0];
LABEL_91:
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v35);
    return 0LL;
  }
  if ( !_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)ReuseParams, 0xBu) )
  {
    if ( !this->m_ObjectSize || (v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v21 = this;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Bu, WPP_FxRequest_cpp_Traceguids, v21, -1073741808);
    v22 = &v41;
    v41 = 7567731;
    v23 = &v41;
LABEL_56:
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)v23,
      m_Globals->Public.DriverName,
      (const char *)v22);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  if ( m_Irp )
  {
    if ( this->m_IrpAllocation == 1 )
    {
      if ( !this->m_ObjectSize || (v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v26 = this;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Du, WPP_FxRequest_cpp_Traceguids, v26, -1073741808);
      v22 = &v43;
      v43 = 7567731;
      v23 = &v43;
    }
    else
    {
      m_Refcnt = this->m_Refcnt;
      if ( m_Refcnt == 1 )
      {
        if ( m_Irp->CurrentLocation <= m_Irp->StackCount )
        {
          v29 = _InterlockedIncrement(&this->m_Refcnt);
          if ( SLOBYTE(this->m_ObjectFlags) < 0 )
          {
            Blink = this[-1].m_ForwardProgressList.Blink;
            if ( Blink )
              FxTagTracker::UpdateTagHistory(
                (FxTagTracker *)Blink,
                (void *)0x43524344,
                2387,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                TagAddRef,
                v29);
          }
          this->m_SystemBuffer.m_Buffer = 0LL;
          this->m_OutputBuffer.m_Buffer = 0LL;
          FxRequestBase::ClearFieldsForReuse(this);
          this->m_CanComplete = 1;
          if ( !m_Globals->FxVerifierOn )
            return 0LL;
          FxNonPagedObject::Lock(this, &v48, v31);
          v33 = this->m_ObjectFlags;
          this->m_VerifierFlags |= 1u;
          if ( v33 < 0 )
          {
            v34 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue;
            if ( v34 )
            {
              FxVerifierLock::Unlock(v34, v48, v32);
              return 0LL;
            }
          }
          v35 = v48;
          goto LABEL_91;
        }
        if ( this->m_ObjectSize )
          v24 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v24 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0x2Fu, WPP_FxRequest_cpp_Traceguids, m_Irp, v24, -1073741808);
        v22 = &v45;
        v45 = 7567731;
        v23 = &v45;
      }
      else
      {
        if ( !this->m_ObjectSize || (v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v28 = this;
        WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x2Eu, WPP_FxRequest_cpp_Traceguids, v28, m_Refcnt, -1073741808);
        v22 = &v44;
        v44 = 7567731;
        v23 = &v44;
      }
    }
    goto LABEL_56;
  }
  if ( !this->m_ObjectSize || (v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
    v25 = this;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x2Cu, WPP_FxRequest_cpp_Traceguids, v25, -1073741811);
  v42 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v42,
    m_Globals->Public.DriverName,
    (const char *)&v42);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225485LL;
}
