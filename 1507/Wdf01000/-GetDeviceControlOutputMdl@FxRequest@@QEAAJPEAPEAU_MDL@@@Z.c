/*
 * XREFs of ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C00738A0
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C005EE30 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 *     imp_WdfRequestRetrieveOutputWdmMdl @ 0x1C006F5A0 (imp_WdfRequestRetrieveOutputWdmMdl.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qqDd @ 0x1C005DE64 (WPP_IFR_SF_qqDd.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0074840 (WPP_IFR_SF_Dqqd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007C128 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetDeviceControlOutputMdl(FxRequest *this, _MDL **pMdl, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int Length; // r15d
  void *MasterIrp; // r12
  unsigned __int8 v8; // r8
  int v9; // esi
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const void *_a2; // rcx
  unsigned __int8 v15; // r8
  FxVerifierLock *v16; // rcx
  unsigned int LowPart; // r8d
  const void *v18; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v20; // rax
  _MDL *v21; // rax
  unsigned int v22; // edi
  const void *v23; // rax
  unsigned __int16 v24; // r9
  FxVerifierLock *v25; // rcx
  _MDL *MdlAddress; // rax
  _MDL *m_AllocatedMdl; // rax
  FxVerifierLock *v28; // rcx
  _MDL *Debug; // rax
  _MDL *v30; // rsi
  const void *v31; // rax
  unsigned __int8 v32; // r8
  FxVerifierLock *v33; // rcx
  FxVerifierLock *v34; // rcx
  const void *v35; // rbx
  unsigned __int16 v36; // r9
  unsigned __int8 _a1; // [rsp+20h] [rbp-30h]
  int _a4; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  Length = 0;
  MasterIrp = 0LL;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( m_Globals->FxVerifierIO )
  {
    v9 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) : 0;
    if ( v9 < 0 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
      {
        FxVerifierLock::Unlock(m_ForwardProgressQueue, irql, v8);
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      }
      return (unsigned int)v9;
    }
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 14) > 1u )
  {
    if ( this->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qDd(
      m_Globals,
      (unsigned __int8)CurrentStackLocation,
      0x10u,
      0x14u,
      WPP_FxRequestKm_cpp_Traceguids,
      _a2,
      CurrentStackLocation->MajorFunction,
      0xC0000010);
    goto LABEL_16;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 0 )
  {
    switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
    {
      case 1u:
        MdlAddress = m_Irp->MdlAddress;
        *pMdl = MdlAddress;
        if ( !MdlAddress )
        {
          v22 = -1073741789;
          if ( this->m_ObjectSize )
            v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v23 = 0LL;
          v24 = 21;
          goto LABEL_37;
        }
        break;
      case 2u:
        v21 = m_Irp->MdlAddress;
        *pMdl = v21;
        if ( !v21 )
        {
          v22 = -1073741789;
          if ( this->m_ObjectSize )
            v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v23 = 0LL;
          v24 = 22;
LABEL_37:
          WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v24, WPP_FxRequestKm_cpp_Traceguids, v23, -1073741789);
LABEL_39:
          if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v25 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
            FxVerifierLock::Unlock(v25, irql, LowPart);
          else
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
          return v22;
        }
        break;
      case 3u:
        if ( this->m_ObjectSize )
          v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v18 = 0LL;
        m_DeviceBase = this->m_DeviceBase;
        if ( m_DeviceBase->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_Dqqd(
          m_Globals,
          (unsigned __int8)CurrentStackLocation,
          LowPart,
          0x17u,
          WPP_FxRequestKm_cpp_Traceguids,
          LowPart,
          v20,
          v18,
          _a4);
        WPP_IFR_SF_(m_Globals, 2u, 0x10u, 0x18u, WPP_FxRequestKm_cpp_Traceguids);
LABEL_16:
        *pMdl = 0LL;
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v16 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
          FxVerifierLock::Unlock(v16, irql, v15);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        return 3221225488LL;
      default:
LABEL_70:
        *pMdl = 0LL;
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v34 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
          FxVerifierLock::Unlock(v34, irql, LowPart);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        v22 = -1073741789;
        if ( MasterIrp )
        {
          if ( Length )
            return v22;
          if ( this->m_ObjectSize )
            v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v35 = 0LL;
          v36 = 26;
        }
        else
        {
          if ( this->m_ObjectSize )
            v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v35 = 0LL;
          v36 = 25;
        }
        WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, v36, WPP_FxRequestKm_cpp_Traceguids, v35, -1073741789);
        return v22;
    }
    v22 = 0;
    goto LABEL_39;
  }
  MasterIrp = m_Irp->AssociatedIrp.MasterIrp;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !MasterIrp || !Length )
    goto LABEL_70;
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    *pMdl = m_AllocatedMdl;
  }
  else
  {
    if ( m_Globals->FxVerifierOn )
      Debug = FxMdlAllocateDebug(m_Globals, this, MasterIrp, Length, _a1, 0, retaddr);
    else
      Debug = IoAllocateMdl(MasterIrp, Length, 0, 0, 0LL);
    v30 = Debug;
    if ( !Debug )
    {
      if ( this->m_ObjectSize )
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v31 = 0LL;
      WPP_IFR_SF_qqDd(m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequestKm_cpp_Traceguids, v31, MasterIrp, Length, -1073741670);
      *pMdl = 0LL;
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v33 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
        FxVerifierLock::Unlock(v33, irql, v32);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      return 3221225626LL;
    }
    MmBuildMdlForNonPagedPool(Debug);
    this->m_AllocatedMdl = v30;
    *pMdl = v30;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v28 = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    FxVerifierLock::Unlock(v28, irql, LowPart);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return 0LL;
}
