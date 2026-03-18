/*
 * XREFs of imp_WdfRegistryQueryValue @ 0x1C00036B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  __int64 v10; // rdx
  FxRegKey *v11; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 v13; // dx
  int v14; // eax
  ULONG Tag; // r8d
  void *m_Key; // r14
  __int64 *PoolWithTag; // rbx
  ULONG Length; // eax
  NTSTATUS _a2; // edi
  unsigned int v20; // eax
  unsigned __int8 v22; // dl
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v24; // r9
  ULONG ResultLength; // [rsp+50h] [rbp-78h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-70h] BYREF
  unsigned int *v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-60h] BYREF
  int v29; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v27 = ValueLengthQueried;
  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  LOWORD(v10) = 0;
  v11 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Key & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxRegKey *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4102 )
  {
    pKey = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pKey, (void *)Key, 0x1006u, v10);
    v11 = pKey;
  }
  m_Globals = v11->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v11->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
  }
  v13 = ValueName->Length;
  if ( (ValueName->Length & 1) != 0 )
  {
    v14 = v13;
    v24 = 13;
LABEL_39:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v24, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v14, -1073741811);
    return 3221225485LL;
  }
  LOWORD(v14) = ValueName->MaximumLength;
  if ( (v14 & 1) != 0 )
  {
    v14 = (unsigned __int16)v14;
    v24 = 14;
    goto LABEL_39;
  }
  if ( (_WORD)v14 && !ValueName->Buffer )
  {
    v14 = (unsigned __int16)v14;
    v24 = 15;
    goto LABEL_39;
  }
  if ( v13 <= (unsigned __int16)v14 )
  {
    Tag = m_Globals->Tag;
    m_Key = v11->m_Key;
    if ( Value )
    {
      ResultLength = ValueLength + 12;
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, ValueLength + 12, Tag);
      if ( !PoolWithTag )
      {
        _a2 = -1073741670;
        v22 = 2;
LABEL_31:
        WPP_IFR_SF_qd(m_Globals, v22, 2u, 0xEu, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, _a2);
        return (unsigned int)_a2;
      }
      Length = ResultLength;
    }
    else
    {
      PoolWithTag = &v28;
      Length = 12;
      v28 = 0LL;
      ResultLength = 12;
      v29 = 0;
    }
    _a2 = ZwQueryValueKey(m_Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    if ( _a2 < 0 )
    {
      if ( _a2 != -2147483643 )
        goto LABEL_24;
    }
    else if ( Value )
    {
      v20 = *((_DWORD *)PoolWithTag + 2);
      if ( ValueLength >= v20 )
        memmove(Value, (char *)PoolWithTag + 12, v20);
    }
    if ( v27 )
      *v27 = *((_DWORD *)PoolWithTag + 2);
    if ( ValueType )
      *ValueType = *((_DWORD *)PoolWithTag + 1);
LABEL_24:
    if ( PoolWithTag != &v28 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( _a2 >= 0 )
      return (unsigned int)_a2;
    v22 = 2;
    if ( _a2 == -2147483643 && !Value && !ValueLength )
    {
      v22 = 5;
      if ( !m_Globals->FxVerboseOn )
        return (unsigned int)_a2;
    }
    goto LABEL_31;
  }
  WPP_IFR_SF_qddd(
    m_Globals,
    v13,
    6u,
    0x10u,
    WPP_FxValidateFunctions_hpp_Traceguids_0,
    ValueName,
    v13,
    (unsigned __int16)v14,
    -1073741811);
  return 3221225485LL;
}
