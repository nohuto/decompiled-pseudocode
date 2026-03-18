/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0023DE0
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C0023D20 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023F30 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C00240C4 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00242AC (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  ULONG Tag; // esi
  _POOL_TYPE v7; // ebx
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  FxWorkItem *v13; // rax
  FxWorkItem *v14; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  FxWorkItem *v17; // rax
  FxWorkItem *v18; // rbx
  int v19; // edi
  unsigned __int64 Size[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v7 = ExDefaultNonPagedPoolType;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0xD0u, 0, ContextSize, Size) < 0 )
    goto LABEL_19;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v13 = (FxWorkItem *)FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size[0], Tag, Caller);
  v14 = v13;
  if ( v13 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v13, 0, 0x20uLL);
      *(_DWORD *)(&v14->m_ObjectState + 1) = 1146058822;
      v14 = (FxWorkItem *)((char *)v14 + 32);
    }
    memset(&v14[1], 0, 0x30uLL);
    v14[1].__vftable = (FxWorkItem_vtbl *)v14;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
        memset(&v14[1].m_SpinLock, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v14[1].m_ChildListHead.Flink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
    }
  }
  if ( v14 )
  {
    FxWorkItem::FxWorkItem(v14, FxDriverGlobals);
    v18 = v17;
  }
  else
  {
LABEL_19:
    v18 = 0LL;
  }
  if ( !v18 )
    return 3221225626LL;
  v19 = FxWorkItem::Initialize(v18, Attributes, Config, ParentObject, WorkItem);
  if ( v19 < 0 )
    FxObject::DeleteFromFailedCreate(v18);
  return (unsigned int)v19;
}
