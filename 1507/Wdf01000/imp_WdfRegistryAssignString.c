/*
 * XREFs of imp_WdfRegistryAssignString @ 0x1C007CA60
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

__int64 __fastcall imp_WdfRegistryAssignString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned __int64 String)
{
  WDFKEY__ *v6; // rbp
  FxRegKey *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v13; // r9
  FxString *v14; // r10
  __int64 Offset; // rdx
  NTSTATUS v16; // eax
  unsigned int v17; // esi
  FxRegKey *pKey; // [rsp+50h] [rbp-28h] BYREF
  FxString *pString; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

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
    v13 = 13;
LABEL_19:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v13, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = ValueName->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v13 = 14;
    goto LABEL_19;
  }
  if ( (_WORD)_a2 && !ValueName->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v13 = 15;
    goto LABEL_19;
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
  v14 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (String & 1) != 0 )
  {
    Offset = LOWORD(v14->__vftable);
    v14 = (FxString *)((char *)v14 - Offset);
  }
  if ( v14->m_Type == 4103 )
  {
    pString = v14;
  }
  else
  {
    FxObjectHandleGetPtrQI(v14, (void **)&pString, (void *)String, 0x1007u, Offset);
    v7 = pKey;
    v14 = pString;
  }
  v16 = ZwSetValueKey(
          v7->m_Key,
          ValueName,
          0,
          1u,
          v14->m_UnicodeString.Buffer,
          (unsigned __int16)(v14->m_UnicodeString.Length + 2));
  v17 = v16;
  if ( v16 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, v6, v16);
  return v17;
}
