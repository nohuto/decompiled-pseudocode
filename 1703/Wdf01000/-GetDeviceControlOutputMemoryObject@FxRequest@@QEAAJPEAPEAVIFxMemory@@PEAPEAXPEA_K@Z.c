/*
 * XREFs of ?GetDeviceControlOutputMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000A960
 * Callers:
 *     imp_WdfRequestRetrieveOutputBuffer @ 0x1C0003F50 (imp_WdfRequestRetrieveOutputBuffer.c)
 *     imp_WdfRequestRetrieveOutputMemory @ 0x1C00796E0 (imp_WdfRequestRetrieveOutputMemory.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_Dqqd @ 0x1C007BF64 (WPP_IFR_SF_Dqqd.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4780 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::GetDeviceControlOutputMemoryObject(
        FxRequest *this,
        FxRequestOutputBuffer **MemoryObject,
        void **Buffer,
        unsigned __int64 *Length)
{
  unsigned __int8 v4; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int v8; // edi
  char v9; // bp
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 v14; // rsi
  unsigned int LowPart; // r8d
  PVOID MappedSystemVa; // rax
  int result; // eax
  const void *_a1; // rcx
  unsigned __int16 v19; // r9
  FxDeviceBase *m_DeviceBase; // rdx
  const void *level; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v23; // rdx
  __int64 _a2; // r10
  PVOID v25; // rax
  const void *v26; // rcx
  _MDL *m_Mdl; // rcx
  int v28; // [rsp+40h] [rbp-38h]
  __int64 irql; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  LOBYTE(irql) = 0;
  v8 = 0;
  v9 = 0;
  if ( m_Globals->FxVerifierIO )
  {
    if ( m_Globals->FxVerifierOn )
    {
      result = FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals);
      v8 = result;
      if ( result < 0 )
        return result;
    }
  }
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
  {
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql);
    v4 = irql;
  }
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  v14 = CurrentStackLocation->Parameters.Read.Length;
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    v8 = -1073741789;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    v19 = 34;
LABEL_23:
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x10u, v19, WPP_FxRequest_cpp_Traceguids, _a1, -1073741789);
    goto $Done_1;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (LowPart & 3) != 0 )
  {
    if ( (LowPart & 3) == 3 )
    {
      if ( m_Irp->RequestorMode && CurrentStackLocation->MajorFunction != 15 )
      {
        v8 = -1073741808;
        m_DeviceBase = this->m_DeviceBase;
        level = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          level = 0LL;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v23 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v23 = 0LL;
        WPP_IFR_SF_Dqqd(
          this->m_Globals,
          (unsigned __int8)v23,
          LowPart,
          0x23u,
          WPP_FxRequest_cpp_Traceguids,
          LowPart,
          v23,
          level,
          v28);
        WPP_IFR_SF_(this->m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequest_cpp_Traceguids);
      }
      goto $Done_1;
    }
    v9 = 1;
    if ( (this->m_RequestBaseFlags & 2) == 0 )
    {
      _a2 = (__int64)m_Irp->MdlAddress;
      irql = _a2;
      if ( _a2 )
      {
        if ( (*(_BYTE *)(_a2 + 10) & 5) != 0 )
        {
          v25 = *(PVOID *)(_a2 + 24);
        }
        else
        {
          v25 = MmMapLockedPagesSpecifyCache((PMDL)_a2, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
          _a2 = irql;
        }
        if ( v25 )
        {
          this->m_RequestBaseFlags |= 2u;
          v8 = 0;
          this->m_OutputBuffer.m_Buffer = (void *)_a2;
        }
        else
        {
          v8 = -1073741670;
          v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            v26 = 0LL;
          WPP_IFR_SF_qid(this->m_Globals, 2u, 0x10u, 0x26u, WPP_FxRequest_cpp_Traceguids, v26, _a2, -1073741670);
        }
        goto $Done_1;
      }
      v8 = -1073741789;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      v19 = 37;
      goto LABEL_23;
    }
  }
$Done_1:
  if ( (this->m_RequestBaseStaticFlags & 2) == 0 )
    FxNonPagedObject::Unlock(this, v4);
  if ( v8 >= 0 )
  {
    *MemoryObject = &this->m_OutputBuffer;
    if ( v9 )
    {
      m_Mdl = this->m_OutputBuffer.m_Mdl;
      if ( (m_Mdl->MdlFlags & 5) != 0 )
        MappedSystemVa = m_Mdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
    }
    else
    {
      MappedSystemVa = this->m_OutputBuffer.m_Buffer;
    }
    *Buffer = MappedSystemVa;
    *Length = v14;
  }
  return v8;
}
