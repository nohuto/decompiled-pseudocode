/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C007B644
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0069450 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C0079620 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C00797D0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C007BF64 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C007C080 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C007C1E4 (WPP_IFR_SF_qDqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C00829FC (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned int LowPart; // r8d
  int v7; // esi
  _IRP *m_Irp; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // dl
  FxDeviceBase *v11; // r10
  void *MasterIrp; // rbp
  unsigned int Options; // esi
  unsigned __int16 v14; // ax
  unsigned int flags; // r8d
  const void *id; // r10
  const void *level; // rdx
  _MDL *MdlAddress; // rax
  int v19; // r14d
  const void *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int16 v22; // ax
  const void *v23; // r10
  const void *v24; // rcx
  unsigned __int16 v25; // ax
  const void *v26; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  const void *v28; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v30; // rdx
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v33; // r15
  unsigned __int8 v35; // dl
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // dl
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // ax
  const void *v40; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v7 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( v7 < 0 )
      goto LABEL_53;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) <= 1u )
  {
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (LowPart & 3) == 0 || (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) - 1 < 2 )
    {
      MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
      Options = CurrentStackLocation->Parameters.Create.Options;
      goto LABEL_43;
    }
    m_DeviceBase = this->m_DeviceBase;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v28 = 0LL;
    v30 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v30 = 0LL;
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)v30,
      LowPart,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      LowPart,
      v30,
      v28,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_29:
    v7 = -1073741808;
LABEL_52:
    *pMdl = 0LL;
    goto LABEL_53;
  }
  v11 = this->m_DeviceBase;
  LowPart = v11[1].m_Refcnt;
  if ( LowPart != 2 )
  {
    if ( LowPart == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v19 = 0;
      }
      else
      {
        v19 = -1073741789;
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v20 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v20, -1073741789);
      }
      v7 = v19;
      goto LABEL_53;
    }
    if ( LowPart != 1 )
    {
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v25 = v11->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      v26 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25 )
        v26 = 0LL;
      WPP_IFR_SF_dqqd(
        m_Globals,
        MajorFunction,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        LowPart,
        v26,
        v24,
        -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
      v7 = -1073741595;
      goto LABEL_52;
    }
    v21 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v22 = v11->m_ObjectSize;
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    v23 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22 )
      v23 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v23, v21, -1073741808);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_29;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( MajorFunction != 3 && MajorFunction != 4 )
  {
    v14 = v11->m_ObjectSize;
    flags = MajorFunction;
    id = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      id = 0LL;
    level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      level = 0LL;
    WPP_IFR_SF_qDqd(m_Globals, (unsigned __int8)level, flags, 0xEu, traceGuid, level, flags, id, globals);
    v7 = -1073741811;
    goto LABEL_52;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_43:
  if ( !MasterIrp || !Options )
  {
    v37 = irql;
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v37, LowPart);
    if ( MasterIrp )
    {
      if ( Options )
        return 3221225507LL;
      v38 = 18;
    }
    else
    {
      v38 = 17;
    }
    v39 = this->m_ObjectSize;
    v40 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v39 )
      v40 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v38, WPP_FxRequestKm_cpp_Traceguids, v40, -1073741789);
    return 3221225507LL;
  }
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    v7 = 0;
LABEL_53:
    FxNonPagedObject::Unlock(this, irql, LowPart);
    return (unsigned int)v7;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
  v33 = Debug;
  if ( !Debug )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, -1073741670);
    v7 = -1073741670;
    goto LABEL_52;
  }
  MmBuildMdlForNonPagedPool(Debug);
  v35 = irql;
  this->m_AllocatedMdl = v33;
  *pMdl = v33;
  FxNonPagedObject::Unlock(this, v35, v36);
  return 0LL;
}
