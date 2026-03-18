/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00774C0
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0065CE0 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C0075880 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqDd @ 0x1C006E4EC (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0078138 (WPP_IFR_SF_Dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007E48C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C91C8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *v5; // rbx
  unsigned int Length; // ebp
  void *MasterIrp; // r12
  unsigned int LowPart; // r8d
  unsigned int v10; // esi
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a2; // rcx
  const void *v14; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v16; // rax
  _MDL *v17; // rax
  unsigned __int16 v18; // r9
  _MDL *MdlAddress; // rax
  _MDL *m_AllocatedMdl; // rax
  _MDL *Debug; // rax
  _MDL *v22; // rsi
  const void *v23; // rax
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // r8
  unsigned __int8 v27; // dl
  const void *v28; // rdi
  unsigned __int16 v29; // r9
  unsigned __int8 _a1; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v5 = 0LL;
  Length = 0;
  MasterIrp = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v10 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_45;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) > 1u )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    v10 = -1073741808;
    WPP_IFR_SF_qDd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      0x10u,
      0x14u,
      WPP_FxRequestKm_cpp_Traceguids,
      _a2,
      CurrentStackLocation->MajorFunction,
      0xC0000010);
LABEL_44:
    *pMdl = 0LL;
    goto LABEL_45;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) == 0 )
  {
    MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( !MasterIrp || !Length )
      goto LABEL_47;
    m_AllocatedMdl = this->m_AllocatedMdl;
    if ( !m_AllocatedMdl )
    {
      if ( m_Globals->FxVerifierOn )
        Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Length, _a1, 0, retaddr);
      else
        Debug = IoAllocateMdl(MasterIrp, Length, 0, 0, 0LL);
      v22 = Debug;
      if ( Debug )
      {
        MmBuildMdlForNonPagedPool(Debug);
        v24 = irql;
        this->m_AllocatedMdl = v22;
        *pMdl = v22;
        FxNonPagedObject::Unlock(this, v24, v25);
        return 0LL;
      }
      if ( this->m_ObjectSize )
        v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v23 = 0LL;
      v10 = -1073741670;
      WPP_IFR_SF_qqDd(m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequestKm_cpp_Traceguids, v23, MasterIrp, Length, -1073741670);
      goto LABEL_44;
    }
    *pMdl = m_AllocatedMdl;
    goto LABEL_35;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 1 )
  {
    MdlAddress = m_Irp->MdlAddress;
    *pMdl = MdlAddress;
    if ( !MdlAddress )
    {
      v10 = -1073741789;
      if ( this->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = 21;
      goto LABEL_26;
    }
LABEL_35:
    v10 = 0;
    goto LABEL_45;
  }
  if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) != 2 )
  {
    if ( (CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3) == 3 )
    {
      if ( this->m_ObjectSize )
        v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v14 = 0LL;
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_Dqqd(
        m_Globals,
        (unsigned __int8)CurrentStackLocation,
        LowPart,
        0x17u,
        WPP_FxRequestKm_cpp_Traceguids,
        LowPart,
        v16,
        v14,
        _a4);
      WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
      v10 = -1073741808;
      goto LABEL_44;
    }
LABEL_47:
    v27 = irql;
    *pMdl = 0LL;
    FxNonPagedObject::Unlock(this, v27, LowPart);
    v10 = -1073741789;
    if ( MasterIrp )
    {
      if ( Length )
        return v10;
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      v29 = 26;
    }
    else
    {
      if ( this->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      v29 = 25;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v29, WPP_FxRequestKm_cpp_Traceguids, v28, -1073741789);
    return v10;
  }
  v17 = m_Irp->MdlAddress;
  *pMdl = v17;
  if ( v17 )
    goto LABEL_35;
  v10 = -1073741789;
  if ( this->m_ObjectSize )
    v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v18 = 22;
LABEL_26:
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v18, WPP_FxRequestKm_cpp_Traceguids, v5, -1073741789);
LABEL_45:
  FxNonPagedObject::Unlock(this, irql, LowPart);
  return v10;
}
