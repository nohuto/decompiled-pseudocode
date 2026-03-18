/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C0023480
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C000FE58 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FEE4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C000FF70 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023368 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0023958 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  FxRegKey *v8; // rbx
  __int64 v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  unsigned __int16 Length; // dx
  int v14; // eax
  FxCollection *v15; // rcx
  __int64 v16; // rdx
  int v17; // edi
  _QWORD *Value; // r12
  unsigned int m_Count; // esi
  FxString *v20; // rax
  FxString *v21; // rax
  FxString *v22; // rsi
  __int64 v23; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v25; // r9
  const wchar_t *type; // [rsp+50h] [rbp-30h] BYREF
  FxCollection *pCollection; // [rsp+58h] [rbp-28h] BYREF
  FxRegKey *pKey; // [rsp+60h] [rbp-20h] BYREF
  FxDeviceBase *v29; // [rsp+68h] [rbp-18h]
  void *dummy; // [rsp+70h] [rbp-10h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int dataLength; // [rsp+C8h] [rbp+48h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+D8h] [rbp+58h]

  Attributes = StringsAttributes;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v8 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (Key & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxRegKey *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 4102 )
  {
    pKey = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pKey, (void *)Key, 0x1006u, v9);
    v8 = pKey;
  }
  m_Globals = v8->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = (unsigned __int64)Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, StringsAttributes, 0, (unsigned __int16)StringsAttributes);
  if ( (int)result < 0 )
    return result;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      dataLength = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&dataLength,
        m_Globals->Public.DriverName,
        (const char *)&dataLength);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = ValueName->Length;
  if ( (ValueName->Length & 1) != 0 )
  {
    v14 = Length;
    v25 = 13;
LABEL_55:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v25, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v14, -1073741811);
    return 3221225485LL;
  }
  LOWORD(v14) = ValueName->MaximumLength;
  if ( (v14 & 1) != 0 )
  {
    v14 = (unsigned __int16)v14;
    v25 = 14;
    goto LABEL_55;
  }
  if ( (_WORD)v14 && !ValueName->Buffer )
  {
    v14 = (unsigned __int16)v14;
    v25 = 15;
    goto LABEL_55;
  }
  if ( Length > (unsigned __int16)v14 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      ValueName,
      Length,
      (unsigned __int16)v14,
      -1073741811);
    return 3221225485LL;
  }
  v15 = (FxCollection *)(~v11 & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v16) = 0;
  if ( (v11 & 1) != 0 )
  {
    v16 = LOWORD(v15->__vftable);
    v15 = (FxCollection *)((char *)v15 - v16);
  }
  if ( v15->m_Type == 4110 )
    pCollection = v15;
  else
    FxObjectHandleGetPtrQI(v15, (void **)&pCollection, (void *)v11, 0x100Eu, v16);
  v29 = FxDeviceBase::_SearchForDevice(v15, StringsAttributes);
  v17 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, (unsigned int *)&type);
  if ( (int)(v17 + 0x80000000) < 0 || v17 == -2147483643 )
  {
    if ( (_DWORD)type != 7 )
      return 3221225508LL;
    Value = FxPoolAllocator(
              m_Globals,
              (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
              1u,
              dataLength,
              m_Globals->Tag,
              retaddr);
    if ( !Value )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x13u, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, -1073741670);
      return 3221225626LL;
    }
    v17 = FxRegKey::_QueryValue(
            pKey->m_Globals,
            pKey->m_Key,
            ValueName,
            dataLength,
            Value,
            &dataLength,
            (unsigned int *)&type);
    if ( v17 >= 0 )
    {
      v17 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, (wchar_t *)Value, dataLength);
      if ( v17 >= 0 )
      {
        type = (const wchar_t *)Value;
        m_Count = pCollection->m_Count;
        dataLength = m_Count;
        if ( *(_WORD *)Value )
        {
          while ( 1 )
          {
            v20 = (FxString *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0x78uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
            if ( v20 )
            {
              FxString::FxString(v20, m_Globals);
              v22 = v21;
            }
            else
            {
              v22 = 0LL;
            }
            if ( !v22 )
              break;
            if ( v29 )
              v22->m_DeviceBase = v29;
            v17 = FxString::Assign(v22, type);
            if ( v17 < 0 )
              goto LABEL_63;
            v17 = FxObject::Commit(v22, Attributes, &dummy, 0LL, 1u);
            if ( v17 < 0 )
              goto LABEL_63;
            if ( !FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, v22) )
            {
              v17 = -1073741670;
              WPP_IFR_SF_qid(
                m_Globals,
                2u,
                2u,
                0x14u,
                WPP_FxRegistryAPI_cpp_Traceguids,
                (const void *)Key,
                (__int64)Collection,
                -1073741670);
            }
            if ( v17 < 0 )
            {
LABEL_63:
              FxObject::DeleteFromFailedCreate(v22);
              goto LABEL_65;
            }
            v23 = -1LL;
            do
              ++v23;
            while ( type[v23] );
            type += v23 + 1;
            if ( !*type )
              goto LABEL_38;
          }
          v17 = -1073741670;
LABEL_65:
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x15u, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, v17);
LABEL_38:
          m_Count = dataLength;
        }
        if ( v17 < 0 )
        {
          while ( pCollection->m_Count > m_Count )
            FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, m_Count);
        }
      }
    }
    FxPoolFree(Value);
  }
  else
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x12u, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, v17);
  }
  return (unsigned int)v17;
}
