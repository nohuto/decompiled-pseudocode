/*
 * XREFs of imp_WdfRegistryAssignULong @ 0x1C007CD20
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

__int64 __fastcall imp_WdfRegistryAssignULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned int Value)
{
  WDFKEY__ *v5; // rsi
  FxRegKey *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v12; // r9
  NTSTATUS v13; // eax
  unsigned int v14; // edi
  FxRegKey *pKey; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Data; // [rsp+98h] [rbp+20h] BYREF

  Data = Value;
  v5 = (WDFKEY__ *)Key;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v6 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    Key = LOWORD(v6->__vftable);
    v6 = (FxRegKey *)((char *)v6 - Key);
  }
  if ( v6->m_Type == 4102 )
  {
    pKey = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pKey, v5, 0x1006u, Key);
    v6 = pKey;
  }
  m_Globals = v6->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v6->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  Length = ValueName->Length;
  if ( (ValueName->Length & 1) != 0 )
  {
    _a2 = Length;
    v12 = 13;
LABEL_17:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v12, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = ValueName->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v12 = 14;
    goto LABEL_17;
  }
  if ( (_WORD)_a2 && !ValueName->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v12 = 15;
    goto LABEL_17;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      ValueName,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
  v13 = ZwSetValueKey(v6->m_Key, ValueName, 0, 4u, &Data, 4u);
  v14 = v13;
  if ( v13 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x20u, WPP_FxRegistryAPI_cpp_Traceguids, v5, v13);
  return v14;
}
