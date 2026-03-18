/*
 * XREFs of imp_WdfRequestCreate @ 0x1C0016110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0075864 (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  WDFREQUEST__ **v5; // rdi
  FxIoTarget *v7; // r14
  __int64 v8; // rcx
  unsigned __int64 _a3; // r12
  int _a4; // r15d
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v12; // ebx
  _LIST_ENTRY *Caller; // rax
  FxRequestBase *v14; // rax
  FxRequestBase *v15; // rbx
  _FX_DRIVER_GLOBALS *v16; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  KIRQL v19; // al
  bool v20; // zf
  char v21; // al
  unsigned __int64 v22; // r12
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v25; // rax
  unsigned __int64 ParentObject; // r8
  unsigned __int64 ContextSize; // r8
  FxObject *v28; // rbp
  __int64 v29; // rcx
  _FX_DRIVER_GLOBALS *v30; // rcx
  FxVerifierLock *v31; // rax
  unsigned __int64 v32; // rax
  void *PPObject; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 Size; // [rsp+58h] [rbp-40h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+98h] [rbp+0h]
  _FX_DRIVER_GLOBALS *Tag; // [rsp+A0h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+B0h] [rbp+18h] BYREF
  WDFREQUEST__ **v38; // [rsp+B8h] [rbp+20h]

  v38 = Request;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  v5 = Request;
  if ( Target )
  {
    v7 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v8) = 0;
    if ( (Target & 1) != 0 )
    {
      v8 = LOWORD(v7->__vftable);
      v7 = (FxIoTarget *)((char *)v7 - v8);
    }
    if ( v7->m_Type == 4608 )
    {
      pTarget = v7;
    }
    else
    {
      FxObjectHandleGetPtrQI(v7, (void **)&pTarget, (void *)Target, 0x1200u, v8);
      v7 = pTarget;
    }
    m_Globals = v7->m_Globals;
  }
  else
  {
    pTarget = 0LL;
    v7 = 0LL;
    if ( RequestAttributes )
    {
      ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        v28 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v29) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v29 = LOWORD(v28->__vftable);
          v28 = (FxObject *)((char *)v28 - v29);
        }
        if ( v28->m_Type == 4096 )
        {
          PPObject = v28;
        }
        else
        {
          FxObjectHandleGetPtrQI(v28, &PPObject, (void *)ParentObject, 0x1000u, v29);
          v7 = pTarget;
          v28 = (FxObject *)PPObject;
        }
        m_Globals = v28->m_Globals;
      }
    }
  }
  if ( !v5 )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = 0LL;
  *v5 = 0LL;
  _a4 = FxValidateObjectAttributes(m_Globals, RequestAttributes, 0);
  if ( _a4 >= 0 )
  {
    ContextSizeOverride = 0LL;
    v12 = ExDefaultNonPagedPoolType;
    LODWORD(Tag) = m_Globals->Tag;
    if ( RequestAttributes )
    {
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = RequestAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0x168u, 0, ContextSizeOverride, &Size) < 0 )
      goto LABEL_68;
    if ( m_Globals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v14 = (FxRequestBase *)FxPoolAllocator(
                             m_Globals,
                             (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                             v12,
                             Size,
                             (ULONG)Tag,
                             Caller);
    v15 = v14;
    if ( v14 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v14, 0, 0x20uLL);
        *(_DWORD *)(&v15->m_ObjectState + 1) = 1146058822;
        v15 = (FxRequestBase *)((char *)v15 + 32);
      }
      v15[1].m_CsqContext.Irp = 0LL;
      v15[1].m_CsqContext.Csq = 0LL;
      v15[1].m_DrainSingleEntry.Next = 0LL;
      v15[1].m_Irp.m_Irp = 0LL;
      v15[1].m_Target = 0LL;
      v15[1].m_ListEntry.Flink = (_LIST_ENTRY *)v15;
      if ( RequestAttributes )
      {
        v25 = RequestAttributes->ContextTypeInfo;
        if ( v25 )
        {
          ContextSize = RequestAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v25->ContextSize;
          memset(&v15[1].m_RequestContext, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v15[1].m_Irp.m_Irp = (_IRP *)RequestAttributes->ContextTypeInfo;
      }
    }
    if ( v15 )
    {
      v15->m_Globals = m_Globals;
      v15->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v15->m_Type = 24121352;
      v15->m_SpinLock.m_Lock = 0LL;
      v15->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v15->m_Refcnt = 1;
      *(_DWORD *)&v15->m_ObjectFlags = 0x10000;
      v15->m_ParentObject = 0LL;
      v15->m_ChildListHead.Blink = &v15->m_ChildListHead;
      v15->m_ChildListHead.Flink = &v15->m_ChildListHead;
      v15->m_ChildEntry.Blink = &v15->m_ChildEntry;
      v15->m_ChildEntry.Flink = &v15->m_ChildEntry;
      v16 = v15->m_Globals;
      v15->m_DisposeSingleEntry.Next = 0LL;
      v15->m_DeviceBase = 0LL;
      if ( v16->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v15, (_FX_DRIVER_GLOBALS *)1, 0);
      v15->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
      v15->m_NPLock.m_Lock = 0LL;
      v15->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v15->m_ObjectFlags) < 0 )
      {
        v30 = v15->m_Globals;
        Tag = v30;
        if ( v30->FxVerifierLock )
        {
          v31 = (FxVerifierLock *)FxPoolAllocator(
                                    v30,
                                    (_LIST_ENTRY *)&v30->FxPoolFrameworks,
                                    ExDefaultNonPagedPoolType,
                                    0xB0uLL,
                                    v30->Tag,
                                    retaddr);
          if ( v31 && (FxVerifierLock::FxVerifierLock(v31, Tag, v15), (Size = v32) != 0) )
          {
            if ( *(_BYTE *)(v32 + 122) )
            {
              *(_DWORD *)(v32 + 48) = 1;
              *(_QWORD *)(v32 + 56) = 0LL;
              *(_DWORD *)(v32 + 64) = 0;
              KeInitializeEvent((PRKEVENT)(v32 + 72), SynchronizationEvent, 0);
              v32 = Size;
              *(_BYTE *)(Size + 40) = 1;
            }
          }
          else
          {
            WPP_IFR_SF_d(Tag, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
            v32 = 0LL;
          }
          v15[-1].m_IrpQueue = (FxIrpQueue *)v32;
        }
      }
      v15->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
      v15->m_Irp.m_Irp = 0LL;
      v15->m_CancelRoutine.m_Cancel = 0LL;
      v15->m_CompletionRoutine.m_Completion = 0LL;
      v15->m_CanComplete = 0;
      v15->m_IrpAllocation = 1;
      WdfBindInfo = m_Globals->WdfBindInfo;
      Major = WdfBindInfo->Version.Major;
      if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      {
        v19 = KeAcquireSpinLockRaiseToDpc(&v15->m_SpinLock.m_Lock);
        v15->m_ObjectFlags |= 0x800u;
        KeReleaseSpinLock(&v15->m_SpinLock.m_Lock, v19);
        v5 = v38;
      }
      v20 = v15->m_Irp.m_Irp == 0LL;
      v15->m_Target = 0LL;
      v15->m_TargetFlags = 0;
      v15->m_TargetCompletionContext = 0LL;
      v21 = v20;
      v15->m_Completed = v21;
      v15->m_Canceled = 0;
      v15->m_PriorityBoost = 0;
      v15->m_RequestContext = 0LL;
      v15->m_Timer = 0LL;
      v15->m_CsqContext.Irp = (_IRP *)&v15->120;
      v15->m_ListEntry.Flink = (_LIST_ENTRY *)&v15->120;
      v15->__vftable = (FxRequestBase_vtbl *)&FxRequest::`vftable';
      v15->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v15->m_SystemBufferOffset = 216LL;
      v15->m_IrpQueue = 0LL;
      v15->m_IrpCompletionReferenceCount = 0;
      v15->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v15->m_OutputBufferOffset = 232;
      v15->m_CompletionState = 0;
      *(_QWORD *)&v15[1].m_Type = &FxRequestSystemBuffer::`vftable';
      v15[1].m_Globals = 0LL;
      *(_QWORD *)&v15[1].m_ObjectFlags = &FxRequestOutputBuffer::`vftable';
      v15[1].m_ChildListHead.Flink = 0LL;
      v15[1].__vftable = 0LL;
      *(&v15[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
      *(_QWORD *)&v15[1].m_SpinLock.m_DbgFlagIsInitialized = (char *)v15 + 288;
      v15[1].m_ChildListHead.Blink = (_LIST_ENTRY *)&v15[1].m_ChildListHead.Blink;
      v15[1].m_ParentObject = (FxRequestBase *)((char *)v15 + 304);
      v15[1].m_SpinLock.m_Lock = (unsigned __int64)&v15[1].m_SpinLock.m_Lock;
      v15[1].m_ChildEntry.Blink = &v15[1].m_ChildEntry;
      v15[1].m_ChildEntry.Flink = &v15[1].m_ChildEntry;
      v15[1].m_NPLock.m_DbgFlagIsInitialized = 1;
      *((_WORD *)&v15[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
      v15[1].m_DisposeSingleEntry.Next = 0LL;
      v15[1].m_DeviceBase = 0LL;
      if ( v7 )
        _a4 = FxRequestBase::ValidateTarget(v15, (unsigned __int64)v7);
      if ( _a4 < 0 || (_a4 = FxObject::Commit(v15, RequestAttributes, (void **)&Tag, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        FxObject::DeleteFromFailedCreate(v15);
      }
      else
      {
        _a3 = (unsigned __int64)v15;
      }
    }
    else
    {
LABEL_68:
      _a4 = -1073741670;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qLqd(m_Globals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, (const void *)_a3, _a4);
    if ( _a4 >= 0 )
    {
      if ( *(_WORD *)(_a3 + 10) )
        v22 = _a3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v22 = 0LL;
      *v5 = (WDFREQUEST__ *)v22;
    }
  }
  return (unsigned int)_a4;
}
