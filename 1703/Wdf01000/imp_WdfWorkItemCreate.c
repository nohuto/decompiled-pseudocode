/*
 * XREFs of imp_WdfWorkItemCreate @ 0x1C001BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001C18C (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001C34C (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0067B74 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWorkItemCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFWORKITEM__ **WorkItem)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int result; // eax
  unsigned __int8 v9; // dl
  unsigned __int16 v10; // r9
  unsigned __int64 ParentObject; // r8
  void *Caller; // rdi
  FxObject *v13; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v18; // ebp
  FxObject *v19; // r12
  ULONG Tag; // r14d
  FxWorkItem *v21; // rax
  FxWorkItem *v22; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSize; // r8
  FxWorkItem *v25; // rax
  FxObject *v26; // rdi
  int v27; // ebx
  unsigned __int64 Total; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  result = FxValidateObjectAttributesForParentHandle(
             (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
             Attributes,
             0x18u);
  if ( result >= 0 )
  {
    ParentObject = (unsigned __int64)Attributes->ParentObject;
    if ( !ParentObject )
      FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
    Caller = 0LL;
    v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(Offset) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      Offset = LOWORD(v13->__vftable);
      v13 = (FxObject *)((char *)v13 - Offset);
    }
    if ( v13->m_Type == 4096 )
    {
      pParent = v13;
    }
    else
    {
      FxObjectHandleGetPtrQI(v13, (void **)&pParent, (void *)ParentObject, 0x1000u, Offset);
      v13 = pParent;
    }
    m_Globals = v13->m_Globals;
    if ( !Config )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( !WorkItem )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    if ( Config->Size == 24 )
    {
      if ( Config->EvtWorkItemFunc )
      {
        result = FxValidateObjectAttributes(m_Globals, Attributes, 0, v10);
        if ( result >= 0 )
        {
          ContextTypeInfo = Attributes->ContextTypeInfo;
          ContextSizeOverride = 0LL;
          v18 = ExDefaultNonPagedPoolType;
          v19 = pParent;
          Tag = m_Globals->Tag;
          if ( ContextTypeInfo )
          {
            ContextSizeOverride = Attributes->ContextSizeOverride;
            if ( !ContextSizeOverride )
              ContextSizeOverride = ContextTypeInfo->ContextSize;
          }
          if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0xD0u, 0, ContextSizeOverride, &Total) < 0 )
            return -1073741670;
          if ( m_Globals->FxPoolTrackingOn )
            Caller = retaddr;
          v21 = (FxWorkItem *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, v18, Total, Tag, Caller);
          v22 = v21;
          if ( v21 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v21, 0, 0x30uLL);
              LODWORD(v22->m_ChildListHead.Flink) = 1146058822;
              v22 = (FxWorkItem *)((char *)v22 + 48);
            }
            memset(&v22[1], 0, 0x30uLL);
            v22[1].__vftable = (FxWorkItem_vtbl *)v22;
            v23 = Attributes->ContextTypeInfo;
            if ( v23 )
            {
              ContextSize = Attributes->ContextSizeOverride;
              if ( !ContextSize )
                ContextSize = v23->ContextSize;
              memset(&v22[1].m_SpinLock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v22[1].m_ChildListHead.Flink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
          }
          if ( !v22 )
            return -1073741670;
          FxWorkItem::FxWorkItem(v22, m_Globals);
          v26 = v25;
          if ( !v25 )
            return -1073741670;
          v27 = FxWorkItem::Initialize(v25, Attributes, Config, v19, WorkItem);
          if ( v27 < 0 )
            FxObject::DeleteFromFailedCreate(v26);
          return v27;
        }
      }
      else
      {
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xBu, WPP_FxWorkItemApi_cpp_Traceguids, -1073741811);
        return -1073741811;
      }
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v9, 0x12u, 0xAu, WPP_FxWorkItemApi_cpp_Traceguids, Config->Size, 24, -1073741820);
      return -1073741820;
    }
  }
  return result;
}
