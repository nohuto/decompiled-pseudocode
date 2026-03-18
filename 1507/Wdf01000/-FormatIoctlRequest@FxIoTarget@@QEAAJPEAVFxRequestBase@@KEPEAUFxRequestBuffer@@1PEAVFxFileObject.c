/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0014B70
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0012680 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008C6F0 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0016870 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00168C4 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C005C594 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer,
        FxIoTarget *Request_0)
{
  _IRP *m_Irp; // rdi
  FxRequestContext *m_RequestContext; // rcx
  CCHAR m_TargetStackSize; // r8
  _IRP *Irp; // rax
  _IRP *v14; // rcx
  char v15; // bp
  _IRP *v16; // rdi
  FxRequestContext *v17; // rsi
  FxRequestBuffer *v18; // r13
  FxRequestBuffer *v19; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 v21; // r8
  FxRequestBuffer *v22; // r15
  unsigned __int8 v23; // dl
  unsigned int Length; // edi
  unsigned int BufferLength; // r14d
  unsigned int v26; // r12d
  unsigned int v27; // eax
  unsigned __int64 v28; // r12
  FxRequestBufferType DataType; // ecx
  char *Memory; // rdx
  FxRequestBufferType v31; // ecx
  char *MappedSystemVa; // rcx
  bool v33; // zf
  int v34; // r13d
  FxRequestContext_vtbl *v35; // rcx
  _FX_DRIVER_GLOBALS *v36; // rax
  _WDFMEMORY_OFFSET *Offsets; // rdi
  __int32 v39; // ecx
  __int64 (*v40)(void); // rax
  _WDFMEMORY_OFFSET *v41; // r14
  FxRequestContext *v42; // rax
  FxRequestContext *v43; // rcx
  __int32 v44; // ecx
  __int64 (*GetBuffer)(void); // rax
  __int64 v46; // r8
  int v47; // eax
  FxFileObject *v48; // rdi
  int Mdl; // eax
  unsigned __int8 v50; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v52; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  unsigned int v54; // edi
  const void *v55; // r14
  unsigned __int64 v56; // r14
  FxRequestBase *v57; // rax
  unsigned __int16 v58; // r9
  _FX_DRIVER_GLOBALS *v59; // rcx
  FxRequestBase *v60; // rax
  int Buffer; // eax
  unsigned __int16 v62; // r9
  FxRequestContext_vtbl *v63; // rcx
  _IRP *v64; // rax
  __int32 v65; // ecx
  _MDL *v66; // rcx
  _WDFMEMORY_OFFSET *v67; // rax
  IFxMemory *v68; // rcx
  unsigned __int16 v69; // r9
  __int32 v70; // ecx
  _MDL *v71; // rcx
  _WDFMEMORY_OFFSET *v72; // rax
  IFxMemory *v73; // rcx
  unsigned __int8 v74; // r8
  FxVerifierLock *v75; // rcx
  void *pBuffer[2]; // [rsp+40h] [rbp-48h] BYREF
  _LIST_ENTRY *Caller; // [rsp+88h] [rbp+0h]
  int PreviousIrql; // [rsp+90h] [rbp+8h] BYREF
  char v79; // [rsp+98h] [rbp+10h]
  unsigned __int8 v80; // [rsp+A8h] [rbp+20h]

  v80 = Internal;
  m_Irp = Request->m_Irp.m_Irp;
  Request_0 = this;
  m_RequestContext = Request->m_RequestContext;
  v79 = 0;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
      m_Globals = Request->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
        {
          FxNonPagedObject::Lock(Request, (unsigned __int8 *)&PreviousIrql, v50);
          Request->m_VerifierFlags &= ~0x80u;
          if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
            FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v52);
          else
            KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql);
        }
      }
    }
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    v54 = -1073741436;
    if ( this->m_ObjectSize )
      v55 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v55 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v55, -1073741436);
    return v54;
  }
  if ( !m_Irp )
    goto LABEL_5;
  if ( m_Irp->CurrentLocation - 1 < m_TargetStackSize )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      v54 = -1073741616;
      if ( this->m_ObjectSize )
        v56 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v56 = 0LL;
      if ( !Request->m_ObjectSize || (v57 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v57 = Request;
      v58 = 13;
LABEL_103:
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v58, WPP_FxRequestBase_cpp_Traceguids, v57, v56, v54);
      return v54;
    }
LABEL_5:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v14 = Request->m_Irp.m_Irp;
      v15 = 0;
      Request->m_Irp.m_Irp = Irp;
      v16 = 0LL;
      Request->m_Completed = 0;
      if ( v14 && v14 != Irp && Request->m_IrpAllocation == 1 )
        v16 = v14;
      Request->m_IrpAllocation = 1;
      if ( v16 )
      {
        v59 = Request->m_Globals;
        if ( v59->FxVerboseOn )
        {
          if ( !Request->m_ObjectSize
            || (v60 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          {
            v60 = Request;
          }
          WPP_IFR_SF_qq(v59, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v16, v60);
        }
        IoFreeIrp(v16);
      }
      goto LABEL_8;
    }
    v54 = -1073741670;
    if ( this->m_ObjectSize )
      v56 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v56 = 0LL;
    if ( !Request->m_ObjectSize || (v57 = (FxRequestBase *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
      v57 = Request;
    v58 = 12;
    goto LABEL_103;
  }
  v15 = 0;
LABEL_8:
  v17 = Request->m_RequestContext;
  PreviousIrql = 0;
  if ( v17 && v17->m_RequestType == 1 )
    goto LABEL_10;
  v42 = (FxRequestContext *)FxPoolAllocator(
                              this->m_Globals,
                              (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              this->m_Globals->Tag,
                              Caller);
  v17 = v42;
  if ( v42 )
  {
    v42->m_RequestMemory = 0LL;
    v42->m_RequestType = 1;
    memset(&v42->m_CompletionParams, 0, sizeof(v42->m_CompletionParams));
    v17->m_CompletionParams.Size = 72;
    v17->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v17->__vftable = (FxRequestContext_vtbl *)&FxIoContext::`vftable';
    v17->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v17[1].__vftable = 0LL;
    *(_QWORD *)&v17[1].m_CompletionParams.Size = 0LL;
    v17[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v17[1].m_CompletionParams.IoStatus.Information = 0LL;
    v17[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v17[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v17[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v17[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v17[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v17[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v43 = Request->m_RequestContext;
    if ( v43 != v17 )
    {
      if ( v43 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v43->~FxRequestContext)(v43, 1LL);
      Request->m_RequestContext = v17;
    }
LABEL_10:
    *((_BYTE *)&v17[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    v18 = InputBuffer;
    v19 = InputBuffer;
    *(_QWORD *)&v17[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    v17[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    v17[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&v17[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_QWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = 0LL;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    v17->StoreAndReferenceMemory(v17, v19);
    v22 = OutputBuffer;
    if ( OutputBuffer->DataType == FxRequestBufferMemory )
    {
      v46 = 130LL;
    }
    else
    {
      if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        v17[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
        goto LABEL_13;
      }
      v46 = 135LL;
    }
    OutputBuffer->u.Memory.Memory->AddRef(
      OutputBuffer->u.Memory.Memory,
      v17,
      v46,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v17[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)v22->u.Memory.Memory;
LABEL_13:
    v23 = (v80 != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v23;
    *((_BYTE *)&v17[1].m_CompletionParams.Parameters.Usb + 35) = v23;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    switch ( v18->DataType )
    {
      case FxRequestBufferBuffer:
        goto LABEL_18;
      case FxRequestBufferMemory:
        Offsets = v18->u.Memory.Offsets;
        if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
        {
          if ( Offsets->BufferLength )
            goto LABEL_124;
          goto LABEL_120;
        }
        break;
      case FxRequestBufferMdl:
LABEL_18:
        Length = v18->u.Mdl.Length;
        goto LABEL_19;
      case FxRequestBufferReferencedMdl:
        Offsets = v18->u.Memory.Offsets;
        if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
        {
          if ( Offsets->BufferLength )
          {
LABEL_124:
            Length = Offsets->BufferLength;
LABEL_19:
            switch ( v22->DataType )
            {
              case FxRequestBufferBuffer:
LABEL_20:
                BufferLength = v22->u.Mdl.Length;
                goto LABEL_21;
              case FxRequestBufferMemory:
                v41 = v22->u.Memory.Offsets;
                if ( v41 && (v41->BufferOffset || v41->BufferLength) )
                {
                  if ( v41->BufferLength )
                    goto LABEL_133;
                  goto LABEL_129;
                }
                break;
              case FxRequestBufferMdl:
                goto LABEL_20;
              case FxRequestBufferReferencedMdl:
                v41 = v22->u.Memory.Offsets;
                if ( v41 && (v41->BufferOffset || v41->BufferLength) )
                {
                  if ( v41->BufferLength )
                  {
LABEL_133:
                    BufferLength = v41->BufferLength;
LABEL_21:
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = Length;
                    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
                    v26 = Ioctl & 3;
                    if ( v26 )
                    {
                      if ( v26 > 2 )
                      {
                        Buffer = FxRequestBuffer::GetBuffer(v22, pBuffer);
                        if ( Buffer < 0 )
                        {
                          v34 = Buffer;
                          WPP_IFR_SF_d(Request_0->m_Globals, 2u, 0xEu, 0x16u, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                          goto LABEL_141;
                        }
                        Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
                        v47 = FxRequestBuffer::GetBuffer(v18, pBuffer);
                        v34 = v47;
                        if ( v47 >= 0 )
                        {
                          Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle = pBuffer[0];
                          goto LABEL_141;
                        }
                        v62 = 23;
                      }
                      else
                      {
                        v47 = FxRequestBuffer::GetBuffer(v18, pBuffer);
                        v34 = v47;
                        if ( v47 >= 0 )
                        {
                          Request->m_Irp.m_Irp->AssociatedIrp.SystemBuffer = pBuffer[0];
                          v48 = (FxFileObject *)Request_0;
                          Mdl = FxRequestBuffer::GetOrAllocateMdl(
                                  v22,
                                  Request_0->m_Globals,
                                  &Request->m_Irp.m_Irp->MdlAddress,
                                  (_MDL **)&v17[1].m_CompletionParams.IoStatus.Information,
                                  (unsigned __int8 *)&v17[1].m_CompletionParams.Parameters.Usb + 33,
                                  (_LOCK_OPERATION)(v26 != 1),
                                  v17[1].m_CompletionParams.IoStatus.Information != 0,
                                  &v17[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                          v34 = Mdl;
                          if ( Mdl >= 0 )
                            goto LABEL_39;
                          WPP_IFR_SF_d(v48->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, Mdl);
LABEL_141:
                          if ( v34 < 0 )
                          {
                            if ( v79 )
                            {
                              FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
                              Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                            }
                            goto LABEL_144;
                          }
LABEL_39:
                          v36 = Request->m_Globals;
                          if ( v36->FxVerifierOn && v36->FxVerifierIO )
                          {
                            FxNonPagedObject::Lock(Request, (unsigned __int8 *)&PreviousIrql, v21);
                            Request->m_VerifierFlags |= 0x80u;
                            if ( SLOBYTE(Request->m_ObjectFlags) < 0
                              && (v75 = (FxVerifierLock *)Request[-1].m_IrpQueue) != 0LL )
                            {
                              FxVerifierLock::Unlock(v75, PreviousIrql, v74);
                            }
                            else
                            {
                              KeReleaseSpinLock(&Request->m_NPLock.m_Lock, PreviousIrql);
                            }
                          }
                          return (unsigned int)v34;
                        }
                        v62 = 20;
                      }
                      WPP_IFR_SF_d(Request_0->m_Globals, 2u, 0xEu, v62, WPP_FxIoTargetKm_cpp_Traceguids, v47);
                      goto LABEL_141;
                    }
                    if ( Length )
                    {
                      if ( Length > BufferLength )
                      {
                        v27 = Length;
                        goto LABEL_25;
                      }
                    }
                    else if ( !BufferLength )
                    {
                      Request->m_Irp.m_Irp->UserBuffer = 0LL;
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                      v34 = PreviousIrql;
                      goto LABEL_141;
                    }
                    v27 = BufferLength;
LABEL_25:
                    v28 = v27;
                    if ( v17[1].m_CompletionParams.Parameters.Write.Offset >= v27 && (v63 = v17[1].__vftable) != 0LL )
                    {
                      v64 = Request->m_Irp.m_Irp;
                      LOBYTE(PreviousIrql) = 0;
                      v64->AssociatedIrp.MasterIrp = (_IRP *)v63;
                    }
                    else
                    {
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                                Request_0->m_Globals,
                                                                                (_LIST_ENTRY *)&Request_0->m_Globals->FxPoolFrameworks,
                                                                                ExDefaultNonPagedPoolType,
                                                                                v27,
                                                                                Request_0->m_Globals->Tag,
                                                                                Caller);
                      if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                      {
                        WPP_IFR_SF_(Request_0->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                        v34 = -1073741670;
LABEL_144:
                        FxRequestBase::ContextReleaseAndRestore(Request);
                        return (unsigned int)v34;
                      }
                      LOBYTE(PreviousIrql) = 1;
                      v79 = 1;
                    }
                    DataType = v18->DataType;
                    if ( v18->DataType == FxRequestBufferBuffer )
                    {
                      Memory = (char *)v18->u.Memory.Memory;
                      goto LABEL_30;
                    }
                    if ( DataType == FxRequestBufferUnspecified )
                    {
LABEL_32:
                      v31 = v22->DataType;
                      if ( v22->DataType == FxRequestBufferBuffer )
                      {
                        MappedSystemVa = (char *)v22->u.Memory.Memory;
                        goto LABEL_34;
                      }
                      if ( v31 == FxRequestBufferUnspecified )
                      {
                        MappedSystemVa = 0LL;
                        goto LABEL_34;
                      }
                      v44 = v31 - 1;
                      if ( !v44 )
                      {
                        GetBuffer = (__int64 (*)(void))v22->u.Memory.Memory->GetBuffer;
                        if ( v22->u.Memory.Offsets )
                          MappedSystemVa = (char *)(v22->u.Memory.Offsets->BufferOffset + GetBuffer());
                        else
                          MappedSystemVa = (char *)GetBuffer();
                        goto LABEL_34;
                      }
                      v70 = v44 - 1;
                      if ( v70 )
                      {
                        if ( v70 != 2 )
                        {
                          v34 = -1073741811;
                          goto LABEL_164;
                        }
                        v71 = v22->u.RefMdl.Mdl;
                        if ( (v71->MdlFlags & 5) != 0 )
                          MappedSystemVa = (char *)v71->MappedSystemVa;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     v71,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                        {
                          v72 = v22->u.Memory.Offsets;
                          if ( v72 )
                            MappedSystemVa += v72->BufferOffset;
                          goto LABEL_34;
                        }
                      }
                      else
                      {
                        v73 = v22->u.Memory.Memory;
                        if ( (BYTE2(v73[1].__vftable) & 5) != 0 )
                          MappedSystemVa = (char *)v73[3].__vftable;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     (PMDL)v73,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                        {
LABEL_34:
                          v33 = (_BYTE)PreviousIrql == 0;
                          v34 = 0;
                          Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
                          if ( v33 )
                          {
                            *((_BYTE *)&v17[1].m_CompletionParams.Parameters.Usb + 32) = BufferLength != 0;
                          }
                          else
                          {
                            v35 = v17[1].__vftable;
                            if ( BufferLength )
                              v15 = 1;
                            v17[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
                            v17[1].m_CompletionParams.Parameters.Write.Offset = v28;
                            *((_BYTE *)&v17[1].m_CompletionParams.Parameters.Usb + 32) = v15;
                            if ( v35 )
                              FxPoolFree(v35);
                          }
                          goto LABEL_39;
                        }
                      }
                      v34 = -1073741670;
LABEL_164:
                      v69 = 19;
                      goto LABEL_165;
                    }
                    v39 = DataType - 1;
                    if ( !v39 )
                    {
                      v40 = (__int64 (*)(void))v18->u.Memory.Memory->GetBuffer;
                      if ( v18->u.Memory.Offsets )
                        Memory = (char *)(v18->u.Memory.Offsets->BufferOffset + v40());
                      else
                        Memory = (char *)v40();
                      goto LABEL_30;
                    }
                    v65 = v39 - 1;
                    if ( v65 )
                    {
                      if ( v65 != 2 )
                      {
                        v34 = -1073741811;
LABEL_162:
                        v69 = 18;
LABEL_165:
                        WPP_IFR_SF_d(Request_0->m_Globals, 2u, 0xEu, v69, WPP_FxIoTargetKm_cpp_Traceguids, v34);
                        goto LABEL_141;
                      }
                      v66 = v18->u.RefMdl.Mdl;
                      if ( (v66->MdlFlags & 5) != 0 )
                        Memory = (char *)v66->MappedSystemVa;
                      else
                        Memory = (char *)MmMapLockedPagesSpecifyCache(
                                           v66,
                                           0,
                                           MmCached,
                                           0LL,
                                           0,
                                           ExDefaultMdlProtection | 0x10);
                      if ( Memory )
                      {
                        v67 = v18->u.Memory.Offsets;
                        if ( v67 )
                          Memory += v67->BufferOffset;
LABEL_30:
                        if ( !Memory )
                          goto LABEL_32;
                        goto LABEL_31;
                      }
                    }
                    else
                    {
                      v68 = v18->u.Memory.Memory;
                      if ( (BYTE2(v68[1].__vftable) & 5) != 0 )
                        Memory = (char *)v68[3].__vftable;
                      else
                        Memory = (char *)MmMapLockedPagesSpecifyCache(
                                           (PMDL)v68,
                                           0,
                                           MmCached,
                                           0LL,
                                           0,
                                           ExDefaultMdlProtection | 0x10);
                      if ( Memory )
                      {
LABEL_31:
                        memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, Memory, Length);
                        goto LABEL_32;
                      }
                    }
                    v34 = -1073741670;
                    goto LABEL_162;
                  }
LABEL_129:
                  BufferLength = v22->u.Memory.Memory->GetBufferSize(v22->u.Memory.Memory)
                               - v22->u.Memory.Offsets->BufferOffset;
                  goto LABEL_21;
                }
                break;
              default:
                BufferLength = 0;
                goto LABEL_21;
            }
            BufferLength = v22->u.Memory.Memory->GetBufferSize(v22->u.Memory.Memory);
            goto LABEL_21;
          }
LABEL_120:
          Length = v18->u.Memory.Memory->GetBufferSize(v18->u.Memory.Memory) - v18->u.Memory.Offsets->BufferOffset;
          goto LABEL_19;
        }
        break;
      default:
        Length = 0;
        goto LABEL_19;
    }
    Length = v18->u.Memory.Memory->GetBufferSize(v18->u.Memory.Memory);
    goto LABEL_19;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
