/*
 * XREFs of imp_WdfRegistryQueryUnicodeString @ 0x1C007DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  _QWORD *v5; // r14
  WDFKEY__ *v8; // r12
  FxRegKey *v9; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v15; // r9
  _UNICODE_STRING *v16; // rbx
  unsigned __int16 v17; // cx
  int v18; // eax
  unsigned __int16 v19; // r9
  unsigned int v20; // r15d
  int v21; // eax
  size_t v22; // rsi
  int v23; // edi
  unsigned __int16 *Buffer; // rax
  ULONG Offset; // [rsp+20h] [rbp-40h]
  unsigned int type; // [rsp+50h] [rbp-10h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-8h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int dataLength; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0LL;
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
    FxVerifierNullBugCheck(v9->FxPagedObject::FxObject::m_Globals, (ULONG_PTR)retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      dataLength = 7567731;
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
    v15 = 13;
LABEL_17:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v15, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = ValueName->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v15 = 14;
    goto LABEL_17;
  }
  if ( (_WORD)_a2 && !ValueName->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v15 = 15;
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
  v16 = Value;
  if ( Value )
  {
    v17 = Value->Length;
    if ( (Value->Length & 1) != 0 )
    {
      v18 = v17;
      v19 = 13;
LABEL_30:
      WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v19, WPP_FxValidateFunctions_hpp_Traceguids_0, Value, v18, -1073741811);
      return 3221225485LL;
    }
    LOWORD(v18) = Value->MaximumLength;
    if ( (v18 & 1) != 0 )
    {
      v18 = (unsigned __int16)v18;
      v19 = 14;
      goto LABEL_30;
    }
    if ( (_WORD)v18 && !Value->Buffer )
    {
      v18 = (unsigned __int16)v18;
      v19 = 15;
      goto LABEL_30;
    }
    if ( v17 > (unsigned __int16)v18 )
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        Length,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        Value,
        v17,
        (unsigned __int16)v18,
        -1073741811);
      return 3221225485LL;
    }
    v20 = (unsigned __int16)v18;
    Offset = m_Globals->Tag;
    dataLength = (unsigned __int16)v18;
    v5 = FxPoolAllocator(
           m_Globals,
           (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
           1u,
           (unsigned __int16)v18,
           Offset,
           retaddr);
    if ( !v5 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x16u, WPP_FxRegistryAPI_cpp_Traceguids, v8, -1073741670);
      return 3221225626LL;
    }
    v9 = pKey;
  }
  else
  {
    v20 = 0;
    dataLength = 0;
  }
  v21 = FxRegKey::_QueryValue(v9->m_Globals, v9->m_Key, ValueName, v20, v5, &dataLength, &type);
  v22 = dataLength;
  v23 = v21;
  if ( v21 >= 0 )
  {
    if ( type - 1 > 1 )
      v23 = -1073741788;
    if ( v23 >= 0 )
      goto LABEL_47;
  }
  if ( v23 == -2147483643 )
  {
LABEL_47:
    if ( ValueByteLength )
      *ValueByteLength = dataLength;
  }
  if ( v23 >= 0 )
  {
    if ( v16 )
    {
      memmove(v16->Buffer, v5, v22);
      Buffer = v16->Buffer;
      v16->Length = v22;
      if ( !Buffer[((unsigned __int64)(unsigned __int16)v22 >> 1) - 1] )
        v16->Length = v22 - 2;
    }
  }
  if ( v5 )
    FxPoolFree(v5);
  return (unsigned int)v23;
}
