/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000A980
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0007710 (imp_WdfDeviceMiniportCreate.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00106A0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject)
{
  ULONG Tag; // ecx
  SIZE_T v5; // r9
  _LIST_ENTRY *Caller; // rax
  FxDisposeList *v9; // rax
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxDisposeList *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  _FX_DRIVER_GLOBALS *v13; // rbp
  int v14; // eax
  unsigned int v15; // edi
  _FX_DRIVER_GLOBALS *v17; // rbp
  struct _KTHREAD *v18; // r15
  FxVerifierLock *v19; // rax
  _KEVENT *v20; // rax
  _KEVENT *v21; // rdi
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  *pObject = 0LL;
  Tag = FxDriverGlobals->Tag;
  v5 = 160LL;
  if ( FxDriverGlobals->FxVerifierHandle )
    v5 = 192LL;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v9 = (FxDisposeList *)FxPoolAllocator(
                          FxDriverGlobals,
                          (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                          ExDefaultNonPagedPoolType,
                          v5,
                          Tag,
                          Caller);
  v11 = v9;
  if ( !v9 )
    return 3221225626LL;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    memset(v9, 0, 0x20uLL);
    *(_DWORD *)(&v11->m_ObjectState + 1) = 1146058822;
    v11 = (FxDisposeList *)((char *)v11 + 32);
  }
  if ( !v11 )
    return 3221225626LL;
  v11->m_Globals = FxDriverGlobals;
  v11->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&v11->m_Type = 4147;
  v11->m_SpinLock.m_Lock = 0LL;
  v11->m_SpinLock.m_DbgFlagIsInitialized = 1;
  *(_DWORD *)&v11->m_ObjectFlags = 0x10000;
  v11->m_ParentObject = 0LL;
  v11->m_Refcnt = 1;
  v11->m_ChildListHead.Blink = &v11->m_ChildListHead;
  v11->m_ChildListHead.Flink = &v11->m_ChildListHead;
  v11->m_ChildEntry.Blink = &v11->m_ChildEntry;
  v11->m_ChildEntry.Flink = &v11->m_ChildEntry;
  m_Globals = v11->m_Globals;
  v11->m_DisposeSingleEntry.Next = 0LL;
  v11->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(v11, v10, 0);
  v11->__vftable = (FxDisposeList_vtbl *)&FxNonPagedObject::`vftable';
  v11->m_NPLock.m_Lock = 0LL;
  v11->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v11->m_ObjectFlags) < 0 )
  {
    v17 = v11->m_Globals;
    if ( v17->FxVerifierLock )
    {
      v18 = 0LL;
      v19 = (FxVerifierLock *)FxPoolAllocator(
                                v17,
                                (_LIST_ENTRY *)&v17->FxPoolFrameworks,
                                ExDefaultNonPagedPoolType,
                                0xB0uLL,
                                v17->Tag,
                                retaddr);
      if ( v19 && (FxVerifierLock::FxVerifierLock(v19, v17, v11), (v21 = v20) != 0LL) )
      {
        if ( v20[5].Header.Size )
        {
          v20[2].Header.LockNV = 1;
          v20[2].Header.WaitListHead.Flink = 0LL;
          LODWORD(v20[2].Header.WaitListHead.Blink) = 0;
          KeInitializeEvent(v20 + 3, SynchronizationEvent, 0);
          LOBYTE(v21[1].Header.WaitListHead.Blink) = 1;
        }
        v18 = (struct _KTHREAD *)v21;
      }
      else
      {
        WPP_IFR_SF_d(v17, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
      }
      v11[-1].m_WorkItemThread = v18;
    }
  }
  v11->m_List.Next = 0LL;
  v11->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable'.FxPoolTrackingOn;
  v11->m_SystemWorkItem = 0LL;
  v11->m_ListEnd = &v11->m_List.Next;
  v11->m_WorkItemThread = 0LL;
  v13 = v11->m_Globals;
  v11->m_ObjectFlags |= 0x800u;
  v14 = FxSystemWorkItem::_Create(v13, WdmObject, &v11->m_SystemWorkItem);
  v15 = v14;
  if ( v14 < 0 )
  {
    WPP_IFR_SF_d(v13, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, v14);
    FxObject::DeleteFromFailedCreate(v11);
  }
  else
  {
    v11->m_WdmObject = WdmObject;
    v15 = 0;
    *pObject = v11;
  }
  return v15;
}
