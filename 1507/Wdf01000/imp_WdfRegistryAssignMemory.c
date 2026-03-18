/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x1C007C360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        __int64 Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  WDFKEY__ *v7; // rsi
  FxRegKey *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v14; // r9
  IFxMemory *v15; // rcx
  __int64 Offset; // rdx
  char *v17; // r12
  unsigned __int64 v18; // rax
  ULONG v19; // edx
  unsigned __int64 v20; // r13
  unsigned __int64 BufferLength; // rax
  unsigned __int16 v22; // r9
  unsigned int v23; // edi
  NTSTATUS v24; // eax
  IFxMemory *pMemory; // [rsp+50h] [rbp-10h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+38h]
  ULONG v28; // [rsp+A8h] [rbp+48h]

  v7 = (WDFKEY__ *)Key;
  if ( !Key )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1006uLL);
  v8 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    Key = LOWORD(v8->__vftable);
    v8 = (FxRegKey *)((char *)v8 - Key);
  }
  if ( v8->m_Type == 4102 )
  {
    pKey = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pKey, v7, 0x1006u, Key);
    v8 = pKey;
  }
  m_Globals = v8->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v8->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
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
    v15 = (IFxMemory *)(~Memory & 0xFFFFFFFFFFFFFFF8uLL);
    Offset = 0LL;
    if ( (Memory & 1) != 0 )
    {
      Offset = LOWORD(v15->__vftable);
      v15 = (IFxMemory *)((char *)v15 - Offset);
    }
    if ( LOWORD(v15[1].__vftable) == 4106 )
    {
      pMemory = v15;
    }
    else
    {
      FxObjectHandleGetPtrQI((FxObject *)v15, (void **)&pMemory, (void *)Memory, 0x100Au, Offset);
      v15 = pMemory;
    }
    v17 = (char *)((__int64 (__fastcall *)(IFxMemory *, __int64))v15->GetBuffer)(v15, Offset);
    v18 = pMemory->GetBufferSize(pMemory);
    v19 = v18;
    v28 = v18;
    if ( !MemoryOffsets )
      goto LABEL_43;
    v20 = MemoryOffsets->BufferLength + MemoryOffsets->BufferOffset;
    if ( v20 < MemoryOffsets->BufferLength
      || v20 > ((__int64 (__fastcall *)(IFxMemory *, unsigned __int64))pMemory->GetBufferSize)(pMemory, v18) )
    {
      v22 = 29;
    }
    else
    {
      BufferLength = MemoryOffsets->BufferLength;
      if ( !BufferLength )
      {
        v19 = v28;
        goto LABEL_42;
      }
      if ( BufferLength <= 0xFFFFFFFF )
      {
        v19 = MemoryOffsets->BufferLength;
LABEL_42:
        v17 += MemoryOffsets->BufferOffset;
LABEL_43:
        v24 = ZwSetValueKey(pKey->m_Key, ValueName, 0, ValueType, v17, v19);
        v23 = v24;
        if ( v24 < 0 )
          WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x1Fu, WPP_FxRegistryAPI_cpp_Traceguids, v7, v24);
        return v23;
      }
      v22 = 30;
    }
    v23 = -1073741675;
    WPP_IFR_SF_qid(m_Globals, 2u, 2u, v22, WPP_FxRegistryAPI_cpp_Traceguids, v7, Memory, -1073741675);
    return v23;
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 3221225488LL;
}
