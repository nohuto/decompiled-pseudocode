/*
 * XREFs of imp_WdfRequestCreate @ 0x1C0006160
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0011880 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C006721C (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C007C944 (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        unsigned __int64 Target,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *DriverName; // r14
  WDFREQUEST__ **v5; // r13
  __int64 v7; // rcx
  FxIoTarget *v8; // rdi
  unsigned __int64 _a3; // r12
  int _a4; // esi
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v12; // ebx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxRequestBase *v15; // rax
  FxRequestBase *v16; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // rdx
  bool v19; // zf
  FxObject *Driver; // rdi
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  KIRQL v23; // al
  KIRQL v24; // si
  KIRQL v25; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  unsigned __int16 m_ObjectSize; // ax
  char *v29; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  _FX_DRIVER_GLOBALS *v32; // rax
  unsigned __int64 v33; // r12
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  void *ParentObject; // rdx
  unsigned __int64 ContextSize; // r8
  void *PPObject; // [rsp+50h] [rbp-58h] BYREF
  FxIoTarget *pTarget; // [rsp+58h] [rbp-50h] BYREF
  void *v40; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int Tag; // [rsp+B0h] [rbp+8h]
  KIRQL Taga; // [rsp+B0h] [rbp+8h]
  unsigned __int64 Size; // [rsp+C0h] [rbp+18h] BYREF
  WDFREQUEST__ **v45; // [rsp+C8h] [rbp+20h]

  v45 = Request;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v5 = Request;
  if ( Target )
  {
    LOWORD(v7) = 0;
    v8 = (FxIoTarget *)(~Target & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Target & 1) != 0 )
    {
      v7 = LOWORD(v8->__vftable);
      v8 = (FxIoTarget *)((char *)v8 - v7);
    }
    if ( v8->m_Type == 4608 )
    {
      pTarget = v8;
    }
    else
    {
      FxObjectHandleGetPtrQI(v8, (void **)&pTarget, (void *)Target, 0x1200u, v7);
      v8 = pTarget;
    }
    DriverName = v8->m_Globals;
  }
  else
  {
    pTarget = 0LL;
    v8 = 0LL;
    if ( RequestAttributes )
    {
      ParentObject = RequestAttributes->ParentObject;
      if ( ParentObject )
      {
        FxObjectHandleGetPtr(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          (unsigned __int64)ParentObject,
          0x1000u,
          &v40);
        v8 = pTarget;
        DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v40 + 2);
      }
    }
  }
  if ( !v5 )
    FxVerifierNullBugCheck(DriverName, retaddr);
  _a3 = 0LL;
  *v5 = 0LL;
  _a4 = FxValidateObjectAttributes(DriverName, RequestAttributes, 0);
  if ( _a4 >= 0 )
  {
    ContextSizeOverride = 0LL;
    v12 = ExDefaultNonPagedPoolType;
    Tag = DriverName->Tag;
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
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x168u, 0, ContextSizeOverride, &Size) < 0 )
      goto LABEL_83;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v15 = (FxRequestBase *)FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v12, Size, Tag, Caller);
    v16 = v15;
    if ( v15 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v15, 0, 0x30uLL);
        LODWORD(v16->m_ChildListHead.Flink) = 1146058822;
        v16 = (FxRequestBase *)((char *)v16 + 48);
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
      FxRequestBase::FxRequestBase(
        v16,
        DriverName,
        0x168u,
        0LL,
        FxRequestOwnsIrp,
        FxRequestConstructorCallerIsDriver,
        FxObjectTypeExternal);
      v16->__vftable = (FxRequestBase_vtbl *)FxRequest::`vftable';
      *(_QWORD *)&v16[1].m_Type = FxRequestSystemBuffer::`vftable';
      v16[1].m_Globals = 0LL;
      *(_QWORD *)&v16[1].m_ObjectFlags = FxRequestOutputBuffer::`vftable';
      v16[1].m_ChildListHead.Flink = 0LL;
      v16->m_OutputBufferOffset = 232;
      v16->m_SystemBufferOffset = 216;
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
      if ( v8 )
        _a4 = FxRequestBase::ValidateTarget(v16, v8);
      if ( _a4 >= 0 )
      {
        v19 = v16->m_ObjectSize == 0;
        Driver = 0LL;
        PPObject = 0LL;
        if ( v19 )
        {
          _a4 = -1073741816;
        }
        else
        {
          if ( !RequestAttributes )
            goto LABEL_87;
          if ( RequestAttributes->ExecutionLevel == WdfExecutionLevelPassive )
          {
            FxObject::MarkPassiveCallbacks(v16, ObjectLock);
            Driver = (FxObject *)PPObject;
          }
          v21 = (unsigned __int64)RequestAttributes->ParentObject;
          if ( v21 )
          {
            LOWORD(v22) = 0;
            Driver = (FxObject *)(~v21 & 0xFFFFFFFFFFFFFFF8uLL);
            if ( (v21 & 1) != 0 )
            {
              v22 = LOWORD(Driver->__vftable);
              Driver = (FxObject *)((char *)Driver - v22);
            }
            if ( Driver->m_Type == 4096 )
            {
              PPObject = Driver;
            }
            else
            {
              FxObjectHandleGetPtrQI(Driver, &PPObject, (void *)v21, 0x1000u, v22);
              Driver = (FxObject *)PPObject;
            }
          }
          else
          {
LABEL_87:
            if ( !v16->m_ParentObject )
            {
              m_Globals = v16->m_Globals;
              if ( (FxRequestBase *)m_Globals->Driver != v16 )
              {
                Driver = m_Globals->Driver;
                PPObject = Driver;
              }
            }
          }
          if ( !Driver )
            goto LABEL_43;
          v23 = KeAcquireSpinLockRaiseToDpc(&v16->m_SpinLock.m_Lock);
          v19 = v16->m_ObjectState == 1;
          v24 = v23;
          LOBYTE(Size) = v23;
          if ( v19 )
          {
            if ( v16->m_ParentObject )
            {
              KeReleaseSpinLock(&v16->m_SpinLock.m_Lock, v23);
              _a4 = -1071644147;
            }
            else
            {
              v25 = KeAcquireSpinLockRaiseToDpc(&Driver->m_SpinLock.m_Lock);
              Taga = v25;
              if ( Driver->m_ObjectState == 1 )
              {
                Blink = Driver->m_ChildListHead.Blink;
                p_m_ChildEntry = &v16->m_ChildEntry;
                if ( Blink->Flink != &Driver->m_ChildListHead )
                  __fastfail(3u);
                p_m_ChildEntry->Flink = &Driver->m_ChildListHead;
                v16->m_ChildEntry.Blink = Blink;
                Blink->Flink = p_m_ChildEntry;
                Driver->m_ChildListHead.Blink = p_m_ChildEntry;
                if ( !v16->m_DeviceBase )
                  v16->m_DeviceBase = Driver->m_DeviceBase;
                KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, v25);
                _a4 = 0;
                v16->m_ParentObject = Driver;
              }
              else
              {
                FxObject::TraceDroppedEvent(Driver, FxObjectDroppedEventAddChildObjectInternal);
                KeReleaseSpinLock(&Driver->m_SpinLock.m_Lock, Taga);
                _a4 = -1073741738;
              }
              KeReleaseSpinLock(&v16->m_SpinLock.m_Lock, Size);
              if ( _a4 >= 0 )
              {
                v5 = v45;
LABEL_43:
                if ( RequestAttributes )
                {
                  m_ObjectSize = v16->m_ObjectSize;
                  if ( m_ObjectSize )
                    v29 = (char *)v16 + m_ObjectSize;
                  else
                    v29 = 0LL;
                  EvtDestroyCallback = RequestAttributes->EvtDestroyCallback;
                  if ( EvtDestroyCallback )
                    *((_QWORD *)v29 + 3) = EvtDestroyCallback;
                  EvtCleanupCallback = RequestAttributes->EvtCleanupCallback;
                  if ( EvtCleanupCallback )
                  {
                    *((_QWORD *)v29 + 2) = EvtCleanupCallback;
                    v16->m_ObjectFlags |= 0x400u;
                  }
                }
                v32 = v16->m_Globals;
                v16->m_ObjectFlags |= 8u;
                if ( v32->FxVerifierOn )
                  FxObject::Vf_VerifyLeakDetectionConsiderObject(v16, v18);
                _a4 = 0;
                _a3 = (unsigned __int64)v16;
                goto LABEL_53;
              }
            }
          }
          else
          {
            FxObject::TraceDroppedEvent(v16, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock(&v16->m_SpinLock.m_Lock, v24);
            _a4 = -1073741738;
          }
          v5 = v45;
        }
      }
      WPP_IFR_SF_d(DriverName, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
      FxObject::DeleteFromFailedCreate(v16);
    }
    else
    {
LABEL_83:
      _a4 = -1073741670;
    }
LABEL_53:
    if ( DriverName->FxVerboseOn )
      WPP_IFR_SF_qLqd(DriverName, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, 0LL, 1u, (const void *)_a3, _a4);
    if ( _a4 >= 0 )
    {
      if ( *(_WORD *)(_a3 + 10) )
        v33 = _a3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v33 = 0LL;
      *v5 = (WDFREQUEST__ *)v33;
    }
  }
  return (unsigned int)_a4;
}
