/*
 * XREFs of imp_WdfRequestCreate @ 0x1C0004DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C006A32C (WPP_IFR_SF_qLqd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxRequestBase *v15; // rax
  FxRequestBase *v16; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // rax
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  KIRQL v21; // al
  bool v22; // zf
  char v23; // al
  unsigned __int64 v24; // r12
  void *ParentObject; // rdx
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v28; // rdx
  void *PPObject; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 Size; // [rsp+58h] [rbp-40h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  FxIrpQueue *Tag; // [rsp+A0h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+B0h] [rbp+18h] BYREF
  WDFREQUEST__ **v34; // [rsp+B8h] [rbp+20h]

  v34 = Request;
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
      ParentObject = RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        FxObjectHandleGetPtr(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
          (unsigned __int64)ParentObject,
          0x1000u,
          &PPObject);
        v7 = pTarget;
        m_Globals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
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
      goto LABEL_58;
    if ( m_Globals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v15 = (FxRequestBase *)FxPoolAllocator(
                             m_Globals,
                             &m_Globals->FxPoolFrameworks,
                             v12,
                             Size,
                             (unsigned int)Tag,
                             Caller);
    v16 = v15;
    if ( v15 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v15, 0, 0x20uLL);
        *(_DWORD *)(&v16->m_ObjectState + 1) = 1146058822;
        v16 = (FxRequestBase *)((char *)v16 + 32);
      }
      v16[1].m_CsqContext.Irp = 0LL;
      v16[1].m_CsqContext.Csq = 0LL;
      v16[1].m_DrainSingleEntry.Next = 0LL;
      v16[1].m_Irp.m_Irp = 0LL;
      v16[1].m_Target = 0LL;
      v16[1].m_ListEntry.Flink = (_LIST_ENTRY *)v16;
      if ( RequestAttributes )
      {
        v17 = RequestAttributes->ContextTypeInfo;
        if ( v17 )
        {
          ContextSize = RequestAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v17->ContextSize;
          memset(&v16[1].m_RequestContext, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v16[1].m_Irp.m_Irp = (_IRP *)RequestAttributes->ContextTypeInfo;
      }
    }
    if ( v16 )
    {
      v16->m_Globals = m_Globals;
      v16->__vftable = (FxRequestBase_vtbl *)&FxObject::`vftable';
      *(_DWORD *)&v16->m_Type = 24121352;
      v16->m_SpinLock.m_Lock = 0LL;
      v16->m_SpinLock.m_DbgFlagIsInitialized = 1;
      v16->m_Refcnt = 1;
      *(_DWORD *)&v16->m_ObjectFlags = 0x10000;
      v16->m_ParentObject = 0LL;
      v16->m_ChildListHead.Blink = &v16->m_ChildListHead;
      v16->m_ChildListHead.Flink = &v16->m_ChildListHead;
      v16->m_ChildEntry.Blink = &v16->m_ChildEntry;
      v16->m_ChildEntry.Flink = &v16->m_ChildEntry;
      v18 = v16->m_Globals;
      v16->m_DisposeSingleEntry.Next = 0LL;
      v16->m_DeviceBase = 0LL;
      if ( v18->FxVerifierOn )
        FxObject::Vf_VerifyConstruct(v16, (_FX_DRIVER_GLOBALS *)1, 0);
      v16->__vftable = (FxRequestBase_vtbl *)&FxNonPagedObject::`vftable';
      v16->m_NPLock.m_Lock = 0LL;
      v16->m_NPLock.m_DbgFlagIsInitialized = 1;
      if ( SLOBYTE(v16->m_ObjectFlags) < 0 )
      {
        v28 = v16->m_Globals;
        if ( v28->FxVerifierLock )
        {
          Tag = 0LL;
          FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&Tag, v28, v16);
          v16[-1].m_IrpQueue = Tag;
        }
      }
      v16->__vftable = (FxRequestBase_vtbl *)&FxRequestBase::`vftable';
      v16->m_Irp.m_Irp = 0LL;
      v16->m_CancelRoutine.m_Cancel = 0LL;
      v16->m_CompletionRoutine.m_Completion = 0LL;
      v16->m_CanComplete = 0;
      v16->m_IrpAllocation = 1;
      WdfBindInfo = m_Globals->WdfBindInfo;
      Major = WdfBindInfo->Version.Major;
      if ( Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      {
        v21 = KeAcquireSpinLockRaiseToDpc(&v16->m_SpinLock.m_Lock);
        v16->m_ObjectFlags |= 0x800u;
        KeReleaseSpinLock(&v16->m_SpinLock.m_Lock, v21);
        v5 = v34;
      }
      v22 = v16->m_Irp.m_Irp == 0LL;
      v16->m_Target = 0LL;
      v16->m_TargetFlags = 0;
      v16->m_TargetCompletionContext = 0LL;
      v23 = v22;
      v16->m_Completed = v23;
      v16->m_Canceled = 0;
      v16->m_PriorityBoost = 0;
      v16->m_RequestContext = 0LL;
      v16->m_Timer = 0LL;
      v16->m_CsqContext.Irp = (_IRP *)&v16->120;
      v16->m_ListEntry.Flink = (_LIST_ENTRY *)&v16->120;
      v16->__vftable = (FxRequestBase_vtbl *)&FxRequest::`vftable';
      v16->m_DrainSingleEntry.Next = 0LL;
      *(_QWORD *)&v16->m_SystemBufferOffset = 216LL;
      v16->m_IrpQueue = 0LL;
      v16->m_IrpCompletionReferenceCount = 0;
      v16->m_AllocatedMdl = 0LL;
      *(_DWORD *)&v16->m_OutputBufferOffset = 232;
      v16->m_CompletionState = 0;
      *(_QWORD *)&v16[1].m_Type = &FxRequestSystemBuffer::`vftable';
      v16[1].m_Globals = 0LL;
      *(_QWORD *)&v16[1].m_ObjectFlags = &FxRequestOutputBuffer::`vftable';
      v16[1].m_ChildListHead.Flink = 0LL;
      v16[1].__vftable = 0LL;
      *(&v16[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
      *(_QWORD *)&v16[1].m_SpinLock.m_DbgFlagIsInitialized = (char *)v16 + 288;
      v16[1].m_ChildListHead.Blink = (_LIST_ENTRY *)&v16[1].m_ChildListHead.Blink;
      v16[1].m_ParentObject = (FxRequestBase *)((char *)v16 + 304);
      v16[1].m_SpinLock.m_Lock = (unsigned __int64)&v16[1].m_SpinLock.m_Lock;
      v16[1].m_ChildEntry.Blink = &v16[1].m_ChildEntry;
      v16[1].m_ChildEntry.Flink = &v16[1].m_ChildEntry;
      v16[1].m_NPLock.m_DbgFlagIsInitialized = 1;
      *((_WORD *)&v16[1].m_NPLock.m_DbgFlagIsInitialized + 1) = 0;
      v16[1].m_DisposeSingleEntry.Next = 0LL;
      v16[1].m_DeviceBase = 0LL;
      if ( v7 )
        _a4 = FxRequestBase::ValidateTarget(v16, v7);
      if ( _a4 < 0 || (_a4 = FxObject::Commit(v16, RequestAttributes, (void **)&Tag, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        FxObject::DeleteFromFailedCreate(v16);
      }
      else
      {
        _a3 = (unsigned __int64)v16;
      }
    }
    else
    {
LABEL_58:
      _a4 = -1073741670;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qLqd(m_Globals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, (const void *)_a3, _a4);
    if ( _a4 >= 0 )
    {
      if ( *(_WORD *)(_a3 + 10) )
        v24 = _a3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v24 = 0LL;
      *v5 = (WDFREQUEST__ *)v24;
    }
  }
  return (unsigned int)_a4;
}
