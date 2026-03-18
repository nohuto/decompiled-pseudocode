/*
 * XREFs of imp_WdfRegistryAssignUnicodeString @ 0x1C007CF60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        const _UNICODE_STRING *Value)
{
  FxRegKey *v7; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // cx
  int v16; // eax
  unsigned __int16 v17; // r9
  ULONG v18; // r14d
  _QWORD *v19; // rax
  _WORD *v20; // r15
  NTSTATUS v21; // edi
  unsigned __int16 v22; // r9
  FxRegKey *pKey; // [rsp+50h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+0h]

  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v7 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Key & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxRegKey *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4102 )
  {
    pKey = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pKey, (void *)Key, 0x1006u, Offset);
    v7 = pKey;
  }
  m_Globals = v7->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(m_Globals, (ULONG_PTR)retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    Length = ValueName->Length;
    if ( (ValueName->Length & 1) != 0 )
    {
      _a2 = Length;
      v14 = 13;
LABEL_19:
      WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v14, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
      return 3221225485LL;
    }
    LOWORD(_a2) = ValueName->MaximumLength;
    if ( (_a2 & 1) != 0 )
    {
      _a2 = (unsigned __int16)_a2;
      v14 = 14;
      goto LABEL_19;
    }
    if ( (_WORD)_a2 && !ValueName->Buffer )
    {
      _a2 = (unsigned __int16)_a2;
      v14 = 15;
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
    v15 = Value->Length;
    if ( (Value->Length & 1) != 0 )
    {
      v16 = v15;
      v17 = 13;
LABEL_31:
      WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v17, WPP_FxValidateFunctions_hpp_Traceguids_0, Value, v16, -1073741811);
      return 3221225485LL;
    }
    LOWORD(v16) = Value->MaximumLength;
    if ( (v16 & 1) != 0 )
    {
      v16 = (unsigned __int16)v16;
      v17 = 14;
      goto LABEL_31;
    }
    if ( (_WORD)v16 && !Value->Buffer )
    {
      v16 = (unsigned __int16)v16;
      v17 = 15;
      goto LABEL_31;
    }
    if ( v15 > (unsigned __int16)v16 )
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        Length,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        Value,
        v15,
        (unsigned __int16)v16,
        -1073741811);
      return 3221225485LL;
    }
    v18 = v15 + 2;
    v19 = FxPoolAllocator(m_Globals, (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks, 1u, v18, m_Globals->Tag, retaddr);
    v20 = v19;
    if ( v19 )
    {
      memmove(v19, Value->Buffer, Value->Length);
      v20[(unsigned __int64)Value->Length >> 1] = 0;
      v21 = ZwSetValueKey(pKey->m_Key, ValueName, 0, 1u, v20, v18);
      FxPoolFree(v20);
      if ( v21 >= 0 )
        return (unsigned int)v21;
      v22 = 34;
    }
    else
    {
      v21 = -1073741670;
      v22 = 33;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, v22, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, v21);
    return (unsigned int)v21;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
