/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001BE08
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00210C0 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C0076EC0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C001C288 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0023590 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *WdmObject,
        FxDisposeList **pObject)
{
  ULONG Tag; // ecx
  void *Caller; // rax
  FxDisposeList *v8; // rax
  FxDisposeList *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rsi
  int v11; // eax
  int v12; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp+8h] BYREF

  *pObject = 0LL;
  Tag = FxDriverGlobals->Tag;
  Caller = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    Caller = 0LL;
  v8 = (FxDisposeList *)FxPoolAllocator(
                          FxDriverGlobals,
                          &FxDriverGlobals->FxPoolFrameworks,
                          ExDefaultNonPagedPoolType,
                          FxDriverGlobals->FxVerifierHandle != 0 ? 192LL : 160LL,
                          Tag,
                          Caller);
  v9 = v8;
  if ( !v8 )
    goto LABEL_15;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    memset(v8, 0, 0x20uLL);
    *(_DWORD *)(&v9->m_ObjectState + 1) = 1146058822;
    v9 = (FxDisposeList *)((char *)v9 + 32);
  }
  if ( v9 )
  {
    *(_DWORD *)&v9->m_Type = 4147;
    v9->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable';
    v9->m_Globals = FxDriverGlobals;
    v9->m_SpinLock.m_Lock = 0LL;
    v9->m_SpinLock.m_DbgFlagIsInitialized = 1;
    FxObject::Construct(v9, 0);
    v9->__vftable = (FxDisposeList_vtbl *)&FxNonPagedObject::`vftable';
    v9->m_NPLock.m_Lock = 0LL;
    v9->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v9->m_ObjectFlags) < 0 )
    {
      m_Globals = v9->m_Globals;
      if ( m_Globals->FxVerifierLock )
      {
        VerifierLock = 0LL;
        FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, v9);
        v9[-1].m_WorkItemThread = (struct _KTHREAD *)VerifierLock;
      }
    }
    v9->m_SystemWorkItem = 0LL;
    v9->__vftable = (FxDisposeList_vtbl *)&FxDisposeList::`vftable';
    v9->m_List.Next = 0LL;
    v9->m_ListEnd = &v9->m_List.Next;
    v9->m_WorkItemThread = 0LL;
  }
  else
  {
LABEL_15:
    v9 = 0LL;
  }
  if ( !v9 )
    return 3221225626LL;
  v10 = v9->m_Globals;
  v9->m_ObjectFlags |= 0x800u;
  v11 = FxSystemWorkItem::_Create(v10, WdmObject, &v9->m_SystemWorkItem);
  v12 = v11;
  if ( v11 < 0 )
  {
    WPP_IFR_SF_d(v10, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, v11);
  }
  else
  {
    v9->m_WdmObject = WdmObject;
    v12 = 0;
  }
  if ( v12 < 0 )
    FxObject::DeleteFromFailedCreate(v9);
  else
    *pObject = v9;
  return (unsigned int)v12;
}
