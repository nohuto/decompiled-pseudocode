/*
 * XREFs of imp_WdfCollectionCreate @ 0x1C001B570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001B770 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfCollectionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *CollectionAttributes,
        WDFCOLLECTION__ **Collection)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  unsigned __int16 v6; // r9
  __int64 result; // rax
  _POOL_TYPE v8; // edi
  ULONG Tag; // ebp
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  FxNonPagedObject *v12; // rax
  FxNonPagedObject *v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF
  WDFCOLLECTION__ *hCol; // [rsp+60h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         CollectionAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)CollectionAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Collection )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Collection = 0LL;
  result = FxValidateObjectAttributes(DriverName, CollectionAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    v8 = ExDefaultNonPagedPoolType;
    Tag = DriverName->Tag;
    ContextSize = FxGetContextSize(CollectionAttributes);
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x90u, 0, ContextSize, (unsigned __int64 *)&hCol) < 0 )
      goto LABEL_17;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v12 = (FxNonPagedObject *)FxPoolAllocator(
                                DriverName,
                                &DriverName->FxPoolFrameworks,
                                v8,
                                (unsigned __int64)hCol,
                                Tag,
                                Caller);
    v13 = v12;
    if ( v12 )
      v13 = (FxNonPagedObject *)FxObjectAndHandleHeaderInit(
                                  DriverName,
                                  v12,
                                  0x90u,
                                  CollectionAttributes,
                                  FxObjectTypeExternal);
    if ( v13 )
    {
      FxNonPagedObject::FxNonPagedObject(v13, 0x100Eu, 0x90u, DriverName);
      LODWORD(v13[1].__vftable) = 0;
      v13[1].m_Globals = (_FX_DRIVER_GLOBALS *)&v13[1].m_Type;
      *(_QWORD *)&v13[1].m_Type = (char *)v13 + 128;
      v13->__vftable = (FxNonPagedObject_vtbl *)FxIoResList::`vftable';
    }
    else
    {
LABEL_17:
      v13 = 0LL;
    }
    if ( v13 )
    {
      v14 = FxObject::Commit(v13, (_FX_DRIVER_GLOBALS *)CollectionAttributes, (void **)&hCol, 0LL, 1u);
      v15 = v14;
      if ( v14 < 0 )
      {
        WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxCollectionApi_cpp_Traceguids, v14);
        FxObject::DeleteFromFailedCreate(v13);
      }
      else
      {
        *Collection = hCol;
      }
    }
    else
    {
      WPP_IFR_SF_(DriverName, 2u, 2u, 0xBu, WPP_FxCollectionApi_cpp_Traceguids);
      return (unsigned int)-1073741670;
    }
    return v15;
  }
  return result;
}
