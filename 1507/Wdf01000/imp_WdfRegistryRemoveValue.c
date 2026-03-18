/*
 * XREFs of imp_WdfRegistryRemoveValue @ 0x1C007DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 */

NTSTATUS __fastcall imp_WdfRegistryRemoveValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName)
{
  FxRegKey *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v11; // r9
  FxRegKey *pKey; // [rsp+78h] [rbp+20h] BYREF

  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v4 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRegKey *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4102 )
  {
    pKey = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v4 = pKey;
  }
  m_Globals = v4->FxPagedObject::FxObject::m_Globals;
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      _a2 = Length;
      v11 = 13;
    }
    else
    {
      LOWORD(_a2) = ValueName->MaximumLength;
      if ( (_a2 & 1) != 0 )
      {
        _a2 = (unsigned __int16)_a2;
        v11 = 14;
      }
      else
      {
        if ( !(_WORD)_a2 || ValueName->Buffer )
        {
          if ( Length <= (unsigned __int16)_a2 )
            return ZwDeleteValueKey(v4->m_Key, ValueName);
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
          return -1073741811;
        }
        _a2 = (unsigned __int16)_a2;
        v11 = 15;
      }
    }
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v11, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
    return -1073741811;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
