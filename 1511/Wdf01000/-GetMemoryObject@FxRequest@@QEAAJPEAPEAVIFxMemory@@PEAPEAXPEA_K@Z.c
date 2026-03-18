/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C0008280
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0005440 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0005620 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C0065710 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C00658A0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0069558 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C006A140 (WPP_IFR_SF_Dqq.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA1A8 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetMemoryObject(
        FxRequest *this,
        FxRequestSystemBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  void **v5; // r15
  int v7; // esi
  unsigned int Options; // edi
  char v9; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 MajorFunction; // r12
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ecx
  PVOID MappedSystemVa; // rax
  int IsNotCompleted; // eax
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int64 _a2; // rcx
  const void *_a1; // rax
  const void *v22; // rdx
  FxDeviceBase *v23; // rax
  const void *v24; // rax
  const void *v25; // rax
  const void *v26; // rdx
  FxDeviceBase *v27; // rax
  const void *v28; // rax
  const void *v29; // rax
  __int64 MdlAddress; // r12
  const void *v31; // rax
  PVOID v32; // rax
  const void *v33; // rax
  _MDL *v34; // rcx
  _MDL *m_Mdl; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+40h] [rbp-38h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  v5 = Buffer;
  LOBYTE(Buffer) = 0;
  v7 = 0;
  irql = 0;
  Options = 0;
  v9 = 0;
  m_Globals = this->m_Globals;
  MajorFunction = this->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      LODWORD(Buffer) = irql;
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
        if ( this->m_ObjectSize )
          _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          _a2 = 0LL;
        if ( m_DeviceBase->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x19u, WPP_FxRequest_cpp_Traceguids, _a1, _a2, -1073741808);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x1Au, WPP_FxRequest_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
        LODWORD(Buffer) = irql;
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Buffer);
    LODWORD(Buffer) = irql;
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
      if ( this->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v25, -1073741789);
      LOBYTE(Buffer) = irql;
      goto $Done_2;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3
      && m_Irp->RequestorMode
      && MajorFunction != 15 )
    {
      v7 = -1073741808;
      if ( this->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      v27 = this->m_DeviceBase;
      if ( v27->m_ObjectSize )
        v28 = (const void *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v28 = 0LL;
      WPP_IFR_SF_Dqqd(
        this->m_Globals,
        (unsigned __int8)v26,
        (unsigned int)Buffer,
        0x1Cu,
        WPP_FxRequest_cpp_Traceguids,
        LowPart,
        v28,
        v26,
        v37);
      WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
      LOBYTE(Buffer) = irql;
      goto $Done_2;
    }
    goto LABEL_7;
  }
  if ( MajorFunction != 3 && MajorFunction != 4 )
  {
    if ( MajorFunction != 15 )
    {
      if ( this->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      v23 = this->m_DeviceBase;
      if ( v23->m_ObjectSize )
        v24 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v24 = 0LL;
      WPP_IFR_SF_Dqq(
        this->m_Globals,
        (unsigned __int8)v22,
        (unsigned int)Buffer,
        (unsigned __int16)Length,
        traceGuid,
        MajorFunction,
        v24,
        v22);
      FxVerifierDbgBreakPoint(this->m_Globals);
      LOBYTE(Buffer) = irql;
      v7 = -1073741808;
      goto $Done_2;
    }
    goto LABEL_5;
  }
  m_Irp = this->m_Irp.m_Irp;
  Options = m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( this->m_DeviceBase[1].m_Refcnt == 3 )
    v9 = 1;
LABEL_7:
  if ( Options )
  {
    if ( v9 && (this->m_RequestBaseFlags & 1) == 0 )
    {
      MdlAddress = (__int64)m_Irp->MdlAddress;
      if ( MdlAddress )
      {
        if ( (*(_BYTE *)(MdlAddress + 10) & 5) != 0 )
        {
          v32 = *(PVOID *)(MdlAddress + 24);
        }
        else
        {
          v32 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
          LOBYTE(Buffer) = irql;
        }
        if ( v32 )
        {
          v34 = this->m_Irp.m_Irp->MdlAddress;
          this->m_RequestBaseFlags |= 1u;
          this->m_SystemBuffer.m_Buffer = v34;
        }
        else
        {
          v7 = -1073741670;
          if ( this->m_ObjectSize )
            v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v33 = 0LL;
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequest_cpp_Traceguids, v33, MdlAddress, -1073741670);
          LOBYTE(Buffer) = irql;
        }
      }
      else
      {
        v7 = -1073741789;
        if ( this->m_ObjectSize )
          v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v31 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v31, -1073741789);
        LOBYTE(Buffer) = irql;
      }
    }
  }
  else
  {
    v7 = -1073741789;
    if ( this->m_ObjectSize )
      v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v29 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v29, -1073741789);
    LOBYTE(Buffer) = irql;
  }
$Done_2:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
    FxNonPagedObject::Unlock(this, (unsigned __int8)Buffer, (unsigned __int8)Buffer);
  if ( v7 >= 0 )
  {
    *MemoryObject = &this->m_SystemBuffer;
    if ( v9 )
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
    *v5 = MappedSystemVa;
    *Length = Options;
  }
  return (unsigned int)v7;
}
