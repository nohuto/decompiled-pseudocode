/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C000E7B0 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008BBF0 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008EBF8 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00296B8 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0029720 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C002DA64 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0063164 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0063190 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  _IRP *m_Irp; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR m_TargetStackSize; // r8
  FxRequestContext *v13; // rbx
  FxRequestContext *v14; // rax
  FxRequestContext *v15; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void (__fastcall *StoreAndReferenceMemory)(FxRequestContext *, FxRequestBuffer *); // rax
  unsigned __int8 v18; // dl
  unsigned int Length; // r15d
  _WDFMEMORY_OFFSET *Offsets; // r15
  IFxMemory *v21; // rcx
  __int64 (*GetBufferSize)(void); // rax
  IFxMemory_vtbl *v23; // rax
  _WDFMEMORY_OFFSET *v24; // r13
  unsigned int BufferLength; // r13d
  unsigned int v26; // r12d
  unsigned int v27; // eax
  unsigned __int64 v28; // r12
  FxRequestBufferType DataType; // ecx
  __int64 (*GetBuffer)(void); // rax
  char *v31; // rdx
  FxRequestBufferType v32; // ecx
  __int32 v33; // ecx
  __int64 (*v34)(void); // rax
  char *MappedSystemVa; // rcx
  int v36; // r15d
  FxRequestContext_vtbl *v37; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  IFxMemory *Memory; // rcx
  unsigned int (__fastcall *AddRef)(IFxMemory *, void *, int, char *); // rax
  unsigned int v42; // edx
  _IRP *Irp; // rax
  _IRP *v44; // rcx
  _IRP *v45; // rbx
  __int32 v46; // ecx
  __int32 v47; // ecx
  __int64 v48; // r8
  int Buffer; // eax
  int v50; // eax
  unsigned int v51; // ebx
  const void *v52; // r15
  unsigned __int64 v53; // r15
  const void *TraceObjectHandle; // rax
  unsigned __int16 v55; // r9
  const void *v56; // rax
  _FX_DRIVER_GLOBALS *v57; // r10
  FxTagTracker *v58; // rcx
  unsigned __int16 v59; // r9
  _IRP::<unnamed_type_AssociatedIrp> v60; // rcx
  _MDL *v61; // rcx
  _WDFMEMORY_OFFSET *v62; // rax
  IFxMemory *v63; // rcx
  unsigned __int16 v64; // r9
  __int32 v65; // ecx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v67; // rax
  IFxMemory *v68; // rcx
  void *pBuffer; // [rsp+48h] [rbp-40h] BYREF
  void *Caller; // [rsp+88h] [rbp+0h]
  char v72; // [rsp+90h] [rbp+8h]
  char v73; // [rsp+98h] [rbp+10h]
  _LOCK_OPERATION Request_0a[30]; // [rsp+C0h] [rbp+38h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v72 = 0;
  if ( m_RequestContext && m_Irp )
  {
    ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
    FxRequestBase::VerifierClearFormatted(Request);
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    v51 = -1073741436;
    if ( this->m_ObjectSize )
      v52 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v52 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v52, -1073741436);
    return v51;
  }
  if ( !m_Irp )
    goto LABEL_61;
  if ( m_Irp->CurrentLocation - 1 < m_TargetStackSize )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      v51 = -1073741616;
      if ( this->m_ObjectSize )
        v53 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v53 = 0LL;
      TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
      v55 = 13;
LABEL_105:
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v55, WPP_FxRequestBase_cpp_Traceguids, TraceObjectHandle, v53, v51);
      return v51;
    }
LABEL_61:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v44 = Request->m_Irp.m_Irp;
      Request->m_Irp.m_Irp = Irp;
      v45 = 0LL;
      Request->m_Completed = 0;
      if ( v44 && v44 != Irp && Request->m_IrpAllocation == 1 )
        v45 = v44;
      Request->m_IrpAllocation = 1;
      if ( v45 )
      {
        if ( Request->m_Globals->FxVerboseOn )
        {
          v56 = FxRequestBase::GetTraceObjectHandle(Request);
          WPP_IFR_SF_qq(v57, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v45, v56);
        }
        IoFreeIrp(v45);
      }
      goto LABEL_5;
    }
    v51 = -1073741670;
    if ( this->m_ObjectSize )
      v53 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v53 = 0LL;
    TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(Request);
    v55 = 12;
    goto LABEL_105;
  }
LABEL_5:
  v13 = Request->m_RequestContext;
  Request_0a[0] = IoWriteAccess;
  if ( v13 && v13->m_RequestType == 1 )
    goto LABEL_11;
  v14 = (FxRequestContext *)FxPoolAllocator(
                              this->m_Globals,
                              &this->m_Globals->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              this->m_Globals->Tag,
                              Caller);
  v13 = v14;
  if ( v14 )
  {
    v14->m_RequestMemory = 0LL;
    v14->m_RequestType = 1;
    *(_QWORD *)&v14->m_CompletionParams.Size = 0LL;
    v14->m_CompletionParams.IoStatus.Pointer = 0LL;
    v14->m_CompletionParams.IoStatus.Information = 0LL;
    v14->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v14->m_CompletionParams.Parameters.Write.Length = 0LL;
    v14->m_CompletionParams.Parameters.Write.Offset = 0LL;
    v14->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    v14->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
    v14->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v14->m_CompletionParams.Size = 72;
    v14->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v14->__vftable = (FxRequestContext_vtbl *)&FxIoContext::`vftable';
    v14->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v14[1].__vftable = 0LL;
    *(_QWORD *)&v14[1].m_CompletionParams.Size = 0LL;
    v14[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v14[1].m_CompletionParams.IoStatus.Information = 0LL;
    v14[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v14[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v14[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v14[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v14[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v14[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v15 = Request->m_RequestContext;
    if ( v15 != v14 )
    {
      if ( v15 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v15->~FxRequestContext)(v15, 1LL);
      Request->m_RequestContext = v13;
    }
LABEL_11:
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    *(_QWORD *)&v13[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    v13[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    v13[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&v13[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_QWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = 0LL;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].DeviceObject = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    StoreAndReferenceMemory = v13->StoreAndReferenceMemory;
    if ( StoreAndReferenceMemory == FxRequestContext::StoreAndReferenceMemory )
    {
      if ( InputBuffer->DataType == FxRequestBufferMemory )
      {
        Memory = InputBuffer->u.Memory.Memory;
        AddRef = Memory->AddRef;
        if ( (char *)AddRef == (char *)FxMemoryObject::AddRef )
        {
          v42 = _InterlockedIncrement((volatile signed __int32 *)&Memory[-12].__vftable + 1);
          if ( SLOBYTE(Memory[-10].__vftable) < 0 )
          {
            v58 = (FxTagTracker *)Memory[-17].__vftable;
            if ( v58 )
              FxTagTracker::UpdateTagHistory(
                v58,
                v13,
                130,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp",
                TagAddRef,
                v42);
          }
        }
        else
        {
          AddRef(Memory, v13, 130, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
        }
      }
      else
      {
        if ( InputBuffer->DataType != FxRequestBufferReferencedMdl )
        {
          v13->m_RequestMemory = 0LL;
          goto LABEL_15;
        }
        InputBuffer->u.Memory.Memory->AddRef(
          InputBuffer->u.Memory.Memory,
          v13,
          135,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
      }
      v13->m_RequestMemory = InputBuffer->u.Memory.Memory;
    }
    else
    {
      StoreAndReferenceMemory(v13, InputBuffer);
    }
LABEL_15:
    if ( OutputBuffer->DataType == FxRequestBufferMemory )
    {
      v48 = 130LL;
    }
    else
    {
      if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
        goto LABEL_18;
      }
      v48 = 135LL;
    }
    OutputBuffer->u.Memory.Memory->AddRef(
      OutputBuffer->u.Memory.Memory,
      v13,
      v48,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)OutputBuffer->u.Memory.Memory;
LABEL_18:
    v18 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v18;
    *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 35) = v18;
    if ( !Request->m_IrpAllocation )
    {
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Flags = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Flags;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
    }
    if ( !this->m_InStack )
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].FileObject = this->m_TargetFileObject;
    if ( InputBuffer->DataType != FxRequestBufferMemory )
    {
      if ( InputBuffer->DataType == FxRequestBufferMdl || InputBuffer->DataType == FxRequestBufferBuffer )
      {
        Length = InputBuffer->u.Mdl.Length;
        goto LABEL_30;
      }
      if ( InputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        Length = 0;
        goto LABEL_30;
      }
      Offsets = InputBuffer->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        if ( !Offsets->BufferLength )
        {
          Length = InputBuffer->u.Memory.Memory->GetBufferSize(InputBuffer->u.Memory.Memory)
                 - InputBuffer->u.Memory.Offsets->BufferOffset;
          goto LABEL_30;
        }
LABEL_131:
        Length = Offsets->BufferLength;
LABEL_30:
        if ( OutputBuffer->DataType != FxRequestBufferBuffer )
        {
          if ( OutputBuffer->DataType == FxRequestBufferMemory )
          {
            v24 = OutputBuffer->u.Memory.Offsets;
            if ( v24 && (v24->BufferOffset || v24->BufferLength) )
            {
              if ( v24->BufferLength )
                goto LABEL_140;
              goto LABEL_136;
            }
            goto LABEL_33;
          }
          if ( OutputBuffer->DataType != FxRequestBufferMdl )
          {
            if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
            {
              BufferLength = 0;
              goto LABEL_35;
            }
            v24 = OutputBuffer->u.Memory.Offsets;
            if ( v24 && (v24->BufferOffset || v24->BufferLength) )
            {
              if ( v24->BufferLength )
              {
LABEL_140:
                BufferLength = v24->BufferLength;
LABEL_35:
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = Length;
                Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
                v26 = Ioctl & 3;
                if ( !v26 )
                {
                  if ( Length )
                  {
                    if ( Length > BufferLength )
                    {
                      v27 = Length;
                      goto LABEL_39;
                    }
LABEL_38:
                    v27 = BufferLength;
LABEL_39:
                    v28 = v27;
                    if ( v13[1].m_CompletionParams.Parameters.Write.Offset >= v27
                      && (v60.MasterIrp = (_IRP *)v13[1].__vftable) != 0LL )
                    {
                      v73 = 0;
                      Request->m_Irp.m_Irp->AssociatedIrp = v60;
                    }
                    else
                    {
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                                this->m_Globals,
                                                                                &this->m_Globals->FxPoolFrameworks,
                                                                                ExDefaultNonPagedPoolType,
                                                                                v27,
                                                                                this->m_Globals->Tag,
                                                                                Caller);
                      if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                      {
                        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                        v36 = -1073741670;
                        goto LABEL_185;
                      }
                      v73 = 1;
                      v72 = 1;
                    }
                    DataType = InputBuffer->DataType;
                    if ( InputBuffer->DataType == FxRequestBufferMemory )
                    {
                      GetBuffer = (__int64 (*)(void))InputBuffer->u.Memory.Memory->GetBuffer;
                      if ( InputBuffer->u.Memory.Offsets )
                        v31 = (char *)(InputBuffer->u.Memory.Offsets->BufferOffset + GetBuffer());
                      else
                        v31 = (char *)GetBuffer();
                      goto LABEL_45;
                    }
                    if ( DataType == FxRequestBufferUnspecified )
                    {
LABEL_47:
                      v32 = OutputBuffer->DataType;
                      if ( OutputBuffer->DataType == FxRequestBufferBuffer )
                      {
                        MappedSystemVa = (char *)OutputBuffer->u.Memory.Memory;
                        goto LABEL_53;
                      }
                      if ( v32 == FxRequestBufferUnspecified )
                      {
                        MappedSystemVa = 0LL;
                        goto LABEL_53;
                      }
                      v33 = v32 - 1;
                      if ( !v33 )
                      {
                        v34 = (__int64 (*)(void))OutputBuffer->u.Memory.Memory->GetBuffer;
                        if ( OutputBuffer->u.Memory.Offsets )
                          MappedSystemVa = (char *)(OutputBuffer->u.Memory.Offsets->BufferOffset + v34());
                        else
                          MappedSystemVa = (char *)v34();
                        goto LABEL_53;
                      }
                      v65 = v33 - 1;
                      if ( v65 )
                      {
                        if ( v65 != 2 )
                        {
                          v36 = -1073741811;
                          goto LABEL_166;
                        }
                        Mdl = OutputBuffer->u.RefMdl.Mdl;
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
                          v67 = OutputBuffer->u.Memory.Offsets;
                          if ( v67 )
                            MappedSystemVa += v67->BufferOffset;
                          goto LABEL_53;
                        }
                      }
                      else
                      {
                        v68 = OutputBuffer->u.Memory.Memory;
                        if ( (BYTE2(v68[1].__vftable) & 5) != 0 )
                          MappedSystemVa = (char *)v68[3].__vftable;
                        else
                          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                     (PMDL)v68,
                                                     0,
                                                     MmCached,
                                                     0LL,
                                                     0,
                                                     ExDefaultMdlProtection | 0x10);
                        if ( MappedSystemVa )
                        {
LABEL_53:
                          v36 = 0;
                          Request->m_Irp.m_Irp->UserBuffer = MappedSystemVa;
                          if ( v73 )
                          {
                            v37 = v13[1].__vftable;
                            v13[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
                            v13[1].m_CompletionParams.Parameters.Write.Offset = v28;
                            *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = BufferLength != 0;
                            if ( v37 )
                              FxPoolFree(v37);
                          }
                          else
                          {
                            *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = BufferLength != 0;
                          }
                          goto LABEL_56;
                        }
                      }
                      v36 = -1073741670;
LABEL_166:
                      v64 = 19;
                      goto LABEL_167;
                    }
                    v46 = DataType - 2;
                    if ( v46 )
                    {
                      v47 = v46 - 1;
                      if ( !v47 )
                      {
                        v31 = (char *)InputBuffer->u.Memory.Memory;
                        goto LABEL_45;
                      }
                      if ( v47 != 1 )
                      {
                        v36 = -1073741811;
LABEL_164:
                        v64 = 18;
LABEL_167:
                        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v64, WPP_FxIoTargetKm_cpp_Traceguids, v36);
                        goto LABEL_82;
                      }
                      v61 = InputBuffer->u.RefMdl.Mdl;
                      if ( (v61->MdlFlags & 5) != 0 )
                        v31 = (char *)v61->MappedSystemVa;
                      else
                        v31 = (char *)MmMapLockedPagesSpecifyCache(
                                        v61,
                                        0,
                                        MmCached,
                                        0LL,
                                        0,
                                        ExDefaultMdlProtection | 0x10);
                      if ( v31 )
                      {
                        v62 = InputBuffer->u.Memory.Offsets;
                        if ( v62 )
                          v31 += v62->BufferOffset;
LABEL_45:
                        if ( !v31 )
                          goto LABEL_47;
                        goto LABEL_46;
                      }
                    }
                    else
                    {
                      v63 = InputBuffer->u.Memory.Memory;
                      if ( (BYTE2(v63[1].__vftable) & 5) != 0 )
                        v31 = (char *)v63[3].__vftable;
                      else
                        v31 = (char *)MmMapLockedPagesSpecifyCache(
                                        (PMDL)v63,
                                        0,
                                        MmCached,
                                        0LL,
                                        0,
                                        ExDefaultMdlProtection | 0x10);
                      if ( v31 )
                      {
LABEL_46:
                        memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, v31, Length);
                        goto LABEL_47;
                      }
                    }
                    v36 = -1073741670;
                    goto LABEL_164;
                  }
                  if ( BufferLength )
                    goto LABEL_38;
                  Request->m_Irp.m_Irp->UserBuffer = 0LL;
                  Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                  v36 = 0;
LABEL_82:
                  if ( v36 >= 0 )
                  {
LABEL_56:
                    m_Globals = Request->m_Globals;
                    if ( m_Globals->FxVerifierOn )
                    {
                      if ( m_Globals->FxVerifierIO )
                        FxRequestBase::SetVerifierFlags(Request, 128);
                    }
                    return (unsigned int)v36;
                  }
                  if ( v72 )
                  {
                    FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                  }
LABEL_185:
                  FxRequestBase::ContextReleaseAndRestore(Request);
                  return (unsigned int)v36;
                }
                if ( v26 > 2 )
                {
                  Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, &pBuffer);
                  v36 = Buffer;
                  if ( Buffer >= 0 )
                  {
                    Request->m_Irp.m_Irp->UserBuffer = pBuffer;
                    Buffer = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
                    v36 = Buffer;
                    if ( Buffer >= 0 )
                    {
                      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
                      goto LABEL_82;
                    }
                    v59 = 23;
                  }
                  else
                  {
                    v59 = 22;
                  }
                }
                else
                {
                  Buffer = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
                  v36 = Buffer;
                  if ( Buffer >= 0 )
                  {
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
                    if ( v26 == 1 )
                      Request_0a[0] = IoReadAccess;
                    v50 = FxRequestBuffer::GetOrAllocateMdl(
                            OutputBuffer,
                            this->m_Globals,
                            &Request->m_Irp.m_Irp->MdlAddress,
                            (_MDL **)&v13[1].m_CompletionParams.IoStatus.Information,
                            (unsigned __int8 *)&v13[1].m_CompletionParams.Parameters.Usb + 33,
                            Request_0a[0],
                            v13[1].m_CompletionParams.IoStatus.Information != 0,
                            &v13[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                    v36 = v50;
                    if ( v50 >= 0 )
                      goto LABEL_56;
                    WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, v50);
                    goto LABEL_82;
                  }
                  v59 = 20;
                }
                WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v59, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                goto LABEL_82;
              }
LABEL_136:
              BufferLength = OutputBuffer->u.Memory.Memory->GetBufferSize(OutputBuffer->u.Memory.Memory)
                           - OutputBuffer->u.Memory.Offsets->BufferOffset;
              goto LABEL_35;
            }
LABEL_33:
            BufferLength = OutputBuffer->u.Memory.Memory->GetBufferSize(OutputBuffer->u.Memory.Memory);
            goto LABEL_35;
          }
        }
        BufferLength = OutputBuffer->u.Mdl.Length;
        goto LABEL_35;
      }
      GetBufferSize = (__int64 (*)(void))InputBuffer->u.Memory.Memory->GetBufferSize;
      goto LABEL_126;
    }
    Offsets = InputBuffer->u.Memory.Offsets;
    if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
    {
      if ( Offsets->BufferLength )
        goto LABEL_131;
      LODWORD(v23) = InputBuffer->u.Memory.Memory->GetBufferSize(InputBuffer->u.Memory.Memory)
                   - InputBuffer->u.Memory.Offsets->BufferOffset;
    }
    else
    {
      v21 = InputBuffer->u.Memory.Memory;
      GetBufferSize = (__int64 (*)(void))v21->GetBufferSize;
      if ( (char *)GetBufferSize != (char *)FxMemoryObject::GetBufferSize )
      {
LABEL_126:
        LODWORD(v23) = GetBufferSize();
        goto LABEL_29;
      }
      v23 = v21[1].__vftable;
    }
LABEL_29:
    Length = (unsigned int)v23;
    goto LABEL_30;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
