/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C007D690
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0025DCC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  FxRegKey *v9; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v12; // r15
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v17; // r9
  _QWORD *v18; // r14
  int v19; // edi
  int Value; // eax
  unsigned int v21; // r13d
  FxMemoryObject *v22; // rbx
  void *v23; // rax
  unsigned __int16 v24; // r9
  FxRegKey *pKey; // [rsp+50h] [rbp-10h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+28h]
  FxMemoryObject *pObject; // [rsp+98h] [rbp+38h] BYREF
  _POOL_TYPE v28; // [rsp+A8h] [rbp+48h]

  v28 = PoolType;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v9 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxRegKey *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4102 )
  {
    pKey = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    PoolType = v28;
    v9 = pKey;
  }
  m_Globals = v9->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v12 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *Memory = 0LL;
  if ( !m_Globals->FxVerifierOn )
  {
LABEL_19:
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0, PoolType);
    if ( (int)result < 0 )
      return result;
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      _a2 = Length;
      v17 = 13;
LABEL_22:
      WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v17, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
      return 3221225485LL;
    }
    LOWORD(_a2) = ValueName->MaximumLength;
    if ( (_a2 & 1) != 0 )
    {
      _a2 = (unsigned __int16)_a2;
      v17 = 14;
      goto LABEL_22;
    }
    if ( (_WORD)_a2 && !ValueName->Buffer )
    {
      _a2 = (unsigned __int16)_a2;
      v17 = 15;
      goto LABEL_22;
    }
    if ( Length > (unsigned __int16)_a2 )
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        Length,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        ValueName,
        Length,
        (unsigned __int16)_a2,
        -1073741811);
      return 3221225485LL;
    }
    result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, (unsigned int *)&pObject, 0LL);
    if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -2147483643 )
      return result;
    v18 = FxPoolAllocator(
            m_Globals,
            (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
            1u,
            (unsigned int)pObject,
            m_Globals->Tag,
            retaddr);
    if ( !v18 )
    {
      v19 = -1073741670;
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xFu, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, -1073741670);
      return (unsigned int)v19;
    }
    Value = FxRegKey::_QueryValue(
              pKey->m_Globals,
              pKey->m_Key,
              ValueName,
              (unsigned int)pObject,
              v18,
              (unsigned int *)&pObject,
              ValueType);
    v19 = Value;
    if ( Value < 0 )
    {
      v24 = 17;
    }
    else
    {
      v21 = (unsigned int)pObject;
      Value = FxMemoryObject::_Create(m_Globals, MemoryAttributes, v28, m_Globals->Tag, (unsigned int)pObject, &pObject);
      v19 = Value;
      if ( Value >= 0 )
      {
        v22 = pObject;
        v19 = FxObject::Commit(pObject, MemoryAttributes, v12, 0LL, 1u);
        if ( v19 < 0 )
        {
          FxObject::DeleteFromFailedCreate(v22);
        }
        else
        {
          v23 = (void *)v22->GetBuffer(&v22->IFxMemory);
          memmove(v23, v18, v21);
        }
        goto LABEL_43;
      }
      v24 = 16;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, v24, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, Value);
LABEL_43:
    FxPoolFree(v18);
    return (unsigned int)v19;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    if ( FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, m_Globals->Tag);
    goto LABEL_19;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  LODWORD(pObject) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
