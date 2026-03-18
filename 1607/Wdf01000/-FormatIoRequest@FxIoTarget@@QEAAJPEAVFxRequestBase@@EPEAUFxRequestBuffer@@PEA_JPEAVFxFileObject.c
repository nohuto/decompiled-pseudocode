/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085774
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0081B00 (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C0081CD4 (FxIoTargetSendIo.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00012B4 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000CF00 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00296B8 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0029720 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C002D8D4 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0063190 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?SetBufferAndLength@FxIoContext@@QEAAXPEAX_KE@Z @ 0x1C006402C (-SetBufferAndLength@FxIoContext@@QEAAXPEAX_KE@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C00640E8 (--0FxIoContext@@QEAA@XZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  const void *v7; // rbx
  __int64 result; // rax
  int v11; // esi
  FxIoContext *m_RequestContext; // r14
  char v13; // r15
  FxIoContext *v14; // rax
  FxIoContext *v15; // rax
  unsigned int BufferLength; // eax
  unsigned __int8 v17; // r8
  int Buffer; // eax
  unsigned __int16 v19; // r9
  size_t v20; // r12
  _IRP::<unnamed_type_AssociatedIrp> v21; // rcx
  int v22; // eax
  char v23; // al
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned int v26; // [rsp+40h] [rbp-38h]
  void *pBuffer; // [rsp+48h] [rbp-30h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]
  char Request_0a[112]; // [rsp+A8h] [rbp+30h]

  v7 = 0LL;
  Request_0a[0] = 0;
  pBuffer = 0LL;
  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v11 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = (FxIoContext *)Request->m_RequestContext;
    v13 = 1;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v14 = (FxIoContext *)FxPoolAllocator(
                             this->m_Globals,
                             &this->m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0xB0uLL,
                             this->m_Globals->Tag,
                             Caller);
      if ( v14 )
      {
        FxIoContext::FxIoContext(v14);
        m_RequestContext = v15;
      }
      else
      {
        m_RequestContext = 0LL;
      }
      if ( !m_RequestContext )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xAu, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, m_RequestContext);
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, IoBuffer);
    memset(&Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1], 0, 0x38uLL);
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = MajorCode;
    m_RequestContext->m_MajorFunction = MajorCode;
    BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
    m_RequestContext->m_RestoreState = 1;
    v17 = BufferLength;
    v26 = BufferLength;
    m_RequestContext->m_OriginalSystemBuffer = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext->m_OriginalUserBuffer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext->m_OriginalMdl = Request->m_Irp.m_Irp->MdlAddress;
    m_RequestContext->m_OriginalFlags = Request->m_Irp.m_Irp->Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
        v11 = Buffer;
        if ( Buffer < 0 )
        {
          v19 = 14;
LABEL_43:
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v19, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
          break;
        }
        Request->m_Irp.m_Irp->UserBuffer = pBuffer;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( BufferLength )
        {
          v20 = BufferLength;
          if ( m_RequestContext->m_BufferToFreeLength >= BufferLength
            && (v21.MasterIrp = (_IRP *)m_RequestContext->m_BufferToFree) != 0LL )
          {
            v13 = 0;
            Request->m_Irp.m_Irp->AssociatedIrp = v21;
          }
          else
          {
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                      this->m_Globals,
                                                                      &this->m_Globals->FxPoolFrameworks,
                                                                      ExDefaultNonPagedPoolType,
                                                                      BufferLength,
                                                                      this->m_Globals->Tag,
                                                                      Caller);
            if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
            {
              WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
              v11 = -1073741670;
LABEL_54:
              FxRequestBase::ContextReleaseAndRestore(Request);
              return (unsigned int)v11;
            }
            Request_0a[0] = 1;
          }
          v22 = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
          v11 = v22;
          if ( v22 < 0 )
          {
            WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v22);
LABEL_31:
            v23 = Request_0a[0];
            goto LABEL_45;
          }
          if ( MajorCode == 4 )
          {
            if ( pBuffer )
              memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer, v20);
          }
          else
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer;
          }
          if ( !v13 )
          {
            m_RequestContext->m_CopyBackToBuffer = MajorCode == 3;
            goto LABEL_31;
          }
          FxIoContext::SetBufferAndLength(
            m_RequestContext,
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp,
            v20,
            MajorCode == 3);
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   IoBuffer,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   &m_RequestContext->m_MdlToFree,
                   &m_RequestContext->m_UnlockPages,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext->m_MdlToFree != 0LL,
                   &m_RequestContext->m_MdlToFreeSize);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_46:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v26;
          CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          if ( DeviceOffset )
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = *DeviceOffset;
          else
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
          m_Globals = Request->m_Globals;
          if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
            FxRequestBase::SetVerifierFlags(Request, 128, v17);
          return (unsigned int)v11;
        }
        v19 = 13;
        goto LABEL_43;
      default:
        v11 = -1073741436;
        if ( this->m_ObjectSize )
          v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v7, -1073741436);
        goto LABEL_54;
    }
    v23 = 0;
LABEL_45:
    if ( v11 < 0 )
    {
      if ( v23 )
      {
        FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
      }
      goto LABEL_54;
    }
    goto LABEL_46;
  }
  return result;
}
