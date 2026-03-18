/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C0076A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0015FB4 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001A6BC (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00768E0 (WPP_IFR_SF_qqqqd.c)
 *     ??0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C007A930 (--0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C007A95C (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C007AC9C (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int v11; // eax
  _WDF_OBJECT_ATTRIBUTES *v12; // r13
  _FX_DRIVER_GLOBALS *v13; // rcx
  void *ParentObject; // rdx
  unsigned __int16 v15; // r9
  WDFLOOKASIDE__ **v16; // r15
  __int64 result; // rax
  unsigned __int16 v18; // r9
  unsigned int Tag; // ebp
  FxNPagedLookasideList *v20; // rax
  FxObject *v21; // rax
  FxNPagedLookasideListFromPool *v22; // rax
  FxDeviceBase *v23; // rsi
  unsigned __int8 v24; // dl
  FxDeviceBase *v25; // rdi
  const void *_a4; // rdi
  const void *v27; // rsi
  FxPagedLookasideListFromPool *v28; // rax
  FxObject *v29; // rbx
  int v30; // edi
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+80h] [rbp+8h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pParent = 0LL;
  v11 = FxValidateObjectAttributesForParentHandle(
          (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
          LookasideAttributes,
          0);
  v12 = MemoryAttributes;
  v13 = m_Globals;
  if ( v11 < 0 )
  {
    if ( (int)FxValidateObjectAttributesForParentHandle(m_Globals, MemoryAttributes, 0) < 0 )
      goto LABEL_6;
    ParentObject = v12->ParentObject;
    v13 = m_Globals;
  }
  else
  {
    ParentObject = LookasideAttributes->ParentObject;
  }
  FxObjectHandleGetPtr(v13, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
  m_Globals = pParent->m_Globals;
LABEL_6:
  v16 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  PLookaside = 0LL;
  *v16 = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(m_Globals, LookasideAttributes, 0, v15);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, v12, 0, v18);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = m_Globals->Tag;
      if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
        FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, Tag);
      if ( FxIsPagedPoolType(PoolType) )
      {
        result = FxVerifierCheckIrqlLevel(m_Globals, 0);
        if ( (int)result < 0 )
          return result;
        v23 = FxDeviceBase::_SearchForDevice(m_Globals, LookasideAttributes);
        v25 = FxDeviceBase::_SearchForDevice(m_Globals, v12);
        if ( v23 && v25 && v23 != v25 )
        {
          if ( v25->m_ObjectSize )
            _a4 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a4 = 0LL;
          if ( v23->m_ObjectSize )
            v27 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v27 = 0LL;
          WPP_IFR_SF_qqqqd(
            m_Globals,
            v24,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            v27,
            LookasideAttributes->ParentObject,
            _a4,
            v12->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v28 = (FxPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                m_Globals,
                                                ExDefaultNonPagedPoolType,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( v28 )
        {
          FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v28, m_Globals, Tag, v23, v25);
          goto LABEL_37;
        }
      }
      else if ( BufferSize >= 0x1000 )
      {
        v22 = (FxNPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                 m_Globals,
                                                 ExDefaultNonPagedPoolType,
                                                 0x1C0uLL,
                                                 0,
                                                 LookasideAttributes,
                                                 0,
                                                 FxObjectTypeExternal);
        if ( v22 )
        {
          FxNPagedLookasideListFromPool::FxNPagedLookasideListFromPool(v22, m_Globals, Tag);
          goto LABEL_37;
        }
      }
      else
      {
        v20 = (FxNPagedLookasideList *)FxObjectHandleAlloc(
                                         m_Globals,
                                         ExDefaultNonPagedPoolType,
                                         0x140uLL,
                                         0,
                                         LookasideAttributes,
                                         0,
                                         FxObjectTypeExternal);
        if ( v20 )
        {
          FxNPagedLookasideList::FxNPagedLookasideList(v20, m_Globals, Tag);
LABEL_37:
          v29 = v21;
          goto LABEL_39;
        }
      }
      v29 = 0LL;
LABEL_39:
      if ( v29 )
      {
        v30 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v29->__vftable[1].SelfDestruct)(
                v29,
                BufferSize,
                v12);
        if ( v30 < 0 || (v30 = FxObject::Commit(v29, LookasideAttributes, (void **)&PLookaside, 0LL, 1u), v30 < 0) )
          FxObject::DeleteFromFailedCreate(v29);
        else
          *v16 = (WDFLOOKASIDE__ *)PLookaside;
        return (unsigned int)v30;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
