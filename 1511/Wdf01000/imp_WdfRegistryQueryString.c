/*
 * XREFs of imp_WdfRegistryQueryString @ 0x1C0028820
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0028010 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0030B20 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  int v9; // edi
  _QWORD *Value; // rsi
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // r9
  FxRegKey *pKey; // [rsp+50h] [rbp-20h] BYREF
  FxString *pString; // [rsp+58h] [rbp-18h] BYREF
  _UNICODE_STRING tmp; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int dataLength; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int type; // [rsp+C0h] [rbp+50h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
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
      v9 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, 0, 0LL, &dataLength, &type);
      if ( v9 >= 0 )
      {
        if ( type - 1 > 1 )
          v9 = -1073741788;
        if ( v9 >= 0 )
          goto LABEL_7;
      }
      if ( v9 == -2147483643 )
      {
LABEL_7:
        Value = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, dataLength, m_Globals->Tag, retaddr);
        if ( Value )
        {
          v9 = FxRegKey::_QueryValue(pKey->m_Globals, pKey->m_Key, ValueName, dataLength, Value, &dataLength, &type);
          if ( v9 < 0 )
            goto LABEL_31;
          if ( type - 1 > 1 )
            v9 = -1073741788;
          if ( v9 < 0 )
          {
LABEL_31:
            WPP_IFR_SF_qdd(
              m_Globals,
              2u,
              2u,
              0x1Au,
              (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
              Key,
              dataLength,
              v9);
          }
          else if ( dataLength > 0xFFFF )
          {
            v9 = -1073741306;
            WPP_IFR_SF_qddd(
              m_Globals,
              v11,
              2u,
              0x19u,
              (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
              Key,
              dataLength,
              0xFFFF,
              -1073741306);
          }
          else
          {
            if ( dataLength )
            {
              tmp.Buffer = (unsigned __int16 *)Value;
              tmp.Length = dataLength;
              tmp.MaximumLength = dataLength;
              if ( !*((_WORD *)Value + ((unsigned __int64)(unsigned __int16)dataLength >> 1) - 1) )
                tmp.Length = dataLength - 2;
            }
            else
            {
              *(_DWORD *)&tmp.Length = 0;
              tmp.Buffer = (unsigned __int16 *)qword_1C0037770;
            }
            v9 = FxString::Assign(pString, &tmp);
          }
          FxPoolFree(Value);
          return (unsigned int)v9;
        }
        v9 = -1073741670;
        v12 = 24;
      }
      else
      {
        v12 = 23;
      }
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, v12, (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount, Key, v9);
      return (unsigned int)v9;
    }
  }
  return result;
}
