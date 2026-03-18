/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0073CF0
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C005EE30 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C006F350 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C006F5A0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0074840 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0074958 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C0074AB4 (WPP_IFR_SF_qDqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007C128 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int LowPart; // r8d
  int v7; // esi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _IRP *m_Irp; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  FxDeviceBase *v12; // rcx
  int m_Refcnt; // r10d
  void *MasterIrp; // r15
  unsigned int Options; // esi
  const void *id; // rcx
  const void *level; // rdx
  unsigned __int8 v18; // r8
  FxVerifierLock *v19; // rcx
  _MDL *MdlAddress; // rax
  unsigned int v21; // r14d
  const void *v22; // rax
  FxVerifierLock *v23; // rcx
  unsigned __int64 v24; // rax
  const void *v25; // rcx
  unsigned __int8 v26; // r8
  const void *v27; // rax
  const void *v28; // rcx
  unsigned __int8 v29; // r8
  FxVerifierLock *v30; // rcx
  const void *v31; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v33; // rax
  FxVerifierLock *v34; // rcx
  _MDL *m_AllocatedMdl; // rax
  FxVerifierLock *v36; // rcx
  _MDL *Debug; // rax
  _MDL *v38; // r12
  unsigned __int8 v39; // r8
  FxVerifierLock *v40; // rcx
  FxVerifierLock *v41; // rcx
  const void *v42; // rbx
  unsigned __int16 v43; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-30h]
  int globals; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int8 irql; // [rsp+90h] [rbp+40h] BYREF
  int v48; // [rsp+A0h] [rbp+50h]

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v7 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( v7 < 0 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      {
        FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, LowPart);
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      }
      return (unsigned int)v7;
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  LOBYTE(LowPart) = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Options = CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_75;
    }
    if ( this->m_ObjectSize )
      v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v31 = 0LL;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v33 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v33 = 0LL;
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      LowPart,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      LowPart,
      v33,
      v31,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_69:
    *pMdl = 0LL;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v34 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v34, irql, v26);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 3221225488LL;
  }
  v12 = this->m_DeviceBase;
  m_Refcnt = v12[1].m_Refcnt;
  if ( m_Refcnt != 2 )
  {
    if ( m_Refcnt == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v21 = 0;
      }
      else
      {
        v21 = -1073741789;
        if ( this->m_ObjectSize )
          v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v22 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v22, -1073741789);
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
        FxVerifierLock::Unlock(v23, irql, LowPart);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      return v21;
    }
    if ( m_Refcnt != 1 )
    {
      if ( this->m_ObjectSize )
        v27 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      if ( v12->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_dqqd(
        m_Globals,
        (unsigned __int8)CurrentStackLocation,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        m_Refcnt,
        v28,
        v27,
        -1073741595);
      v48 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      *pMdl = 0LL;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v30 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
        FxVerifierLock::Unlock(v30, irql, v29);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      return 3221225701LL;
    }
    if ( this->m_ObjectSize )
      v24 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v24 = 0LL;
    if ( v12->m_ObjectSize )
      v25 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v25 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v25, v24, -1073741808);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    v48 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    goto LABEL_69;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (_BYTE)LowPart != 3 && (_BYTE)LowPart != 4 )
  {
    if ( v12->m_ObjectSize )
      id = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    if ( this->m_ObjectSize )
      level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      level = 0LL;
    WPP_IFR_SF_qDqd(
      m_Globals,
      (unsigned __int8)level,
      LowPart,
      0xEu,
      traceGuid,
      level,
      (unsigned __int8)LowPart,
      id,
      globals);
    *pMdl = 0LL;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v19 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v19, irql, v18);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 3221225485LL;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_75:
  if ( !MasterIrp || !Options )
  {
    *pMdl = 0LL;
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v41 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v41, irql, LowPart);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    v21 = -1073741789;
    if ( MasterIrp )
    {
      if ( Options )
        return v21;
      if ( this->m_ObjectSize )
        v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v42 = 0LL;
      v43 = 18;
    }
    else
    {
      if ( this->m_ObjectSize )
        v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v42 = 0LL;
      v43 = 17;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v43, WPP_FxRequestKm_cpp_Traceguids, v42, -1073741789);
    return v21;
  }
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    goto LABEL_79;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
  v38 = Debug;
  if ( Debug )
  {
    MmBuildMdlForNonPagedPool(Debug);
    this->m_AllocatedMdl = v38;
    *pMdl = v38;
LABEL_79:
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v36 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      FxVerifierLock::Unlock(v36, irql, LowPart);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 0LL;
  }
  WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, -1073741670);
  *pMdl = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v40 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    FxVerifierLock::Unlock(v40, irql, v39);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return 3221225626LL;
}
