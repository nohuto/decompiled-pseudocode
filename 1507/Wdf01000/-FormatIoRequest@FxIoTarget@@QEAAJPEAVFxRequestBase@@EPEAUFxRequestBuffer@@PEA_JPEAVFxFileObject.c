/*
 * XREFs of ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484
 * Callers:
 *     FxIoTargetFormatIo @ 0x1C00810F0 (FxIoTargetFormatIo.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0016870 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00168C4 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C005C594 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C005D38C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned __int8 MajorCode,
        FxRequestBuffer *IoBuffer,
        _LARGE_INTEGER *DeviceOffset,
        FxFileObject *Request_0)
{
  const void *v8; // rdi
  FxRequestBuffer *v9; // rbx
  __int64 result; // rax
  int v12; // ebp
  FxRequestContext *m_RequestContext; // r14
  char v14; // r12
  FxRequestContext *v15; // rax
  FxRequestContext *v16; // rcx
  unsigned int BufferLength; // eax
  unsigned __int8 v18; // r8
  int Buffer; // eax
  unsigned __int16 v20; // r9
  size_t v21; // rbx
  _IRP::<unnamed_type_AssociatedIrp> v22; // rcx
  int v23; // eax
  char v24; // al
  FxRequestContext_vtbl *v25; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v28; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned int v30; // [rsp+40h] [rbp-38h]
  void *pBuffer; // [rsp+48h] [rbp-30h] BYREF
  _LIST_ENTRY *Caller; // [rsp+78h] [rbp+0h]

  v8 = 0LL;
  LOBYTE(Request_0) = 0;
  v9 = IoBuffer;
  pBuffer = 0LL;
  result = FxRequestBase::ValidateTarget(Request, (unsigned __int64)this);
  v12 = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    v14 = 1;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      v15 = (FxRequestContext *)FxPoolAllocator(
                                  this->m_Globals,
                                  (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  this->m_Globals->Tag,
                                  Caller);
      m_RequestContext = v15;
      if ( v15 )
      {
        v15->m_RequestMemory = 0LL;
        v15->m_RequestType = 1;
        memset(&v15->m_CompletionParams, 0, sizeof(v15->m_CompletionParams));
        v9 = IoBuffer;
        m_RequestContext->m_CompletionParams.Size = 72;
        m_RequestContext->m_CompletionParams.Type = WdfRequestTypeNoFormat;
        m_RequestContext->__vftable = (FxRequestContext_vtbl *)&FxIoContext::`vftable';
        m_RequestContext[1].__vftable = 0LL;
        *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = 0LL;
        m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = 0LL;
        m_RequestContext[1].m_CompletionParams.IoStatus.Information = 0LL;
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
        m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
        m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
        *((_WORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 16) = 0;
        *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 0;
        m_RequestContext[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
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
      v16 = Request->m_RequestContext;
      if ( v16 != m_RequestContext )
      {
        if ( v16 )
          ((void (__fastcall *)(FxRequestContext *, __int64))v16->~FxRequestContext)(v16, 1LL);
        Request->m_RequestContext = m_RequestContext;
      }
    }
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, v9);
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
    BufferLength = FxRequestBuffer::GetBufferLength(v9);
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v18 = BufferLength;
    v30 = BufferLength;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    switch ( this->m_TargetIoType )
    {
      case 1u:
        Buffer = FxRequestBuffer::GetBuffer(v9, (IFxMemory **)&pBuffer);
        v12 = Buffer;
        if ( Buffer < 0 )
        {
          v20 = 14;
LABEL_47:
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v20, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
          break;
        }
        Request->m_Irp.m_Irp->UserBuffer = pBuffer;
        break;
      case 2u:
        Request->m_Irp.m_Irp->UserBuffer = 0LL;
        if ( BufferLength )
        {
          v21 = BufferLength;
          if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= BufferLength
            && (v22.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
          {
            v14 = 0;
            Request->m_Irp.m_Irp->AssociatedIrp = v22;
          }
          else
          {
            Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                      this->m_Globals,
                                                                      (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                                                      ExDefaultNonPagedPoolType,
                                                                      BufferLength,
                                                                      this->m_Globals->Tag,
                                                                      Caller);
            if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
            {
              WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxIoTargetKm_cpp_Traceguids);
              v12 = -1073741670;
LABEL_61:
              FxRequestBase::ContextReleaseAndRestore(Request);
              return (unsigned int)v12;
            }
            LOBYTE(Request_0) = 1;
          }
          v23 = FxRequestBuffer::GetBuffer(IoBuffer, (IFxMemory **)&pBuffer);
          v12 = v23;
          if ( v23 >= 0 )
          {
            if ( MajorCode == 4 )
            {
              if ( pBuffer )
                memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer, v21);
            }
            else
            {
              Request->m_Irp.m_Irp->UserBuffer = pBuffer;
            }
            if ( v14 )
            {
              v25 = m_RequestContext[1].__vftable;
              v18 = MajorCode == 3;
              m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
              m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = v21;
              *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
              if ( v25 )
                FxPoolFree(v25);
              break;
            }
            *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = MajorCode == 3;
          }
          else
          {
            WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxIoTargetKm_cpp_Traceguids, v23);
          }
          v24 = (char)Request_0;
          goto LABEL_49;
        }
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
        break;
      case 3u:
        Buffer = FxRequestBuffer::GetOrAllocateMdl(
                   v9,
                   this->m_Globals,
                   &Request->m_Irp.m_Irp->MdlAddress,
                   (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                   (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                   (_LOCK_OPERATION)(MajorCode == 3),
                   m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                   &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
        v12 = Buffer;
        if ( Buffer >= 0 )
        {
LABEL_50:
          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v30;
          CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
          if ( DeviceOffset )
            CurrentStackLocation[-1].Parameters.Read.ByteOffset = *DeviceOffset;
          else
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
          m_Globals = Request->m_Globals;
          if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
          {
            FxNonPagedObject::Lock(Request, (unsigned __int8 *)&Request_0, v18);
            Request->m_VerifierFlags |= 0x80u;
            if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
              FxVerifierLock::Unlock(m_IrpQueue, (KIRQL)Request_0, v28);
            else
              KeReleaseSpinLock(&Request->m_NPLock.m_Lock, (KIRQL)Request_0);
          }
          return (unsigned int)v12;
        }
        v20 = 13;
        goto LABEL_47;
      default:
        v12 = -1073741436;
        if ( this->m_ObjectSize )
          v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxIoTargetKm_cpp_Traceguids, v8, -1073741436);
        goto LABEL_61;
    }
    v24 = 0;
LABEL_49:
    if ( v12 < 0 )
    {
      if ( v24 )
      {
        FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
      }
      goto LABEL_61;
    }
    goto LABEL_50;
  }
  return result;
}
