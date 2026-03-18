/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C007AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0019414 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C007A8A0 (WPP_IFR_SF_qqqqd.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C007EBA4 (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C007FA54 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r15
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  unsigned __int16 v15; // r9
  WDFLOOKASIDE__ **v16; // r12
  __int64 result; // rax
  unsigned __int16 v18; // r9
  unsigned int Tag; // ebp
  FxLookasideList *v20; // rax
  FxObject *v21; // rdi
  void (__fastcall *const *v22)(); // rax
  FxLookasideList *v23; // rax
  FxDeviceBase *v24; // r14
  FxDeviceBase *v25; // rax
  FxDeviceBase *v26; // rdi
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int16 v28; // ax
  const void *_a4; // rdi
  const void *v30; // r14
  FxPagedLookasideListFromPool *v31; // rax
  FxObject *v32; // rax
  int v33; // ebx
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          LookasideAttributes,
          0);
  v12 = MemoryAttributes;
  v13 = DriverName;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(DriverName, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = DriverName;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtr(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  DriverName = pParent->m_Globals;
LABEL_6:
  v16 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(DriverName, retaddr);
  PLookaside = 0LL;
  *v16 = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(DriverName, LookasideAttributes, 0, v15);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, v12, 0, v18);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = DriverName->Tag;
      if ( DriverName->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
        FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, Tag);
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(DriverName, 0);
        if ( (int)result < 0 )
          return result;
        v24 = FxDeviceBase::_SearchForDevice(DriverName, LookasideAttributes);
        v25 = FxDeviceBase::_SearchForDevice(DriverName, v12);
        v26 = v25;
        if ( v24 && v25 && v24 != v25 )
        {
          m_ObjectSize = v25->m_ObjectSize;
          v28 = v24->m_ObjectSize;
          _a4 = (const void *)((unsigned __int64)v26 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_ObjectSize )
            _a4 = 0LL;
          v30 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v28 )
            v30 = 0LL;
          WPP_IFR_SF_qqqqd(
            DriverName,
            0,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            v30,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v31 = (FxPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                DriverName,
                                                ExDefaultNonPagedPoolType,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( v31 )
        {
          FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v31, DriverName, Tag, v24, v26);
          v21 = v32;
          goto LABEL_37;
        }
      }
      else if ( BufferSize >= 0x1000 )
      {
        v23 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x1C0uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v21 = v23;
        if ( v23 )
        {
          FxLookasideList::FxLookasideList(v23, DriverName, 0x1C0u, Tag);
          v22 = FxNPagedLookasideListFromPool::`vftable';
          goto LABEL_24;
        }
      }
      else
      {
        v20 = (FxLookasideList *)FxObjectHandleAlloc(
                                   DriverName,
                                   ExDefaultNonPagedPoolType,
                                   0x140uLL,
                                   0,
                                   LookasideAttributes,
                                   0,
                                   FxObjectTypeExternal);
        v21 = v20;
        if ( v20 )
        {
          FxLookasideList::FxLookasideList(v20, DriverName, 0x140u, Tag);
          v22 = FxNPagedLookasideList::`vftable';
LABEL_24:
          v21->__vftable = (FxObject_vtbl *)v22;
          goto LABEL_37;
        }
      }
      v21 = 0LL;
LABEL_37:
      if ( v21 )
      {
        v33 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v21->__vftable[1].SelfDestruct)(
                v21,
                BufferSize,
                v12);
        if ( v33 < 0
          || (v33 = FxObject::Commit(v21, (_FX_DRIVER_GLOBALS *)LookasideAttributes, (void **)&PLookaside, 0LL, 1u),
              v33 < 0) )
        {
          FxObject::DeleteFromFailedCreate(v21);
        }
        else
        {
          *v16 = (WDFLOOKASIDE__ *)PLookaside;
        }
        return (unsigned int)v33;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
