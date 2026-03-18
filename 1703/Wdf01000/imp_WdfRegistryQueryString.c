/*
 * XREFs of imp_WdfRegistryQueryString @ 0x1C0031470
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00306B0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C003870C (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qZd @ 0x1C0083788 (WPP_IFR_SF_qZd.c)
 */

__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int8 v9; // dl
  int v10; // edi
  unsigned int v11; // r8d
  unsigned int v12; // edi
  _QWORD *v13; // rsi
  unsigned __int8 v14; // dl
  unsigned __int16 v15; // r9
  const _GUID *Value; // [rsp+20h] [rbp-50h]
  int _a4; // [rsp+38h] [rbp-38h]
  FxRegKey *pKey; // [rsp+50h] [rbp-20h] BYREF
  FxString *pString; // [rsp+58h] [rbp-18h] BYREF
  _UNICODE_STRING tmp; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int dataLength; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+C0h] [rbp+50h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !String )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)String, 0x1007u, (void **)&pString);
      v10 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, &type);
      if ( v10 >= 0 )
      {
        if ( type - 1 > 1 )
          v10 = -1073741788;
        if ( v10 >= 0 )
          goto LABEL_7;
      }
      if ( v10 == -2147483643 )
      {
LABEL_7:
        v12 = dataLength;
        if ( !dataLength )
        {
          WPP_IFR_SF_qZd(m_Globals, v9, v11, 0x1Bu, Value, Key, ValueName, _a4);
          return 3221225609LL;
        }
        v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, dataLength, m_Globals->Tag, retaddr);
        if ( v13 )
        {
          v10 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, v12, v13, &dataLength, &type);
          if ( v10 < 0 )
            goto LABEL_33;
          if ( type - 1 > 1 )
            v10 = -1073741788;
          if ( v10 < 0 )
          {
LABEL_33:
            WPP_IFR_SF_qdd(m_Globals, 2u, 2u, 0x1Eu, WPP_FxRegistryAPI_cpp_Traceguids, Key, dataLength, v10);
          }
          else if ( dataLength > 0xFFFF )
          {
            v10 = -1073741306;
            WPP_IFR_SF_qddd(
              m_Globals,
              v14,
              2u,
              0x1Du,
              WPP_FxRegistryAPI_cpp_Traceguids,
              Key,
              dataLength,
              0xFFFF,
              -1073741306);
          }
          else
          {
            if ( dataLength )
            {
              tmp.Buffer = (wchar_t *)v13;
              tmp.Length = dataLength;
              tmp.MaximumLength = dataLength;
              if ( !*((_WORD *)v13 + ((unsigned __int64)(unsigned __int16)dataLength >> 1) - 1) )
                tmp.Length = dataLength - 2;
            }
            else
            {
              *(_DWORD *)&tmp.Length = 0;
              tmp.Buffer = (wchar_t *)&unk_1C00AC4E0;
            }
            v10 = FxDuplicateUnicodeString(pString->m_Globals, &tmp, &pString->m_UnicodeString);
          }
          FxPoolFree(v13);
          return (unsigned int)v10;
        }
        v10 = -1073741670;
        v15 = 28;
      }
      else
      {
        v15 = 26;
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v15, WPP_FxRegistryAPI_cpp_Traceguids, Key, v10);
      return (unsigned int)v10;
    }
  }
  return result;
}
