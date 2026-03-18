/*
 * XREFs of imp_WdfRegistryAssignValue @ 0x1C002CAB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        ULONG ValueLength,
        PVOID Value)
{
  WDFKEY__ *v8; // rsi
  FxRegKey *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 Length; // dx
  int v12; // eax
  NTSTATUS _a2; // eax
  unsigned int v14; // edi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v17; // r9
  FxRegKey *pKey; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v20; // [rsp+88h] [rbp+10h] BYREF

  v8 = (WDFKEY__ *)Key;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v9 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    Key = LOWORD(v9->__vftable);
    v9 = (FxRegKey *)((char *)v9 - Key);
  }
  if ( v9->m_Type == 4102 )
  {
    pKey = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pKey, v8, 0x1006u, Key);
    v9 = pKey;
  }
  m_Globals = v9->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v9->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      v12 = Length;
      v17 = 13;
    }
    else
    {
      LOWORD(v12) = ValueName->MaximumLength;
      if ( (v12 & 1) != 0 )
      {
        v12 = (unsigned __int16)v12;
        v17 = 14;
      }
      else
      {
        if ( !(_WORD)v12 || ValueName->Buffer )
        {
          if ( Length <= (unsigned __int16)v12 )
          {
            _a2 = ZwSetValueKey(v9->m_Key, ValueName, 0, ValueType, Value, ValueLength);
            v14 = _a2;
            if ( _a2 < 0 )
              WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x1Cu, WPP_FxRegistryAPI_cpp_Traceguids, v8, _a2);
            return v14;
          }
          WPP_IFR_SF_qddd(
            m_Globals,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            ValueName,
            Length,
            (unsigned __int16)v12,
            -1073741811);
          return 3221225485LL;
        }
        v12 = (unsigned __int16)v12;
        v17 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v17, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v12, -1073741811);
    return 3221225485LL;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  v20 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v20,
    m_Globals->Public.DriverName,
    (const char *)&v20);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
