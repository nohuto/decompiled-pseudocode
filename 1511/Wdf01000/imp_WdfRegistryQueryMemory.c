/*
 * XREFs of imp_WdfRegistryQueryMemory @ 0x1C0071350
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
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C002E204 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0030B20 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        WDFMEMORY__ **Memory,
        unsigned int *ValueType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void **v11; // rsi
  __int64 result; // rax
  unsigned __int16 v13; // r9
  _QWORD *Value; // rbp
  int v15; // edi
  int v16; // eax
  unsigned int v17; // r12d
  FxMemoryObject *v18; // rbx
  void *v19; // rax
  unsigned __int16 v20; // r9
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxMemoryObject *pObject; // [rsp+70h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+80h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  v11 = (void **)Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  *Memory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, m_Globals->Tag);
    result = FxValidateObjectAttributes(m_Globals, MemoryAttributes, 0, v13);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, ValueName);
      if ( (int)result >= 0 )
      {
        result = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, (unsigned int *)&pObject, 0LL);
        if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -2147483643 )
        {
          Value = FxPoolAllocator(
                    m_Globals,
                    &m_Globals->FxPoolFrameworks,
                    1u,
                    (unsigned int)pObject,
                    m_Globals->Tag,
                    retaddr);
          if ( !Value )
          {
            v15 = -1073741670;
            WPP_IFR_SF_qd(
              m_Globals,
              2u,
              2u,
              0xFu,
              (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
              Key,
              -1073741670);
            return (unsigned int)v15;
          }
          v16 = FxRegKey::_QueryValue(
                  pKey->m_Globals,
                  pKey->m_Key,
                  ValueName,
                  (unsigned int)pObject,
                  Value,
                  (unsigned int *)&pObject,
                  ValueType);
          v15 = v16;
          if ( v16 < 0 )
          {
            v20 = 17;
          }
          else
          {
            v17 = (unsigned int)pObject;
            v16 = FxMemoryObject::_Create(
                    m_Globals,
                    MemoryAttributes,
                    PoolType,
                    m_Globals->Tag,
                    (unsigned int)pObject,
                    &pObject);
            v15 = v16;
            if ( v16 >= 0 )
            {
              v18 = pObject;
              v15 = FxObject::Commit(pObject, MemoryAttributes, v11, 0LL, 1u);
              if ( v15 < 0 )
              {
                FxObject::DeleteFromFailedCreate(v18);
              }
              else
              {
                v19 = (void *)v18->GetBuffer(&v18->IFxMemory);
                memmove(v19, Value, v17);
              }
              goto LABEL_23;
            }
            v20 = 16;
          }
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            2u,
            v20,
            (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
            Key,
            v16);
LABEL_23:
          FxPoolFree(Value);
          return (unsigned int)v15;
        }
      }
    }
  }
  return result;
}
