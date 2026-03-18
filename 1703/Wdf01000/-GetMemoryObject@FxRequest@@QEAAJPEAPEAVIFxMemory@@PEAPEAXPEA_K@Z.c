/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000AA50
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003F50 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0004130 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C0079540 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C00796E0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C007BF64 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C007C748 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v5; // r14
  int v7; // esi
  bool v8; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned int Options; // edi
  unsigned __int8 MajorFunction; // r12
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // r8d
  PVOID MappedSystemVa; // rax
  int IsNotCompleted; // eax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 _a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxDeviceBase *v23; // rdx
  const void *v24; // rcx
  unsigned __int16 v25; // ax
  const void *v26; // rdx
  unsigned __int16 v27; // r9
  const void *v28; // rcx
  FxDeviceBase *v29; // rdx
  const void *v30; // rcx
  unsigned __int16 v31; // ax
  const void *v32; // rdx
  __int64 MdlAddress; // r12
  PVOID v34; // rax
  const void *v35; // rcx
  _MDL *v36; // rcx
  _MDL *m_Mdl; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v39; // [rsp+40h] [rbp-38h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v5 = Length;
  LOBYTE(Length) = 0;
  irql = 0;
  v7 = 0;
  v8 = 0;
  m_Globals = this->m_Globals;
  Options = 0;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      LOWORD(Length) = irql;
      v7 = IsNotCompleted;
      if ( IsNotCompleted < 0 )
        goto $Done_2;
    }
    if ( this->m_Irp.m_Irp->RequestorMode == 1 && (unsigned __int8)(MajorFunction - 3) <= 1u )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase[1].m_Refcnt == 1 )
      {
        v7 = -1073741808;
        _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        if ( !this->m_ObjectSize )
          _a2 = 0LL;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741808);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
        LOWORD(Length) = irql;
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql);
    LOWORD(Length) = irql;
  }
  if ( MajorFunction == 14 )
  {
LABEL_5:
    m_Irp = this->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( !Options )
    {
      v7 = -1073741789;
      v27 = 27;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      goto LABEL_54;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3
      && m_Irp->RequestorMode
      && MajorFunction != 15 )
    {
      v7 = -1073741808;
      v29 = this->m_DeviceBase;
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v31 = v29->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v30 = 0LL;
      v32 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v31 )
        v32 = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)v32,
        LowPart,
        0x1Cu,
        WPP_FxRequest_cpp_Traceguids,
        LowPart,
        v32,
        v30,
        v39);
      WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
      LOBYTE(Length) = irql;
      goto $Done_2;
    }
    goto LABEL_7;
  }
  if ( MajorFunction != 3 && MajorFunction != 4 )
  {
    if ( MajorFunction != 15 )
    {
      v23 = this->m_DeviceBase;
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v25 = v23->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      v26 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v25 )
        v26 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v26,
        MajorFunction,
        (unsigned __int16)Length,
        traceGuid,
        MajorFunction,
        v26,
        v24);
      FxVerifierDbgBreakPoint(this->m_Globals);
      LOBYTE(Length) = irql;
      v7 = -1073741808;
      goto $Done_2;
    }
    goto LABEL_5;
  }
  m_Irp = this->m_Irp.m_Irp;
  Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  v8 = this->m_DeviceBase[1].m_Refcnt == 3;
LABEL_7:
  if ( !Options )
  {
    v7 = -1073741789;
    v27 = 31;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v28 = 0LL;
    goto LABEL_54;
  }
  if ( !v8 || (this->m_RequestBaseFlags & 1) != 0 )
    goto $Done_2;
  MdlAddress = (__int64)m_Irp->MdlAddress;
  if ( !MdlAddress )
  {
    v7 = -1073741789;
    v27 = 32;
    v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v28 = 0LL;
LABEL_54:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, v27, WPP_FxRequest_cpp_Traceguids, v28, -1073741789);
    LOBYTE(Length) = irql;
    goto $Done_2;
  }
  if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
  {
    v34 = *(PVOID *)(MdlAddress + 24);
  }
  else
  {
    v34 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    LOBYTE(Length) = irql;
  }
  if ( v34 )
  {
    v36 = this->m_Irp.m_Irp->MdlAddress;
    this->m_RequestBaseFlags |= 1u;
    this->m_SystemBuffer.m_Buffer = v36;
  }
  else
  {
    v7 = -1073741670;
    v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v35 = 0LL;
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v35, MdlAddress, -1073741670);
    LOBYTE(Length) = irql;
  }
$Done_2:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, (unsigned __int8)Length);
  if ( v7 >= 0 )
  {
    *MemoryObject = &this->m_SystemBuffer;
    if ( v8 )
    {
      m_Mdl = this->m_SystemBuffer.m_Mdl;
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        MappedSystemVa = m_Mdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    else
    {
      MappedSystemVa = this->m_SystemBuffer.m_Buffer;
    }
    *Buffer = MappedSystemVa;
    *v5 = Options;
  }
  return (unsigned int)v7;
}
