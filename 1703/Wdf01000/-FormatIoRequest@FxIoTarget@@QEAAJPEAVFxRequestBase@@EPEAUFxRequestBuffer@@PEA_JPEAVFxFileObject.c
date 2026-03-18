/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C00891FC
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C0085FA0 (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C0086194 (FxIoTargetSendIo.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00034B8 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0028E58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0028EC4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C002F6D0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00664A4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0067484 (--0FxIoContext@@QEAA@XZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset)
{
  char v9; // r15
  __int64 result; // rax
  int v11; // esi
  FxRequestContext *m_RequestContext; // rdi
  FxIoContext *v13; // rax
  FxRequestContext *v14; // rax
  unsigned int BufferLength; // eax
  unsigned __int8 v16; // r8
  size_t v17; // r14
  const void *v18; // rcx
  int Buffer; // eax
  unsigned __int16 v20; // r9
  _IRP::<unnamed_type_AssociatedIrp> v21; // rcx
  FxRequestContext_vtbl *v22; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *pBuffer[2]; // [rsp+40h] [rbp-38h] BYREF
  void *Caller; // [rsp+78h] [rbp+0h]

  pBuffer[0] = 0LL;
  v9 = 0;
  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v11 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v13 = (FxIoContext *)FxPoolAllocator(
                             this->m_Globals,
                             &this->m_Globals->FxPoolFrameworks,
                             ExDefaultNonPagedPoolType,
                             0xB0uLL,
                             this->m_Globals->Tag,
                             Caller);
      if ( v13 )
      {
        FxIoContext::FxIoContext(v13);
        m_RequestContext = v14;
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
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = MajorCode;
    BufferLength = FxRequestBuffer::GetBufferLength(IoBuffer);
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v17 = BufferLength;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          goto LABEL_45;
        }
        v20 = 14;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( !BufferLength )
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
          goto LABEL_45;
        }
        if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
          && (v21.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
        {
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
          v9 = 1;
        }
        Buffer = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)pBuffer);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
          if ( MajorCode == 4 )
          {
            if ( pBuffer[0] )
              memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], v17);
          }
          else
          {
            Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          }
          if ( v9 )
          {
            v22 = m_RequestContext[1].__vftable;
            v16 = MajorCode == 3;
            m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
            m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v17;
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
            if ( v22 )
              FxPoolFree(v22);
            v9 = 0;
          }
          else
          {
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
          }
LABEL_45:
          if ( v11 < 0 )
          {
            if ( v9 )
            {
              FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
            }
            goto LABEL_54;
          }
          goto LABEL_46;
        }
        v20 = 12;
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   IoBuffer,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                   (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                   &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v11 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_46:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v17;
          CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          if ( DeviceOffset )
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = *DeviceOffset;
          else
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
          m_Globals = Request->m_Globals;
          if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
            FxRequestBase::SetVerifierFlags(Request, 128, v16);
          return (unsigned int)v11;
        }
        v20 = 13;
        break;
      default:
        v11 = -1073741436;
        v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v18 = 0LL;
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v18, -1073741436);
        goto LABEL_54;
    }
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    goto LABEL_45;
  }
  return result;
}
