/*
 * XREFs of imp_WdfRegistryQueryULong @ 0x1C002B090
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C002B194 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        const _UNICODE_STRING *ValueName,
        unsigned int *Value)
{
  WDFKEY__ *_a1; // rsi
  FxRegKey *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 Length; // dx
  int v10; // eax
  int _a2; // eax
  unsigned int v12; // edi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v15; // r9
  FxRegKey *pKey; // [rsp+50h] [rbp-28h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v18; // [rsp+88h] [rbp+10h] BYREF

  _a1 = (WDFKEY__ *)Key;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v7 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
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
    FxObjectHandleGetPtrQI(v7, (void **)&pKey, _a1, 0x1006u, Key);
    v7 = pKey;
  }
  m_Globals = v7->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v7->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(v7->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      v10 = Length;
      v15 = 13;
    }
    else
    {
      LOWORD(v10) = ValueName->MaximumLength;
      if ( (v10 & 1) != 0 )
      {
        v10 = (unsigned __int16)v10;
        v15 = 14;
      }
      else
      {
        if ( !(_WORD)v10 || ValueName->Buffer )
        {
          if ( Length <= (unsigned __int16)v10 )
          {
            _a2 = FxRegKey::_QueryULong(v7->m_Key, ValueName, Value);
            v12 = _a2;
            if ( _a2 < 0 )
              WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x1Bu, WPP_FxRegistryAPI_cpp_Traceguids, _a1, _a2);
            return v12;
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
        v15 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v15, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v10, -1073741811);
    return 3221225485LL;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  v18 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v18,
    m_Globals->Public.DriverName,
    (const char *)&v18);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
