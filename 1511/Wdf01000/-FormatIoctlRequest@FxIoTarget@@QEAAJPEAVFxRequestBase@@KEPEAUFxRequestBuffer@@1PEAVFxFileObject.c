/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C00047E0 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007BAE0 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007DBA0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0019E44 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0019EAC (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0055ACC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0055AF8 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer,
        FxFileObject *Request_0)
{
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR m_TargetStackSize; // r8
  const void *_a1; // rbp
  unsigned int _a3; // ebx
  unsigned __int64 _a2; // rbp
  const void *TraceObjectHandle; // rax
  unsigned __int16 v18; // r9
  _IRP *Irp; // rcx
  _IRP *v20; // rax
  _IRP *v21; // rbx
  const void *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // r10
  int v24; // ebx
  FxRequestContext *v25; // r14
  FxRequestContext *v26; // rax
  FxRequestContext *v27; // rcx
  FxRequestBuffer *v28; // r12
  FxRequestBuffer *v29; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequestBuffer *v31; // r15
  __int64 v32; // r8
  unsigned __int8 v33; // dl
  _WDFMEMORY_OFFSET *v34; // rcx
  _WDFMEMORY_OFFSET *Offsets; // rax
  FxFileObject *BufferLength_low; // rax
  unsigned int Length; // r13d
  _WDFMEMORY_OFFSET *v38; // r13
  unsigned int v39; // eax
  char v40; // r8
  unsigned int v41; // edx
  unsigned int v42; // r8d
  _IRP *v43; // rax
  int v44; // eax
  int v45; // eax
  int Buffer; // eax
  int v47; // eax
  unsigned int v48; // eax
  FxRequestContext_vtbl *v49; // rcx
  _IRP *v50; // rax
  unsigned __int16 v51; // r9
  _MDL *v52; // rcx
  char *v53; // rdx
  _WDFMEMORY_OFFSET *v54; // rax
  IFxMemory *v55; // rcx
  __int64 (*v56)(void); // rax
  _MDL *Mdl; // rcx
  char *MappedSystemVa; // rcx
  _WDFMEMORY_OFFSET *v59; // rax
  IFxMemory *Memory; // rcx
  __int64 (*GetBuffer)(void); // rax
  bool v62; // zf
  FxRequestContext_vtbl *v63; // rcx
  _IRP::<unnamed_type_AssociatedIrp> v64; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int64 v66; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v68; // [rsp+90h] [rbp+8h]
  void *pBuffer; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v70; // [rsp+A0h] [rbp+18h]

  v70 = Ioctl;
  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v68 = 0;
  if ( m_RequestContext && m_Irp )
  {
    ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
    FxRequestBase::VerifierClearFormatted(Request);
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, -1073741436);
    return 3221225860LL;
  }
  if ( m_Irp )
  {
    if ( m_Irp->CurrentLocation - 1 >= m_TargetStackSize )
      goto LABEL_30;
    if ( Request->m_IrpAllocation != 1 )
    {
      _a3 = -1073741616;
      if ( this->m_ObjectSize )
        _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
      v18 = 13;
LABEL_21:
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v18, WPP_FxRequestBase_cpp_Traceguids, TraceObjectHandle, _a2, _a3);
      return _a3;
    }
  }
  Irp = IoAllocateIrp(m_TargetStackSize, 0);
  if ( !Irp )
  {
    _a3 = -1073741670;
    if ( this->m_ObjectSize )
      _a2 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    v18 = 12;
    goto LABEL_21;
  }
  v20 = Request->m_Irp.m_Irp;
  Request->m_Irp.m_Irp = Irp;
  v21 = 0LL;
  Request->m_Completed = 0;
  if ( v20 && v20 != Irp && Request->m_IrpAllocation == 1 )
    v21 = v20;
  Request->m_IrpAllocation = 1;
  if ( v21 )
  {
    if ( Request->m_Globals->FxVerboseOn )
    {
      v22 = FxRequestBase::GetTraceObjectHandle(Request);
      WPP_IFR_SF_qq(v23, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v21, v22);
    }
    IoFreeIrp(v21);
  }
LABEL_30:
  v24 = 0;
  v25 = Request->m_RequestContext;
  if ( !v25 || v25->m_RequestType != 1 )
  {
    v26 = (FxRequestContext *)FxPoolAllocator(
                                this->m_Globals,
                                &this->m_Globals->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                this->m_Globals->Tag,
                                retaddr);
    v25 = v26;
    if ( !v26 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
      return 3221225626LL;
    }
    v26->m_RequestMemory = 0LL;
    v26->m_RequestType = 1;
    *(_QWORD *)&v26->m_CompletionParams.Size = 0LL;
    v26->m_CompletionParams.IoStatus.Pointer = 0LL;
    v26->m_CompletionParams.IoStatus.Information = 0LL;
    v26->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v26->m_CompletionParams.Parameters.Write.Length = 0LL;
    v26->m_CompletionParams.Parameters.Write.Offset = 0LL;
    v26->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    v26->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
    v26->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v26->m_CompletionParams.Size = 72;
    v26->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v26->__vftable = (FxRequestContext_vtbl *)&FxIoContext::`vftable';
    v26->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v26[1].__vftable = 0LL;
    *(_QWORD *)&v26[1].m_CompletionParams.Size = 0LL;
    v26[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v26[1].m_CompletionParams.IoStatus.Information = 0LL;
    v26[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v26[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v26[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v26[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v26[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v26[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v27 = Request->m_RequestContext;
    if ( v27 != v26 )
    {
      if ( v27 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v27->~FxRequestContext)(v27, 1LL);
      Request->m_RequestContext = v25;
    }
  }
  *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 34) = 1;
  v28 = InputBuffer;
  v29 = InputBuffer;
  *(_QWORD *)&v25[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
  v25[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
  v25[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
  *((_DWORD *)&v25[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
  CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_QWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = 0LL;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].DeviceObject = 0LL;
  CurrentStackLocation[-1].FileObject = 0LL;
  v25->StoreAndReferenceMemory(v25, v29);
  v31 = OutputBuffer;
  if ( OutputBuffer->DataType == FxRequestBufferMemory )
  {
    v32 = 130LL;
  }
  else
  {
    if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
    {
      v25[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
      goto LABEL_43;
    }
    v32 = 135LL;
  }
  OutputBuffer->u.Memory.Memory->AddRef(
    OutputBuffer->u.Memory.Memory,
    v25,
    v32,
    "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  v25[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)v31->u.Memory.Memory;
LABEL_43:
  v33 = (Internal != 0) + 14;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v33;
  *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 35) = v33;
  if ( !Request->m_IrpAllocation )
  {
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  }
  if ( !this->m_InStack )
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
  switch ( v28->DataType )
  {
    case FxRequestBufferMemory:
      Offsets = v28->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        if ( !Offsets->BufferLength )
        {
          LODWORD(Request_0) = v28->u.Memory.Memory->GetBufferSize(v28->u.Memory.Memory)
                             - v28->u.Memory.Offsets->BufferOffset;
          break;
        }
        BufferLength_low = (FxFileObject *)LODWORD(Offsets->BufferLength);
      }
      else
      {
        BufferLength_low = (FxFileObject *)v28->u.Memory.Memory->GetBufferSize(v28->u.Memory.Memory);
      }
      Request_0 = BufferLength_low;
      break;
    case FxRequestBufferMdl:
    case FxRequestBufferBuffer:
      Request_0 = (FxFileObject *)v28->u.Mdl.Length;
      break;
    case FxRequestBufferReferencedMdl:
      v34 = v28->u.Memory.Offsets;
      if ( v34 && (v34->BufferOffset || v34->BufferLength) )
      {
        if ( v34->BufferLength )
          Request_0 = (FxFileObject *)LODWORD(v34->BufferLength);
        else
          Request_0 = (FxFileObject *)((unsigned int)v28->u.Memory.Memory->GetBufferSize(v28->u.Memory.Memory)
                                     - v28->u.Memory.Offsets->BufferOffset);
      }
      else
      {
        LODWORD(Request_0) = v28->u.Memory.Memory->GetBufferSize(v28->u.Memory.Memory);
      }
      break;
    default:
      LODWORD(Request_0) = 0;
      break;
  }
  if ( v31->DataType != FxRequestBufferMemory )
  {
    if ( v31->DataType == FxRequestBufferMdl || v31->DataType == FxRequestBufferBuffer )
    {
      Length = v31->u.Mdl.Length;
      goto LABEL_87;
    }
    if ( v31->DataType != FxRequestBufferReferencedMdl )
    {
      Length = 0;
      goto LABEL_87;
    }
    v38 = v31->u.Memory.Offsets;
    if ( v38 && (v38->BufferOffset || v38->BufferLength) )
    {
      if ( !v38->BufferLength )
      {
        Length = v31->u.Memory.Memory->GetBufferSize(v31->u.Memory.Memory) - v31->u.Memory.Offsets->BufferOffset;
        goto LABEL_87;
      }
      goto LABEL_84;
    }
    goto LABEL_85;
  }
  v38 = v31->u.Memory.Offsets;
  if ( !v38 || !v38->BufferOffset && !v38->BufferLength )
  {
LABEL_85:
    v39 = v31->u.Memory.Memory->GetBufferSize(v31->u.Memory.Memory);
    goto LABEL_86;
  }
  if ( v38->BufferLength )
  {
LABEL_84:
    Length = v38->BufferLength;
    goto LABEL_87;
  }
  v39 = v31->u.Memory.Memory->GetBufferSize(v31->u.Memory.Memory) - v31->u.Memory.Offsets->BufferOffset;
LABEL_86:
  Length = v39;
LABEL_87:
  v40 = v70;
  v41 = (unsigned int)Request_0;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v70;
  v42 = v40 & 3;
  v43 = Request->m_Irp.m_Irp;
  v70 = v42;
  v43->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = v41;
  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = Length;
  if ( !v42 )
  {
    if ( v41 )
    {
      v48 = v41;
      if ( v41 > Length )
      {
LABEL_103:
        v66 = v48;
        if ( v25[1].m_CompletionParams.Parameters.Write.Offset >= v48 && (v49 = v25[1].__vftable) != 0LL )
        {
          v50 = Request->m_Irp.m_Irp;
          LOBYTE(pBuffer) = 0;
          v50->AssociatedIrp.MasterIrp = (_IRP *)v49;
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                    this->m_Globals,
                                                                    &this->m_Globals->FxPoolFrameworks,
                                                                    ExDefaultNonPagedPoolType,
                                                                    v48,
                                                                    this->m_Globals->Tag,
                                                                    retaddr);
          if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
          {
            WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
            FxRequestBase::ContextReleaseAndRestore(Request);
            return 3221225626LL;
          }
          LOBYTE(pBuffer) = 1;
          v68 = 1;
        }
        if ( v28->DataType == FxRequestBufferUnspecified )
        {
LABEL_132:
          if ( v31->DataType )
          {
            switch ( v31->DataType )
            {
              case FxRequestBufferMemory:
                GetBuffer = (__int64 (*)(void))v31->u.Memory.Memory->GetBuffer;
                if ( v31->u.Memory.Offsets )
                  MappedSystemVa = (char *)(v31->u.Memory.Offsets->BufferOffset + GetBuffer());
                else
                  MappedSystemVa = (char *)GetBuffer();
                break;
              case FxRequestBufferMdl:
                Memory = v31->u.Memory.Memory;
                if ( (BYTE2(Memory[1].__vftable) & 5) != 0 )
                  MappedSystemVa = (char *)Memory[3].__vftable;
                else
                  MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                             (PMDL)Memory,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x10);
                if ( !MappedSystemVa )
                  goto LABEL_149;
                break;
              case FxRequestBufferBuffer:
                MappedSystemVa = (char *)v31->u.Memory.Memory;
                break;
              case FxRequestBufferReferencedMdl:
                Mdl = v31->u.RefMdl.Mdl;
                if ( (Mdl->MdlFlags & 5) != 0 )
                  MappedSystemVa = (char *)Mdl->MappedSystemVa;
                else
                  MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                             Mdl,
                                             0,
                                             MmCached,
                                             0LL,
                                             0,
                                             ExDefaultMdlProtection | 0x10);
                if ( MappedSystemVa )
                {
                  v59 = v31->u.Memory.Offsets;
                  if ( v59 )
                    MappedSystemVa += v59->BufferOffset;
                  break;
                }
LABEL_149:
                v24 = -1073741670;
                goto LABEL_150;
              default:
                v24 = -1073741811;
LABEL_150:
                v51 = 19;
                goto LABEL_151;
            }
          }
          else
          {
            MappedSystemVa = 0LL;
          }
          v62 = (_BYTE)pBuffer == 0;
          v24 = 0;
          Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
          if ( v62 )
          {
            *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
          }
          else
          {
            v63 = v25[1].__vftable;
            v64.MasterIrp = (_IRP *)Request->m_Irp.m_Irp->AssociatedIrp;
            v25[1].m_CompletionParams.Parameters.Write.Offset = v66;
            v25[1].__vftable = (FxRequestContext_vtbl *)v64.MasterIrp;
            *((_BYTE *)&v25[1].m_CompletionParams.Parameters.Usb + 32) = Length != 0;
            if ( v63 )
              FxPoolFree(v63);
          }
          goto LABEL_164;
        }
        if ( v28->DataType != FxRequestBufferMemory )
        {
          switch ( v28->DataType )
          {
            case FxRequestBufferMdl:
              v55 = v28->u.Memory.Memory;
              if ( (BYTE2(v55[1].__vftable) & 5) != 0 )
                v53 = (char *)v55[3].__vftable;
              else
                v53 = (char *)MmMapLockedPagesSpecifyCache(
                                (PMDL)v55,
                                0,
                                MmCached,
                                0LL,
                                0,
                                ExDefaultMdlProtection | 0x10);
              if ( v53 )
              {
LABEL_131:
                memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, v53, (unsigned int)Request_0);
                goto LABEL_132;
              }
              break;
            case FxRequestBufferBuffer:
              v53 = (char *)v28->u.Memory.Memory;
              goto LABEL_130;
            case FxRequestBufferReferencedMdl:
              v52 = v28->u.RefMdl.Mdl;
              if ( (v52->MdlFlags & 5) != 0 )
                v53 = (char *)v52->MappedSystemVa;
              else
                v53 = (char *)MmMapLockedPagesSpecifyCache(v52, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
              if ( v53 )
              {
                v54 = v28->u.Memory.Offsets;
                if ( v54 )
                  v53 += v54->BufferOffset;
LABEL_130:
                if ( !v53 )
                  goto LABEL_132;
                goto LABEL_131;
              }
              break;
            default:
              v24 = -1073741811;
              v51 = 18;
LABEL_151:
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v51, WPP_FxIoTargetKm_cpp_Traceguids, v24);
              goto LABEL_152;
          }
          v24 = -1073741670;
          v51 = 18;
          goto LABEL_151;
        }
        v56 = (__int64 (*)(void))v28->u.Memory.Memory->GetBuffer;
        if ( v28->u.Memory.Offsets )
          v53 = (char *)(v28->u.Memory.Offsets->BufferOffset + v56());
        else
          v53 = (char *)v56();
        goto LABEL_130;
      }
    }
    else if ( !Length )
    {
      Request->m_Irp.m_Irp->UserBuffer = 0LL;
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
      goto LABEL_152;
    }
    v48 = Length;
    goto LABEL_103;
  }
  if ( v42 <= 2 )
  {
    Buffer = FxRequestBuffer::GetBuffer(v28, &pBuffer);
    v24 = Buffer;
    if ( Buffer >= 0 )
    {
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
      v47 = FxRequestBuffer::GetOrAllocateMdl(
              v31,
              this->m_Globals,
              &Request->m_Irp.m_Irp->MdlAddress,
              (_MDL **)&v25[1].m_CompletionParams.IoStatus.Information,
              (unsigned __int8 *)&v25[1].m_CompletionParams.Parameters.Usb + 33,
              (_LOCK_OPERATION)(v70 != 1),
              v25[1].m_CompletionParams.IoStatus.Information != 0,
              &v25[1].m_CompletionParams.Parameters.Others.Argument4.Value);
      v24 = v47;
      if ( v47 >= 0 )
        goto LABEL_164;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, v47);
    }
    else
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
    }
  }
  else
  {
    v44 = FxRequestBuffer::GetBuffer(v31, &pBuffer);
    v24 = v44;
    if ( v44 >= 0 )
    {
      Request->m_Irp.m_Irp->UserBuffer = pBuffer;
      v45 = FxRequestBuffer::GetBuffer(v28, &pBuffer);
      v24 = v45;
      if ( v45 >= 0 )
        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
      else
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x17u, WPP_FxIoTargetKm_cpp_Traceguids, v45);
    }
    else
    {
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x16u, WPP_FxIoTargetKm_cpp_Traceguids, v44);
    }
  }
LABEL_152:
  if ( v24 < 0 )
  {
    if ( v68 )
    {
      FxPoolFree(&Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp->Type);
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
    }
    FxRequestBase::ContextReleaseAndRestore(Request);
    return (unsigned int)v24;
  }
LABEL_164:
  m_Globals = Request->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
    FxRequestBase::SetVerifierFlags(Request, 128);
  return (unsigned int)v24;
}
