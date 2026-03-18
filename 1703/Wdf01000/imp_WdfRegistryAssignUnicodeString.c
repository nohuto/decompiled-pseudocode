/*
 * XREFs of imp_WdfRegistryAssignUnicodeString @ 0x1C0083FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        const _UNICODE_STRING *Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  ULONG v9; // ebp
  _QWORD *v10; // rax
  _WORD *v11; // r15
  NTSTATUS _a2; // edi
  unsigned __int16 v13; // r9
  void *Caller; // [rsp+68h] [rbp+0h]
  FxRegKey *pKey; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)Caller);
  if ( !Value )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      result = FxValidateUnicodeString(m_Globals, Value);
      if ( (int)result >= 0 )
      {
        v9 = Value->Length + 2;
        v10 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, v9, m_Globals->Tag, Caller);
        v11 = v10;
        if ( v10 )
        {
          memmove(v10, Value->Buffer, Value->Length);
          v11[(unsigned __int64)Value->Length >> 1] = 0;
          _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 1u, v11, v9);
          FxPoolFree(v11);
          if ( _a2 >= 0 )
            return (unsigned int)_a2;
          v13 = 38;
        }
        else
        {
          _a2 = -1073741670;
          v13 = 37;
        }
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, v13, WPP_FxRegistryAPI_cpp_Traceguids, Key, _a2);
        return (unsigned int)_a2;
      }
    }
  }
  return result;
}
