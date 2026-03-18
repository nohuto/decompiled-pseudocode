/*
 * XREFs of imp_WdfLookasideListCreate @ 0x1C0073370
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023368 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqqqd @ 0x1C00731D8 (WPP_IFR_SF_qqqqd.c)
 *     ??0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C0077C4C (--0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C0077C78 (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C0078140 (--0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        __int32 PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **PLookaside)
{
  _WDF_OBJECT_ATTRIBUTES *_a2; // r13
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 ParentObject; // r8
  FxObject *v13; // rbx
  __int64 v14; // rcx
  WDFLOOKASIDE__ **v15; // r12
  __int64 result; // rax
  unsigned __int16 v17; // r9
  unsigned int Tag; // r14d
  FxObject *v19; // rcx
  FxNPagedLookasideList *v20; // rax
  FxObject *v21; // rax
  FxNPagedLookasideListFromPool *v22; // rax
  FxObject *v23; // rbx
  unsigned __int8 CurrentIrql; // al
  FxDeviceBase *v25; // rsi
  FxObject *v26; // rcx
  unsigned __int8 v27; // dl
  FxDeviceBase *v28; // rdi
  const void *_a4; // rdi
  const void *v30; // rsi
  FxPagedLookasideListFromPool *v31; // rax
  FxObject *v32; // rax
  int v33; // edi
  void *retaddr; // [rsp+88h] [rbp+38h]
  WDFLOOKASIDE__ *hLookaside; // [rsp+90h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v37; // [rsp+A0h] [rbp+50h]

  v37 = BufferSize;
  _a2 = MemoryAttributes;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pParent = 0LL;
  v11 = BufferSize;
  if ( LookasideAttributes )
  {
    if ( LookasideAttributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)LookasideAttributes->ParentObject;
      if ( ParentObject )
      {
LABEL_9:
        v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v14) = 0;
        if ( (ParentObject & 1) != 0 )
        {
          v14 = LOWORD(v13->__vftable);
          v13 = (FxObject *)((char *)v13 - v14);
        }
        if ( v13->m_Type == 4096 )
        {
          pParent = v13;
        }
        else
        {
          FxObjectHandleGetPtrQI(v13, (void **)&pParent, (void *)ParentObject, 0x1000u, v14);
          v13 = pParent;
        }
        m_Globals = v13->m_Globals;
        goto LABEL_15;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        0,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        LookasideAttributes,
        56,
        LookasideAttributes->Size,
        -1073741820);
    }
  }
  if ( !_a2 )
    goto LABEL_15;
  if ( _a2->Size != 56 )
  {
    WPP_IFR_SF_qddd(m_Globals, 0, 6u, 0xBu, WPP_FxValidateFunctions_hpp_Traceguids, _a2, 56, _a2->Size, -1073741820);
    goto LABEL_15;
  }
  ParentObject = (unsigned __int64)_a2->ParentObject;
  if ( ParentObject )
    goto LABEL_9;
LABEL_15:
  v15 = PLookaside;
  if ( !PLookaside )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  hLookaside = 0LL;
  *PLookaside = 0LL;
  if ( !v11 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxLookasideListAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  result = FxValidateObjectAttributes(m_Globals, LookasideAttributes, 0, PoolType);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, _a2, 0, v17);
    if ( (int)result >= 0 )
    {
      Tag = PoolTag;
      if ( !PoolTag )
        Tag = m_Globals->Tag;
      if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
        FxLibraryGlobals.VfCheckNxPoolType((_POOL_TYPE)PoolType, retaddr, Tag);
      if ( !FxIsPagedPoolType((_POOL_TYPE)PoolType) )
      {
        if ( v11 >= 0x1000 )
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
            goto LABEL_33;
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
LABEL_33:
            v23 = v21;
            goto LABEL_53;
          }
        }
        goto LABEL_52;
      }
      if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
      {
        v25 = FxDeviceBase::_SearchForDevice(v19, LookasideAttributes);
        v28 = FxDeviceBase::_SearchForDevice(v26, _a2);
        if ( v25 && v28 && v25 != v28 )
        {
          if ( v28->m_ObjectSize )
            _a4 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a4 = 0LL;
          if ( v25->m_ObjectSize )
            v30 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v30 = 0LL;
          WPP_IFR_SF_qqqqd(
            m_Globals,
            v27,
            0x12u,
            0xBu,
            WPP_FxLookasideListAPI_cpp_Traceguids,
            v30,
            LookasideAttributes->ParentObject,
            _a4,
            _a2->ParentObject,
            -1073741811);
          return 3221225485LL;
        }
        v31 = (FxPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                                m_Globals,
                                                ExDefaultNonPagedPoolType,
                                                0x200uLL,
                                                0,
                                                LookasideAttributes,
                                                0,
                                                FxObjectTypeExternal);
        if ( v31 )
        {
          FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(v31, m_Globals, Tag, v25, v28);
          v11 = v37;
          v23 = v32;
          goto LABEL_53;
        }
        v11 = v37;
LABEL_52:
        v23 = 0LL;
LABEL_53:
        if ( !v23 )
          return 3221225626LL;
        v33 = ((__int64 (__fastcall *)(FxObject *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v23->__vftable[1].SelfDestruct)(
                v23,
                v11,
                _a2);
        if ( v33 < 0 || (v33 = FxObject::Commit(v23, LookasideAttributes, (void **)&hLookaside, 0LL, 1u), v33 < 0) )
          FxObject::DeleteFromFailedCreate(v23);
        else
          *v15 = hLookaside;
        return (unsigned int)v33;
      }
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(hLookaside) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  return result;
}
