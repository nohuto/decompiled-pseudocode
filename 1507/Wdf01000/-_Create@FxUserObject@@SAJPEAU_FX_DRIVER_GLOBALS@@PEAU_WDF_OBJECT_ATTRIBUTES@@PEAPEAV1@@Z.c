/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0012150
 * Callers:
 *     imp_WdfObjectCreate @ 0x1C0012010 (imp_WdfObjectCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  _POOL_TYPE v3; // ebx
  FxDeviceBase *v4; // rbp
  ULONG Tag; // r14d
  unsigned __int64 ContextSizeOverride; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  _LIST_ENTRY *Caller; // rax
  FxUserObject *v12; // rax
  _FX_DRIVER_GLOBALS *v13; // rdx
  FxUserObject *v14; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v15; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int v18; // eax
  unsigned int v19; // edi
  _FX_DRIVER_GLOBALS *v21; // r13
  FxVerifierLock *v22; // rax
  FxDeviceBase *v23; // rax
  FxDeviceBase *v24; // r14
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  void *handle; // [rsp+68h] [rbp+10h] BYREF

  v3 = ExDefaultNonPagedPoolType;
  v4 = 0LL;
  Tag = FxDriverGlobals->Tag;
  ContextSizeOverride = 0LL;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  if ( FxCalculateObjectTotalSize2(FxDriverGlobals, 0x78u, 0, ContextSizeOverride, (unsigned __int64 *)&handle) < 0 )
    goto LABEL_35;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v12 = (FxUserObject *)FxPoolAllocator(
                          FxDriverGlobals,
                          (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                          v3,
                          (SIZE_T)handle,
                          Tag,
                          Caller);
  v14 = v12;
  if ( v12 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v12, 0, 0x20uLL);
      *(_DWORD *)(&v14->m_ObjectState + 1) = 1146058822;
      v14 = (FxUserObject *)((char *)v14 + 32);
    }
    memset(&v14[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v14[1].m_Type = v14;
    if ( Attributes )
    {
      v15 = Attributes->ContextTypeInfo;
      if ( v15 )
      {
        ContextSize = Attributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v15->ContextSize;
        memset(&v14[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v14[1].m_ChildListHead.Blink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
    }
  }
  if ( v14 )
  {
    v14->m_Globals = FxDriverGlobals;
    v14->__vftable = (FxUserObject_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v14->m_Type = 8392716;
    v14->m_SpinLock.m_Lock = 0LL;
    v14->m_SpinLock.m_DbgFlagIsInitialized = 1;
    *(_DWORD *)&v14->m_ObjectFlags = 0x10000;
    v14->m_ParentObject = 0LL;
    v14->m_Refcnt = 1;
    v14->m_ChildListHead.Blink = &v14->m_ChildListHead;
    v14->m_ChildListHead.Flink = &v14->m_ChildListHead;
    v14->m_ChildEntry.Blink = &v14->m_ChildEntry;
    v14->m_ChildEntry.Flink = &v14->m_ChildEntry;
    m_Globals = v14->m_Globals;
    v14->m_DisposeSingleEntry.Next = 0LL;
    v14->m_DeviceBase = 0LL;
    if ( m_Globals->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v14, v13, 0);
    v14->__vftable = (FxUserObject_vtbl *)&FxNonPagedObject::`vftable';
    v14->m_NPLock.m_Lock = 0LL;
    v14->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v14->m_ObjectFlags) < 0 )
    {
      v21 = v14->m_Globals;
      if ( v21->FxVerifierLock )
      {
        v22 = (FxVerifierLock *)FxPoolAllocator(
                                  v21,
                                  (_LIST_ENTRY *)&v21->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0xB0uLL,
                                  v21->Tag,
                                  retaddr);
        if ( v22 && (FxVerifierLock::FxVerifierLock(v22, v21, v14), (v24 = v23) != 0LL) )
        {
          if ( BYTE2(v23->IFxHasCallbacks::__vftable) )
          {
            *(_DWORD *)&v23->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v23->m_SpinLock.m_Lock = 0LL;
            LODWORD(v23->m_ParentObject) = 0;
            KeInitializeEvent((PRKEVENT)&v23->m_ChildEntry, SynchronizationEvent, 0);
            LOBYTE(v24->m_ChildListHead.Blink) = 1;
          }
          v4 = v24;
        }
        else
        {
          WPP_IFR_SF_d(v21, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
        }
        v14[-1].m_DeviceBase = v4;
      }
    }
    v14->__vftable = (FxUserObject_vtbl *)&FxUserObject::`vftable';
    v18 = FxObject::Commit(v14, Attributes, &handle, 0LL, 1u);
    v19 = v18;
    if ( v18 < 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, v18);
      FxObject::DeleteFromFailedCreate(v14);
    }
    else
    {
      *pUserObject = v14;
    }
    return v19;
  }
  else
  {
LABEL_35:
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
