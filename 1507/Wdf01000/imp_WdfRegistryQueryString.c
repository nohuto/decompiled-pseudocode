/*
 * XREFs of imp_WdfRegistryQueryString @ 0x1C002C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned __int64 String)
{
  WDFKEY__ *v6; // r15
  FxRegKey *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 Length; // dx
  int v10; // eax
  FxString *v11; // r10
  __int64 v12; // rdx
  int _a3; // edi
  _QWORD *Value; // r14
  unsigned __int8 v15; // dl
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r9
  unsigned int type; // [rsp+50h] [rbp-30h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-28h] BYREF
  FxString *pString; // [rsp+60h] [rbp-20h] BYREF
  _UNICODE_STRING tmp; // [rsp+68h] [rbp-18h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+A8h] [rbp+28h]
  unsigned int dataLength; // [rsp+B8h] [rbp+38h] BYREF

  v6 = (WDFKEY__ *)Key;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v7 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    Key = LOWORD(v7->__vftable);
    v7 = (FxRegKey *)((char *)v7 - Key);
  }
  if ( v7->m_Type == 4102 )
  {
    pKey = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pKey, v6, 0x1006u, Key);
    v7 = pKey;
  }
  m_Globals = v7->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v7->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !String )
    FxVerifierNullBugCheck(v7->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      v10 = Length;
      v18 = 13;
    }
    else
    {
      LOWORD(v10) = ValueName->MaximumLength;
      if ( (v10 & 1) != 0 )
      {
        v10 = (unsigned __int16)v10;
        v18 = 14;
      }
      else
      {
        if ( !(_WORD)v10 || ValueName->Buffer )
        {
          if ( Length <= (unsigned __int16)v10 )
          {
            v11 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
            LOWORD(v12) = 0;
            if ( (String & 1) != 0 )
            {
              v12 = LOWORD(v11->__vftable);
              v11 = (FxString *)((char *)v11 - v12);
            }
            if ( v11->m_Type == 4103 )
            {
              pString = v11;
            }
            else
            {
              FxObjectHandleGetPtrQI(v11, (void **)&pString, (void *)String, 0x1007u, v12);
              v7 = pKey;
            }
            _a3 = FxRegKey::_QueryValue(v7->m_Globals, v7->m_Key, ValueName, 0, 0LL, &dataLength, &type);
            if ( _a3 >= 0 )
            {
              if ( type - 1 > 1 )
                _a3 = -1073741788;
              if ( _a3 >= 0 )
                goto LABEL_20;
            }
            if ( _a3 == -2147483643 )
            {
LABEL_20:
              Value = FxPoolAllocator(
                        m_Globals,
                        (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                        1u,
                        dataLength,
                        m_Globals->Tag,
                        retaddr);
              if ( Value )
              {
                _a3 = FxRegKey::_QueryValue(
                        pKey->m_Globals,
                        pKey->m_Key,
                        ValueName,
                        dataLength,
                        Value,
                        &dataLength,
                        &type);
                if ( _a3 < 0 )
                  goto LABEL_56;
                if ( type - 1 > 1 )
                  _a3 = -1073741788;
                if ( _a3 < 0 )
                {
LABEL_56:
                  WPP_IFR_SF_qdd(m_Globals, 2u, 2u, 0x1Au, WPP_FxRegistryAPI_cpp_Traceguids, v6, dataLength, _a3);
                }
                else if ( dataLength > 0xFFFF )
                {
                  _a3 = -1073741306;
                  WPP_IFR_SF_qddd(
                    m_Globals,
                    v15,
                    2u,
                    0x19u,
                    WPP_FxRegistryAPI_cpp_Traceguids,
                    v6,
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
                    tmp.Buffer = (unsigned __int16 *)qword_1C0033F00;
                  }
                  _a3 = FxString::Assign(pString, &tmp);
                }
                FxPoolFree(Value);
                return (unsigned int)_a3;
              }
              _a3 = -1073741670;
              v19 = 24;
            }
            else
            {
              v19 = 23;
            }
            WPP_IFR_SF_qd(m_Globals, 2u, 2u, v19, WPP_FxRegistryAPI_cpp_Traceguids, v6, _a3);
            return (unsigned int)_a3;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            ValueName,
            Length,
            (unsigned __int16)v10,
            -1073741811);
          return 3221225485LL;
        }
        v10 = (unsigned __int16)v10;
        v18 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v18, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v10, -1073741811);
    return 3221225485LL;
  }
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
