/*
 * XREFs of ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0077818
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0065CE0 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveInputWdmMdl @ 0x1C00756E0 (imp_WdfRequestRetrieveInputWdmMdl.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0075880 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0078138 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_dqqd @ 0x1C0078250 (WPP_IFR_SF_dqqd.c)
 *     WPP_IFR_SF_qDqd @ 0x1C00783AC (WPP_IFR_SF_qDqd.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007E48C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int LowPart; // r8d
  const void *v7; // rbx
  int v8; // esi
  _IRP *m_Irp; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  FxDeviceBase *v11; // rcx
  int m_Refcnt; // r10d
  void *MasterIrp; // r15
  unsigned int Options; // esi
  const void *id; // rcx
  const void *level; // rdx
  _MDL *MdlAddress; // rax
  int v18; // r14d
  unsigned __int64 v19; // rax
  const void *v20; // rcx
  const void *v21; // rax
  const void *v22; // rcx
  int v23; // r14d
  const void *v24; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v26; // rax
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v29; // r14
  unsigned __int8 v31; // dl
  unsigned __int8 v32; // r8
  unsigned __int8 v33; // dl
  const void *v34; // rdi
  unsigned __int16 v35; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int globals; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, a3);
  v7 = 0LL;
  if ( m_Globals->FxVerifierIO )
  {
    v8 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( v8 < 0 )
      goto LABEL_62;
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
      goto LABEL_51;
    }
    if ( this->m_ObjectSize )
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v26 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v26 = 0LL;
    WPP_IFR_SF_Dqqd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      LowPart,
      0xAu,
      WPP_FxRequestKm_cpp_Traceguids,
      LowPart,
      v26,
      v24,
      globals);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequestKm_cpp_Traceguids);
LABEL_33:
    v8 = -1073741808;
LABEL_61:
    *pMdl = 0LL;
    goto LABEL_62;
  }
  v11 = this->m_DeviceBase;
  m_Refcnt = v11[1].m_Refcnt;
  if ( m_Refcnt != 2 )
  {
    if ( m_Refcnt == 3 )
    {
      MdlAddress = m_Irp->MdlAddress;
      *pMdl = MdlAddress;
      if ( MdlAddress )
      {
        v18 = 0;
      }
      else
      {
        v18 = -1073741789;
        if ( this->m_ObjectSize )
          v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0xDu, WPP_FxRequestKm_cpp_Traceguids, v7, -1073741789);
      }
      v8 = v18;
      goto LABEL_62;
    }
    if ( m_Refcnt != 1 )
    {
      if ( this->m_ObjectSize )
        v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v21 = 0LL;
      if ( v11->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      v23 = -1073741595;
      WPP_IFR_SF_dqqd(
        m_Globals,
        (unsigned __int8)CurrentStackLocation,
        0x10u,
        0x10u,
        WPP_FxRequestKm_cpp_Traceguids,
        m_Refcnt,
        v22,
        v21,
        -1073741595);
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_60;
    }
    if ( this->m_ObjectSize )
      v19 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v19 = 0LL;
    if ( v11->m_ObjectSize )
      v20 = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequestKm_cpp_Traceguids, v20, v19, -1073741808);
    WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0xFu, WPP_FxRequestKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_33;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  if ( (_BYTE)LowPart != 3 && (_BYTE)LowPart != 4 )
  {
    if ( v11->m_ObjectSize )
      id = (const void *)((unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
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
    v8 = -1073741811;
    goto LABEL_61;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
LABEL_51:
  if ( !MasterIrp || !Options )
  {
    v33 = irql;
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v33, LowPart);
    if ( MasterIrp )
    {
      if ( Options )
        return 3221225507LL;
      if ( this->m_ObjectSize )
        v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v34 = 0LL;
      v35 = 18;
    }
    else
    {
      if ( this->m_ObjectSize )
        v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v34 = 0LL;
      v35 = 17;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v35, WPP_FxRequestKm_cpp_Traceguids, v34, -1073741789);
    return 3221225507LL;
  }
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
    v8 = 0;
LABEL_62:
    FxNonPagedObject::Unlock(this, irql, LowPart);
    return (unsigned int)v8;
  }
  if ( m_Globals->FxVerifierOn )
    Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Options, (unsigned __int8)traceGuid, 0, retaddr);
  else
    Debug = IoAllocateMdl(MasterIrp, Options, 0, 0, 0LL);
  v29 = Debug;
  if ( !Debug )
  {
    v23 = -1073741670;
    WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x13u, WPP_FxRequestKm_cpp_Traceguids, MasterIrp, Options, -1073741670);
LABEL_60:
    v8 = v23;
    goto LABEL_61;
  }
  MmBuildMdlForNonPagedPool(Debug);
  v31 = irql;
  this->m_AllocatedMdl = v29;
  *pMdl = v29;
  FxNonPagedObject::Unlock(this, v31, v32);
  return 0LL;
}
