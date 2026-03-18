/*
 * XREFs of imp_WdfRegistryQueryUnicodeString @ 0x1C00715F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0030B20 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  _UNICODE_STRING *v10; // rdi
  unsigned int MaximumLength; // esi
  SIZE_T v12; // r9
  _QWORD *v13; // rbp
  int v14; // eax
  size_t v15; // rsi
  int v16; // ebx
  unsigned __int16 *Buffer; // rax
  ULONG Tag; // [rsp+20h] [rbp-68h]
  FxRegKey *pKey; // [rsp+40h] [rbp-48h] BYREF
  void *Caller; // [rsp+88h] [rbp+0h]
  unsigned int dataLength; // [rsp+90h] [rbp+8h] BYREF
  unsigned int type; // [rsp+A0h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)Caller);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      v10 = Value;
      if ( Value )
      {
        result = FxValidateUnicodeString(m_Globals, Value);
        if ( (int)result < 0 )
          return result;
        MaximumLength = v10->MaximumLength;
        v12 = v10->MaximumLength;
        Tag = m_Globals->Tag;
        dataLength = MaximumLength;
        v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, v12, Tag, Caller);
        if ( !v13 )
        {
          WPP_IFR_SF_qd(
            m_Globals,
            2u,
            2u,
            0x16u,
            (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
            Key,
            -1073741670);
          return 3221225626LL;
        }
      }
      else
      {
        MaximumLength = 0;
        dataLength = 0;
        v13 = 0LL;
      }
      v14 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, MaximumLength, v13, &dataLength, &type);
      v15 = dataLength;
      v16 = v14;
      if ( v14 >= 0 )
      {
        if ( type - 1 > 1 )
          v16 = -1073741788;
        if ( v16 >= 0 )
          goto LABEL_15;
      }
      if ( v16 == -2147483643 )
      {
LABEL_15:
        if ( ValueByteLength )
          *ValueByteLength = dataLength;
      }
      if ( v16 >= 0 )
      {
        if ( v10 )
        {
          memmove(v10->Buffer, v13, v15);
          Buffer = v10->Buffer;
          v10->Length = v15;
          if ( !Buffer[((unsigned __int64)(unsigned __int16)v15 >> 1) - 1] )
            v10->Length = v15 - 2;
        }
      }
      if ( v13 )
        FxPoolFree(v13);
      return (unsigned int)v16;
    }
  }
  return result;
}
