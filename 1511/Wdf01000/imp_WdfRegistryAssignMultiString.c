/*
 * XREFs of imp_WdfRegistryAssignMultiString @ 0x1C0070BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C001224C (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C00122E0 (-FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        WDFCOLLECTION__ *StringsCollection)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  FxCollectionInternal *v9; // rcx
  unsigned __int64 v10; // r14
  unsigned int v11; // esi
  wchar_t *v12; // rsi
  unsigned int v13; // edi
  FxCollectionInternal *v14; // rdx
  NTSTATUS _a2; // eax
  FxRegKey *pKey; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 valid; // [rsp+80h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+90h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !StringsCollection )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)StringsCollection, 0x100Eu, (void **)&pCollection);
      v9 = (FxCollectionInternal *)pCollection;
      valid = 0;
      if ( pCollection )
        v9 = &pCollection->FxCollectionInternal;
      v10 = FxCalculateTotalStringSize(v9, 1u, &valid);
      if ( v10 > 0xFFFFFFFF )
      {
        v11 = -1073741675;
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          2u,
          0x24u,
          (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
          StringsCollection,
          -1073741675);
        return v11;
      }
      if ( !valid )
      {
        v11 = -1073741811;
        WPP_IFR_SF_qid(
          m_Globals,
          2u,
          2u,
          0x25u,
          (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
          Key,
          (__int64)StringsCollection,
          -1073741811);
        return v11;
      }
      v12 = (wchar_t *)FxPoolAllocator(
                         m_Globals,
                         &m_Globals->FxPoolFrameworks,
                         1u,
                         (unsigned int)v10,
                         m_Globals->Tag,
                         retaddr);
      if ( v12 )
      {
        if ( pCollection )
          v14 = &pCollection->FxCollectionInternal;
        else
          v14 = 0LL;
        FxCopyMultiSz(v12, v14);
        _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 7u, v12, v10);
        v13 = _a2;
        if ( _a2 < 0 )
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            2u,
            0x27u,
            (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
            Key,
            _a2);
        FxPoolFree(v12);
      }
      else
      {
        v13 = -1073741670;
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          2u,
          0x26u,
          (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
          Key,
          -1073741670);
      }
      return v13;
    }
  }
  return result;
}
