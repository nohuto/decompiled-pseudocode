/*
 * XREFs of ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0020120
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FA50 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     imp_WdfDeviceMiniportCreate @ 0x1C00681E0 (imp_WdfDeviceMiniportCreate.c)
 * Callees:
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0009314 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C001D5B0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 */

__int64 __fastcall FxDisposeList::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _DEVICE_OBJECT *WdmObject,
        FxDisposeList **pObject)
{
  ULONG Tag; // ecx
  SIZE_T v5; // r9
  void *Caller; // rax
  FxDisposeList *v9; // rax
  FxDisposeList *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // rbp
  int v12; // eax
  unsigned int v13; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp+8h] BYREF

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
                          &FxDriverGlobals->FxPoolFrameworks,
                          ExDefaultNonPagedPoolType,
                          v5,
                          Tag,
                          Caller);
  v10 = v9;
  if ( !v9 )
    return 3221225626LL;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    memset(v9, 0, 0x20uLL);
    *(_DWORD *)(&v10->m_ObjectState + 1) = 1146058822;
    v10 = (FxDisposeList *)((char *)v10 + 32);
  }
  if ( !v10 )
    return 3221225626LL;
  *(_DWORD *)&v10->m_Type = 4147;
  v10->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable';
  v10->m_Globals = FxDriverGlobals;
  v10->m_SpinLock.m_Lock = 0LL;
  v10->m_SpinLock.m_DbgFlagIsInitialized = 1;
  FxObject::Construct(v10, 0LL);
  v10->__vftable = (FxDisposeList_vtbl *)&FxNonPagedObject::`vftable';
  v10->m_NPLock.m_Lock = 0LL;
  v10->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(v10->m_ObjectFlags) < 0 )
  {
    m_Globals = v10->m_Globals;
    if ( m_Globals->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, m_Globals, v10);
      v10[-1].m_WorkItemThread = (struct _KTHREAD *)VerifierLock;
    }
  }
  v10->m_List.Next = 0LL;
  v10->__vftable = (FxDisposeList_vtbl *)&FxObject::`vftable'.Public.DriverName[8];
  v10->m_SystemWorkItem = 0LL;
  v10->m_ListEnd = &v10->m_List.Next;
  v10->m_WorkItemThread = 0LL;
  v11 = v10->m_Globals;
  v10->m_ObjectFlags |= 0x800u;
  v12 = FxSystemWorkItem::_Create(v11, WdmObject, &v10->m_SystemWorkItem);
  v13 = v12;
  if ( v12 < 0 )
  {
    WPP_IFR_SF_d(v11, 2u, 0xDu, 0xAu, WPP_FxDisposeList_cpp_Traceguids, v12);
    FxObject::DeleteFromFailedCreate(v10);
  }
  else
  {
    v10->m_WdmObject = WdmObject;
    v13 = 0;
    *pObject = v10;
  }
  return v13;
}
