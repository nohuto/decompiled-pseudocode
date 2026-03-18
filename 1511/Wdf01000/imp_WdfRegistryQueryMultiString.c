/*
 * XREFs of imp_WdfRegistryQueryMultiString @ 0x1C0028310
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001F830 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C001F9B0 (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0024F88 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0028020 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x1C00280AC (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0028B70 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0030B20 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int16 v8; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFCOLLECTION__ *v10; // rdi
  __int64 result; // rax
  int v12; // edi
  _QWORD *Value; // r12
  const wchar_t *v14; // r13
  unsigned int m_Count; // esi
  FxString *v16; // rax
  FxString *v17; // rax
  FxString *v18; // rsi
  __int64 v19; // rax
  FxCollection *pCollection; // [rsp+40h] [rbp-28h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-20h] BYREF
  FxDeviceBase *v22; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+A8h] [rbp+40h]
  unsigned int dataLength; // [rsp+B0h] [rbp+48h] BYREF
  void *_a1; // [rsp+B8h] [rbp+50h]
  void *dummy; // [rsp+C0h] [rbp+58h] BYREF
  _WDF_OBJECT_ATTRIBUTES *Attributes; // [rsp+C8h] [rbp+60h]

  Attributes = StringsAttributes;
  _a1 = Key;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v10 = Collection;
  if ( !Collection )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxValidateObjectAttributes(m_Globals, StringsAttributes, 0, v8);
  if ( (int)result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result < 0 )
    return result;
  result = FxValidateUnicodeString(m_Globals, ValueName);
  if ( (int)result < 0 )
    return result;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v10, 0x100Eu, (void **)&pCollection);
  v22 = FxDeviceBase::_SearchForDevice(m_Globals, StringsAttributes);
  v12 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, (unsigned int *)&dummy);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147483643 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x12u, (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount, Key, v12);
    return (unsigned int)v12;
  }
  if ( (_DWORD)dummy != 7 )
    return 3221225508LL;
  Value = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, dataLength, m_Globals->Tag, retaddr);
  if ( !Value )
  {
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      2u,
      0x13u,
      (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
      Key,
      -1073741670);
    return 3221225626LL;
  }
  v12 = FxRegKey::_QueryValue(
          pKey->m_Globals,
          pKey->m_Key,
          ValueName,
          dataLength,
          Value,
          &dataLength,
          (unsigned int *)&dummy);
  if ( v12 < 0 )
    goto LABEL_27;
  v12 = FxRegKey::_VerifyMultiSzString(m_Globals, ValueName, (wchar_t *)Value, dataLength);
  if ( v12 < 0 )
    goto LABEL_27;
  v14 = (const wchar_t *)Value;
  m_Count = pCollection->m_Count;
  dataLength = m_Count;
  if ( !*(_WORD *)Value )
    goto LABEL_26;
  while ( 1 )
  {
    v16 = (FxString *)FxObjectHandleAlloc(
                        m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x78uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v16 )
    {
      FxString::FxString(v16, m_Globals);
      v18 = v17;
    }
    else
    {
      v18 = 0LL;
    }
    if ( v18 )
    {
      if ( v22 )
        v18->m_DeviceBase = v22;
      v12 = FxString::Assign(v18, v14);
      if ( v12 >= 0 )
      {
        v12 = FxObject::Commit(v18, Attributes, &dummy, 0LL, 1u);
        if ( v12 >= 0 )
        {
          if ( !FxCollectionInternal::Add(&pCollection->FxCollectionInternal, pCollection->m_Globals, v18) )
          {
            v12 = -1073741670;
            WPP_IFR_SF_qid(
              m_Globals,
              2u,
              2u,
              0x14u,
              (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
              _a1,
              (__int64)Collection,
              -1073741670);
          }
          if ( v12 >= 0 )
            goto LABEL_22;
        }
      }
      FxObject::DeleteFromFailedCreate(v18);
    }
    else
    {
      v12 = -1073741670;
    }
    if ( v12 < 0 )
      break;
LABEL_22:
    v19 = -1LL;
    do
      ++v19;
    while ( v14[v19] );
    v14 += v19 + 1;
    if ( !*v14 )
      goto LABEL_25;
  }
  WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x15u, (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount, _a1, v12);
LABEL_25:
  m_Count = dataLength;
LABEL_26:
  if ( v12 < 0 )
  {
    while ( pCollection->m_Count > m_Count )
      FxCollectionInternal::Remove(&pCollection->FxCollectionInternal, m_Count);
  }
LABEL_27:
  FxPoolFree(Value);
  return (unsigned int)v12;
}
