/*
 * XREFs of ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C00203F0
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003710 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveInputBuffer @ 0x1C0020290 (imp_WdfRequestRetrieveInputBuffer.c)
 *     imp_WdfRequestRetrieveInputMemory @ 0x1C006F210 (imp_WdfRequestRetrieveInputMemory.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C006F460 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C0074840 (WPP_IFR_SF_Dqqd.c)
 *     WPP_IFR_SF_Dqq @ 0x1C0075678 (WPP_IFR_SF_Dqq.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D1360 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
  unsigned __int8 MajorFunction; // r13
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // ecx
  PVOID MappedSystemVa; // rax
  int IsNotCompleted; // eax
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int64 _a2; // rcx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v22; // rax
  __int64 v23; // rax
  const void *v24; // rdx
  FxDeviceBase *v25; // rax
  const void *v26; // rax
  _FX_DRIVER_GLOBALS *v27; // rax
  __int64 v28; // rax
  const void *v29; // rax
  const void *v30; // rdx
  FxDeviceBase *v31; // rax
  const void *v32; // rax
  const void *v33; // rax
  __int64 MdlAddress; // r13
  const void *v35; // rax
  PVOID v36; // rax
  const void *v37; // rax
  _MDL *v38; // rcx
  FxVerifierLock *m_ForwardProgressQueue; // rcx
  _MDL *m_Mdl; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  int v42; // [rsp+40h] [rbp-48h]
  char v43[16]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF

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
        goto $Done_14;
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
        v22 = this->m_Globals;
        *(_DWORD *)v43 = 7567731;
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
          v22->Public.DriverName,
          v43,
          v22->Public.DriverName,
          v43);
        if ( *(_BYTE *)(v23 + 318) )
          DbgBreakPoint();
        LODWORD(Buffer) = irql;
      }
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Buffer);
    LODWORD(Buffer) = irql;
  }
  switch ( MajorFunction )
  {
    case 0xEu:
      goto LABEL_5;
    case 3u:
    case 4u:
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
              v36 = *(PVOID *)(MdlAddress + 24);
            }
            else
            {
              v36 = MmMapLockedPagesSpecifyCache((PMDL)MdlAddress, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
              LOBYTE(Buffer) = irql;
            }
            if ( v36 )
            {
              v38 = this->m_Irp.m_Irp->MdlAddress;
              this->m_RequestBaseFlags |= 1u;
              this->m_SystemBuffer.m_Buffer = v38;
            }
            else
            {
              v7 = -1073741670;
              if ( this->m_ObjectSize )
                v37 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v37 = 0LL;
              WPP_IFR_SF_qid(
                this->m_Globals,
                2u,
                0x10u,
                0x21u,
                WPP_FxRequest_cpp_Traceguids,
                v37,
                MdlAddress,
                -1073741670);
              LOBYTE(Buffer) = irql;
            }
          }
          else
          {
            v7 = -1073741789;
            if ( this->m_ObjectSize )
              v35 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v35 = 0LL;
            WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x20u, WPP_FxRequest_cpp_Traceguids, v35, -1073741789);
            LOBYTE(Buffer) = irql;
          }
        }
      }
      else
      {
        v7 = -1073741789;
        if ( this->m_ObjectSize )
          v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v33 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequest_cpp_Traceguids, v33, -1073741789);
        LOBYTE(Buffer) = irql;
      }
      goto $Done_14;
    case 0xFu:
LABEL_5:
      m_Irp = this->m_Irp.m_Irp;
      CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
      Options = CurrentStackLocation->Parameters.Create.Options;
      if ( !Options )
      {
        v7 = -1073741789;
        if ( this->m_ObjectSize )
          v29 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v29 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, 0x1Bu, WPP_FxRequest_cpp_Traceguids, v29, -1073741789);
        LOBYTE(Buffer) = irql;
        goto $Done_14;
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( (CurrentStackLocation->Parameters.DeviceIoControl.IoControlCode & 3) == 3
        && m_Irp->RequestorMode
        && MajorFunction != 15 )
      {
        v7 = -1073741808;
        if ( this->m_ObjectSize )
          v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v30 = 0LL;
        v31 = this->m_DeviceBase;
        if ( v31->m_ObjectSize )
          v32 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v32 = 0LL;
        WPP_IFR_SF_Dqqd(
          this->m_Globals,
          (unsigned __int8)v30,
          (unsigned int)Buffer,
          0x1Cu,
          WPP_FxRequest_cpp_Traceguids,
          LowPart,
          v32,
          v30,
          v42);
        WPP_IFR_SF_d(this->m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequest_cpp_Traceguids, -1073741808);
        LOBYTE(Buffer) = irql;
        goto $Done_14;
      }
      goto LABEL_7;
  }
  if ( this->m_ObjectSize )
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v24 = 0LL;
  v25 = this->m_DeviceBase;
  if ( v25->m_ObjectSize )
    v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v26 = 0LL;
  WPP_IFR_SF_Dqq(
    this->m_Globals,
    (unsigned __int8)v24,
    (unsigned int)Buffer,
    (unsigned __int16)Length,
    traceGuid,
    MajorFunction,
    v26,
    v24);
  v27 = this->m_Globals;
  *(_DWORD *)v43 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    v27->Public.DriverName,
    v43,
    v27->Public.DriverName,
    v43);
  if ( *(_BYTE *)(v28 + 318) )
    DbgBreakPoint();
  LOBYTE(Buffer) = irql;
  v7 = -1073741808;
$Done_14:
  if ( (this->m_RequestBaseStaticFlags & 1) == 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (m_ForwardProgressQueue = (FxVerifierLock *)this[-1].m_ForwardProgressQueue) != 0LL )
    {
      FxVerifierLock::Unlock(m_ForwardProgressQueue, (unsigned __int8)Buffer, (unsigned __int8)Buffer);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, (KIRQL)Buffer);
    }
  }
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
