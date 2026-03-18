/*
 * XREFs of ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001A7C0
 * Callers:
 *     imp_WdfWorkItemCreate @ 0x1C001A700 (imp_WdfWorkItemCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C001AB44 (-Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@.c)
 *     ??0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001ACC4 (--0FxWorkItem@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001BCFC (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001BD68 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWorkItem::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_WORKITEM_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  ULONG Tag; // ebp
  _POOL_TYPE v7; // ebx
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  FxWorkItem *v15; // rax
  FxWorkItem *v16; // rbx
  int v17; // edi
  unsigned __int64 Size[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v7 = ExDefaultNonPagedPoolType;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0xD0u, 0, ContextSize, Size) < 0 )
    goto LABEL_14;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v13 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size[0], Tag, Caller);
  v14 = v13;
  if ( v13 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v13, 0, 0x20uLL);
      *((_DWORD *)v14 + 7) = 1146058822;
      v14 += 4;
    }
    FxContextHeaderInit((FxContextHeader *)(v14 + 26), (FxObject *)v14, Attributes);
  }
  if ( v14 )
  {
    FxWorkItem::FxWorkItem((FxWorkItem *)v14, FxDriverGlobals);
    v16 = v15;
  }
  else
  {
LABEL_14:
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = FxWorkItem::Initialize(v16, Attributes, Config, ParentObject, WorkItem);
  if ( v17 < 0 )
    FxObject::DeleteFromFailedCreate(v16);
  return (unsigned int)v17;
}
