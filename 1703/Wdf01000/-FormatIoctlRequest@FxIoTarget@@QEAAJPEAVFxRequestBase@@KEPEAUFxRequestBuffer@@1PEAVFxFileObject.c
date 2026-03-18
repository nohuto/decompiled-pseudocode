/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00102B0
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0011C80 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C00287A0 (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008FAC4 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0092BEC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0028E58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C0028EC4 (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0066474 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C00664A4 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00664E8 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
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
  CCHAR m_TargetStackSize; // cl
  FxRequestContext *v13; // rbx
  __int64 v14; // r8
  FxRequestContext *v15; // rax
  FxRequestContext *v16; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  void (__fastcall *StoreAndReferenceMemory)(FxRequestContext *, FxRequestBuffer *); // rax
  unsigned __int8 v19; // dl
  unsigned int Length; // r15d
  _WDFMEMORY_OFFSET *Offsets; // r15
  IFxMemory *v22; // rcx
  unsigned __int64 (__fastcall *v23)(IFxMemory *); // rax
  IFxMemory_vtbl *v24; // rax
  _WDFMEMORY_OFFSET *v25; // r12
  IFxMemory *v26; // rcx
  unsigned __int64 (__fastcall *GetBufferSize)(FxMemoryObject *); // rax
  IFxMemory_vtbl *v28; // rax
  unsigned int BufferLength; // r12d
  unsigned int v30; // r13d
  unsigned int v31; // eax
  unsigned __int64 v32; // r13
  FxRequestBufferType DataType; // ecx
  __int32 v34; // ecx
  __int32 v35; // ecx
  char *MappedSystemVa; // rdx
  __int64 (*v37)(void); // rax
  FxRequestBufferType v38; // ecx
  char *v39; // rcx
  int v40; // r15d
  FxRequestContext_vtbl *v41; // rcx
  _FX_DRIVER_GLOBALS *v42; // rax
  _IRP *Irp; // rax
  _IRP *v45; // rcx
  _IRP *v46; // rbx
  IFxMemory *v47; // rcx
  unsigned int (__fastcall *v48)(IFxMemory *, void *, int, const char *); // rax
  unsigned int v49; // edx
  __int32 v50; // ecx
  __int64 (*GetBuffer)(void); // rax
  IFxMemory *Memory; // rcx
  unsigned int (__fastcall *AddRef)(IFxMemory *, void *, int, const char *); // rax
  unsigned int v54; // edx
  int Buffer; // eax
  int v56; // eax
  unsigned int v57; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *v59; // r15
  unsigned __int16 v60; // r9
  unsigned __int16 v61; // ax
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rcx
  FxRequestBase *v64; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v66; // rdx
  FxRequestBase *v67; // rax
  FxTagTracker *v68; // rcx
  FxTagTracker *v69; // rcx
  unsigned __int16 v70; // r9
  _IRP::<unnamed_type_AssociatedIrp> v71; // rcx
  _MDL *Mdl; // rcx
  _WDFMEMORY_OFFSET *v73; // rax
  IFxMemory *v74; // rcx
  unsigned __int16 v75; // r9
  __int32 v76; // ecx
  _MDL *v77; // rcx
  _WDFMEMORY_OFFSET *v78; // rax
  IFxMemory *v79; // rcx
  _LOCK_OPERATION Operation; // [rsp+40h] [rbp-48h]
  void *pBuffer; // [rsp+48h] [rbp-40h] BYREF
  void *Caller; // [rsp+88h] [rbp+0h]
  char v84; // [rsp+98h] [rbp+10h]

  m_Irp = Request->m_Irp.m_Irp;
  m_RequestContext = Request->m_RequestContext;
  v84 = 0;
  if ( m_RequestContext && m_Irp )
  {
    ((void (__fastcall *)(FxRequestContext *))m_RequestContext->ReleaseAndRestore)(m_RequestContext);
    FxRequestBase::VerifierClearFormatted(Request);
  }
  m_TargetStackSize = this->m_TargetStackSize;
  if ( !m_TargetStackSize )
  {
    v57 = -1073741436;
    m_ObjectSize = this->m_ObjectSize;
    v59 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v59 = 0LL;
    WPP_IFR_SF_qd(Request->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, v59, -1073741436);
    return v57;
  }
  if ( !m_Irp )
    goto LABEL_61;
  if ( m_Irp->CurrentLocation <= m_TargetStackSize )
  {
    if ( Request->m_IrpAllocation != 1 )
    {
      v57 = -1073741616;
      v60 = 13;
LABEL_102:
      v61 = this->m_ObjectSize;
      v62 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v61 )
        v62 = 0LL;
      v63 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v64 = Request;
      if ( !Request->m_ObjectSize )
        v63 = 0LL;
      if ( v63 )
        v64 = (FxRequestBase *)v63;
      WPP_IFR_SF_qid(Request->m_Globals, 2u, 0xEu, v60, WPP_FxRequestBase_cpp_Traceguids, v64, v62, v57);
      return v57;
    }
LABEL_61:
    Irp = IoAllocateIrp(m_TargetStackSize, 0);
    if ( Irp )
    {
      v45 = Request->m_Irp.m_Irp;
      Request->m_Irp.m_Irp = Irp;
      v46 = 0LL;
      Request->m_Completed = 0;
      if ( v45 && v45 != Irp && Request->m_IrpAllocation == 1 )
        v46 = v45;
      Request->m_IrpAllocation = 1;
      if ( v46 )
      {
        m_Globals = Request->m_Globals;
        if ( m_Globals->FxVerboseOn )
        {
          v66 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
          v67 = Request;
          if ( !Request->m_ObjectSize )
            v66 = 0LL;
          if ( v66 )
            v67 = (FxRequestBase *)v66;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v46, v67);
        }
        IoFreeIrp(v46);
      }
      goto LABEL_5;
    }
    v57 = -1073741670;
    v60 = 12;
    goto LABEL_102;
  }
LABEL_5:
  v13 = Request->m_RequestContext;
  v14 = 1LL;
  Operation = IoWriteAccess;
  if ( v13 && v13->m_RequestType == 1 )
    goto LABEL_12;
  v15 = (FxRequestContext *)FxPoolAllocator(
                              this->m_Globals,
                              &this->m_Globals->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              this->m_Globals->Tag,
                              Caller);
  v13 = v15;
  if ( v15 )
  {
    v15->m_RequestMemory = 0LL;
    v15->m_RequestType = 1;
    *(_QWORD *)&v15->m_CompletionParams.Size = 0LL;
    v15->m_CompletionParams.IoStatus.Pointer = 0LL;
    v15->m_CompletionParams.IoStatus.Information = 0LL;
    v15->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v15->m_CompletionParams.Parameters.Write.Length = 0LL;
    v15->m_CompletionParams.Parameters.Write.Offset = 0LL;
    v15->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    v15->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
    v15->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v15->m_CompletionParams.Size = 72;
    v15->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v15->__vftable = (FxRequestContext_vtbl *)FxIoContext::`vftable';
    v15->m_CompletionParams.Type = WdfRequestTypeNoFormat;
    v15[1].__vftable = 0LL;
    *(_QWORD *)&v15[1].m_CompletionParams.Size = 0LL;
    v15[1].m_CompletionParams.IoStatus.Pointer = 0LL;
    v15[1].m_CompletionParams.IoStatus.Information = 0LL;
    v15[1].m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
    v15[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
    v15[1].m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
    *((_WORD *)&v15[1].m_CompletionParams.Parameters.Usb + 16) = 0;
    *((_BYTE *)&v15[1].m_CompletionParams.Parameters.Usb + 34) = 0;
    v15[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
    v16 = Request->m_RequestContext;
    if ( v16 != v15 )
    {
      if ( v16 )
        ((void (__fastcall *)(FxRequestContext *, __int64))v16->~FxRequestContext)(v16, 1LL);
      Request->m_RequestContext = v13;
    }
    v14 = 1LL;
LABEL_12:
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
    if ( StoreAndReferenceMemory != FxRequestContext::StoreAndReferenceMemory )
    {
      ((void (__fastcall *)(FxRequestContext *, FxRequestBuffer *, __int64))StoreAndReferenceMemory)(
        v13,
        InputBuffer,
        1LL);
LABEL_127:
      v14 = 1LL;
LABEL_16:
      if ( OutputBuffer->DataType == FxRequestBufferMemory )
      {
        Memory = OutputBuffer->u.Memory.Memory;
        AddRef = Memory->AddRef;
        if ( (char *)AddRef == (char *)FxMemoryObject::AddRef )
        {
          v54 = _InterlockedIncrement((volatile signed __int32 *)&Memory[-12].__vftable + 1);
          if ( SLOBYTE(Memory[-10].__vftable) < 0 )
          {
            v69 = (FxTagTracker *)Memory[-19].__vftable;
            if ( v69 )
              FxTagTracker::UpdateTagHistory(
                v69,
                v13,
                130,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp",
                TagAddRef,
                v54);
          }
        }
        else
        {
          AddRef(Memory, v13, 130, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
        }
      }
      else
      {
        if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
        {
          v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
          goto LABEL_19;
        }
        OutputBuffer->u.Memory.Memory->AddRef(
          OutputBuffer->u.Memory.Memory,
          v13,
          135,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
      }
      v13[1].m_CompletionParams.Parameters.Ioctl.Output.Length = (unsigned __int64)OutputBuffer->u.Memory.Memory;
LABEL_19:
      v19 = (Internal != 0) + 14;
      Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v19;
      *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 35) = v19;
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
          goto LABEL_31;
        }
        if ( InputBuffer->DataType != FxRequestBufferReferencedMdl )
        {
          Length = 0;
          goto LABEL_31;
        }
        Offsets = InputBuffer->u.Memory.Offsets;
        if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
        {
          if ( !Offsets->BufferLength )
          {
            Length = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64 (__fastcall *)(FxMemoryObject *), __int64))InputBuffer->u.Memory.Memory->GetBufferSize)(
                       InputBuffer->u.Memory.Memory,
                       FxMemoryObject::GetBufferSize,
                       v14)
                   - InputBuffer->u.Memory.Offsets->BufferOffset;
            goto LABEL_31;
          }
LABEL_143:
          Length = Offsets->BufferLength;
LABEL_31:
          if ( OutputBuffer->DataType != FxRequestBufferBuffer )
          {
            if ( OutputBuffer->DataType == FxRequestBufferMemory )
            {
              v25 = OutputBuffer->u.Memory.Offsets;
              if ( v25 && (v25->BufferOffset || v25->BufferLength) )
              {
                if ( v25->BufferLength )
                  goto LABEL_154;
                goto LABEL_148;
              }
              v26 = OutputBuffer->u.Memory.Memory;
              GetBufferSize = (unsigned __int64 (__fastcall *)(FxMemoryObject *))v26->GetBufferSize;
              if ( GetBufferSize == FxMemoryObject::GetBufferSize )
              {
                v28 = v26[1].__vftable;
LABEL_36:
                BufferLength = (unsigned int)v28;
                goto LABEL_38;
              }
LABEL_150:
              LODWORD(v28) = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64 (__fastcall *)(FxMemoryObject *), __int64))GetBufferSize)(
                               v26,
                               FxMemoryObject::GetBufferSize,
                               v14);
              goto LABEL_36;
            }
            if ( OutputBuffer->DataType != FxRequestBufferMdl )
            {
              if ( OutputBuffer->DataType != FxRequestBufferReferencedMdl )
              {
                BufferLength = 0;
                goto LABEL_38;
              }
              v25 = OutputBuffer->u.Memory.Offsets;
              if ( v25 && (v25->BufferOffset || v25->BufferLength) )
              {
                if ( v25->BufferLength )
                {
LABEL_154:
                  BufferLength = v25->BufferLength;
LABEL_38:
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = Length;
                  Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = BufferLength;
                  v30 = Ioctl & 3;
                  if ( !v30 )
                  {
                    if ( Length )
                    {
                      if ( Length > BufferLength )
                      {
                        v31 = Length;
                        goto LABEL_42;
                      }
LABEL_41:
                      v31 = BufferLength;
LABEL_42:
                      v32 = v31;
                      if ( v13[1].m_CompletionParams.Parameters.Write.Offset >= v31
                        && (v71.MasterIrp = (_IRP *)v13[1].__vftable) != 0LL )
                      {
                        Request->m_Irp.m_Irp->AssociatedIrp = v71;
                      }
                      else
                      {
                        Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                                  this->m_Globals,
                                                                                  &this->m_Globals->FxPoolFrameworks,
                                                                                  ExDefaultNonPagedPoolType,
                                                                                  v31,
                                                                                  this->m_Globals->Tag,
                                                                                  Caller);
                        if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
                        {
                          WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
                          v40 = -1073741670;
                          goto LABEL_199;
                        }
                        v84 = 1;
                      }
                      DataType = InputBuffer->DataType;
                      if ( InputBuffer->DataType != FxRequestBufferMemory )
                      {
                        if ( DataType == FxRequestBufferUnspecified )
                          goto LABEL_54;
                        v34 = DataType - 2;
                        if ( v34 )
                        {
                          v35 = v34 - 1;
                          if ( !v35 )
                          {
                            MappedSystemVa = (char *)InputBuffer->u.Memory.Memory;
                            goto LABEL_52;
                          }
                          if ( v35 != 1 )
                          {
                            v40 = -1073741811;
LABEL_178:
                            v75 = 18;
LABEL_181:
                            WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v75, WPP_FxIoTargetKm_cpp_Traceguids, v40);
                            goto LABEL_86;
                          }
                          Mdl = InputBuffer->u.RefMdl.Mdl;
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
                            v73 = InputBuffer->u.Memory.Offsets;
                            if ( v73 )
                              MappedSystemVa += v73->BufferOffset;
LABEL_52:
                            if ( !MappedSystemVa )
                              goto LABEL_54;
                            goto LABEL_53;
                          }
                        }
                        else
                        {
                          v74 = InputBuffer->u.Memory.Memory;
                          if ( (BYTE2(v74[1].__vftable) & 5) != 0 )
                            MappedSystemVa = (char *)v74[3].__vftable;
                          else
                            MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(
                                                       (PMDL)v74,
                                                       0,
                                                       MmCached,
                                                       0LL,
                                                       0,
                                                       ExDefaultMdlProtection | 0x10);
                          if ( MappedSystemVa )
                          {
LABEL_53:
                            memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, MappedSystemVa, Length);
LABEL_54:
                            v38 = OutputBuffer->DataType;
                            if ( OutputBuffer->DataType == FxRequestBufferBuffer )
                            {
                              v39 = (char *)OutputBuffer->u.Memory.Memory;
                              goto LABEL_56;
                            }
                            if ( v38 == FxRequestBufferUnspecified )
                            {
                              v39 = 0LL;
                              goto LABEL_56;
                            }
                            v50 = v38 - 1;
                            if ( !v50 )
                            {
                              GetBuffer = (__int64 (*)(void))OutputBuffer->u.Memory.Memory->GetBuffer;
                              if ( OutputBuffer->u.Memory.Offsets )
                                v39 = (char *)(OutputBuffer->u.Memory.Offsets->BufferOffset + GetBuffer());
                              else
                                v39 = (char *)GetBuffer();
                              goto LABEL_56;
                            }
                            v76 = v50 - 1;
                            if ( v76 )
                            {
                              if ( v76 != 2 )
                              {
                                v40 = -1073741811;
                                goto LABEL_180;
                              }
                              v77 = OutputBuffer->u.RefMdl.Mdl;
                              if ( (v77->MdlFlags & 5) != 0 )
                                v39 = (char *)v77->MappedSystemVa;
                              else
                                v39 = (char *)MmMapLockedPagesSpecifyCache(
                                                v77,
                                                0,
                                                MmCached,
                                                0LL,
                                                0,
                                                ExDefaultMdlProtection | 0x10);
                              if ( v39 )
                              {
                                v78 = OutputBuffer->u.Memory.Offsets;
                                if ( v78 )
                                  v39 += v78->BufferOffset;
                                goto LABEL_56;
                              }
                            }
                            else
                            {
                              v79 = OutputBuffer->u.Memory.Memory;
                              if ( (BYTE2(v79[1].__vftable) & 5) != 0 )
                                v39 = (char *)v79[3].__vftable;
                              else
                                v39 = (char *)MmMapLockedPagesSpecifyCache(
                                                (PMDL)v79,
                                                0,
                                                MmCached,
                                                0LL,
                                                0,
                                                ExDefaultMdlProtection | 0x10);
                              if ( v39 )
                              {
LABEL_56:
                                v40 = 0;
                                Request->m_Irp.m_Irp->UserBuffer = v39;
                                if ( v84 )
                                {
                                  v41 = v13[1].__vftable;
                                  v13[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
                                  v13[1].m_CompletionParams.Parameters.Write.Offset = v32;
                                  *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = BufferLength != 0;
                                  if ( v41 )
                                    FxPoolFree(v41);
                                }
                                else
                                {
                                  *((_BYTE *)&v13[1].m_CompletionParams.Parameters.Usb + 32) = BufferLength != 0;
                                }
                                goto LABEL_59;
                              }
                            }
                            v40 = -1073741670;
LABEL_180:
                            v75 = 19;
                            goto LABEL_181;
                          }
                        }
                        v40 = -1073741670;
                        goto LABEL_178;
                      }
                      v37 = (__int64 (*)(void))InputBuffer->u.Memory.Memory->GetBuffer;
                      if ( InputBuffer->u.Memory.Offsets )
                        MappedSystemVa = (char *)(InputBuffer->u.Memory.Offsets->BufferOffset + v37());
                      else
                        MappedSystemVa = (char *)v37();
                      goto LABEL_52;
                    }
                    if ( BufferLength )
                      goto LABEL_41;
                    Request->m_Irp.m_Irp->UserBuffer = 0LL;
                    Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                    v40 = 0;
LABEL_86:
                    if ( v40 >= 0 )
                    {
LABEL_59:
                      v42 = Request->m_Globals;
                      if ( v42->FxVerifierOn )
                      {
                        if ( v42->FxVerifierIO )
                          FxRequestBase::SetVerifierFlags(Request, 128);
                      }
                      return (unsigned int)v40;
                    }
                    if ( v84 )
                    {
                      FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
                    }
LABEL_199:
                    FxRequestBase::ContextReleaseAndRestore(Request);
                    return (unsigned int)v40;
                  }
                  if ( v30 > 2 )
                  {
                    Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, &pBuffer);
                    v40 = Buffer;
                    if ( Buffer >= 0 )
                    {
                      Request->m_Irp.m_Irp->UserBuffer = pBuffer;
                      Buffer = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
                      v40 = Buffer;
                      if ( Buffer >= 0 )
                      {
                        Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)pBuffer;
                        goto LABEL_86;
                      }
                      v70 = 23;
                    }
                    else
                    {
                      v70 = 22;
                    }
                  }
                  else
                  {
                    Buffer = FxRequestBuffer::GetBuffer(InputBuffer, &pBuffer);
                    v40 = Buffer;
                    if ( Buffer >= 0 )
                    {
                      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)pBuffer;
                      if ( v30 == 1 )
                        Operation = IoReadAccess;
                      v56 = FxRequestBuffer::GetOrAllocateMdl(
                              OutputBuffer,
                              this->m_Globals,
                              &Request->m_Irp.m_Irp->MdlAddress,
                              (_MDL **)&v13[1].m_CompletionParams.IoStatus.Information,
                              (unsigned __int8 *)&v13[1].m_CompletionParams.Parameters.Usb + 33,
                              Operation,
                              v13[1].m_CompletionParams.IoStatus.Information != 0,
                              &v13[1].m_CompletionParams.Parameters.Others.Argument4.Value);
                      v40 = v56;
                      if ( v56 >= 0 )
                        goto LABEL_59;
                      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxIoTargetKm_cpp_Traceguids, v56);
                      goto LABEL_86;
                    }
                    v70 = 20;
                  }
                  WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v70, WPP_FxIoTargetKm_cpp_Traceguids, Buffer);
                  goto LABEL_86;
                }
LABEL_148:
                BufferLength = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64 (__fastcall *)(FxMemoryObject *), __int64))OutputBuffer->u.Memory.Memory->GetBufferSize)(
                                 OutputBuffer->u.Memory.Memory,
                                 FxMemoryObject::GetBufferSize,
                                 v14)
                             - OutputBuffer->u.Memory.Offsets->BufferOffset;
                goto LABEL_38;
              }
              v26 = OutputBuffer->u.Memory.Memory;
              GetBufferSize = (unsigned __int64 (__fastcall *)(FxMemoryObject *))v26->GetBufferSize;
              goto LABEL_150;
            }
          }
          BufferLength = OutputBuffer->u.Mdl.Length;
          goto LABEL_38;
        }
        v22 = InputBuffer->u.Memory.Memory;
        v23 = v22->GetBufferSize;
        goto LABEL_138;
      }
      Offsets = InputBuffer->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        if ( Offsets->BufferLength )
          goto LABEL_143;
        LODWORD(v24) = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64 (__fastcall *)(FxMemoryObject *), __int64))InputBuffer->u.Memory.Memory->GetBufferSize)(
                         InputBuffer->u.Memory.Memory,
                         FxMemoryObject::GetBufferSize,
                         v14)
                     - InputBuffer->u.Memory.Offsets->BufferOffset;
      }
      else
      {
        v22 = InputBuffer->u.Memory.Memory;
        v23 = v22->GetBufferSize;
        if ( (char *)v23 != (char *)FxMemoryObject::GetBufferSize )
        {
LABEL_138:
          LODWORD(v24) = ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64 (__fastcall *)(FxMemoryObject *), __int64))v23)(
                           v22,
                           FxMemoryObject::GetBufferSize,
                           v14);
          goto LABEL_30;
        }
        v24 = v22[1].__vftable;
      }
LABEL_30:
      Length = (unsigned int)v24;
      goto LABEL_31;
    }
    if ( InputBuffer->DataType != FxRequestBufferMemory )
    {
      if ( InputBuffer->DataType != FxRequestBufferReferencedMdl )
      {
        v13->m_RequestMemory = 0LL;
        goto LABEL_16;
      }
      InputBuffer->u.Memory.Memory->AddRef(
        InputBuffer->u.Memory.Memory,
        v13,
        135,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
      v13->m_RequestMemory = InputBuffer->u.Memory.Memory;
      goto LABEL_127;
    }
    v47 = InputBuffer->u.Memory.Memory;
    v48 = v47->AddRef;
    if ( (char *)v48 == (char *)FxMemoryObject::AddRef )
    {
      v49 = _InterlockedIncrement((volatile signed __int32 *)&v47[-12].__vftable + 1);
      if ( SLOBYTE(v47[-10].__vftable) >= 0 )
        goto LABEL_71;
      v68 = (FxTagTracker *)v47[-19].__vftable;
      if ( !v68 )
        goto LABEL_71;
      FxTagTracker::UpdateTagHistory(
        v68,
        v13,
        130,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp",
        TagAddRef,
        v49);
    }
    else
    {
      v48(v47, v13, 130, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    }
    v14 = 1LL;
LABEL_71:
    v13->m_RequestMemory = InputBuffer->u.Memory.Memory;
    goto LABEL_16;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
  return 3221225626LL;
}
