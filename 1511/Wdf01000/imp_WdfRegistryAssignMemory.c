/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x1C00709D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall imp_WdfRegistryAssignMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        _UNICODE_STRING *ValueName,
        ULONG ValueType,
        WDFMEMORY__ *Memory,
        _WDFMEMORY_OFFSET *MemoryOffsets)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  WDFMEMORY__ *v9; // rsi
  __int64 result; // rax
  char *Data; // r14
  ULONG v12; // eax
  _WDFMEMORY_OFFSET *v13; // rdi
  ULONG DataSize; // r13d
  unsigned __int64 v15; // r12
  unsigned __int64 BufferLength; // rax
  NTSTATUS _a2; // eax
  unsigned int v18; // edi
  unsigned __int16 v19; // r9
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]
  IFxMemory *pMemory; // [rsp+80h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+90h] [rbp+18h] BYREF
  ULONG Type; // [rsp+98h] [rbp+20h]

  Type = ValueType;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v9 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v9, 0x100Au, (void **)&pMemory);
      Data = (char *)pMemory->GetBuffer(pMemory);
      v12 = pMemory->GetBufferSize(pMemory);
      v13 = MemoryOffsets;
      DataSize = v12;
      if ( !MemoryOffsets )
        goto LABEL_14;
      v15 = MemoryOffsets->BufferLength + MemoryOffsets->BufferOffset;
      if ( v15 < MemoryOffsets->BufferLength || v15 > pMemory->GetBufferSize(pMemory) )
      {
        v19 = 29;
      }
      else
      {
        BufferLength = v13->BufferLength;
        if ( !BufferLength )
        {
LABEL_13:
          Data += v13->BufferOffset;
LABEL_14:
          _a2 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, Data, DataSize);
          v18 = _a2;
          if ( _a2 < 0 )
            WPP_IFR_SF_qd(
              m_Globals,
              2u,
              2u,
              0x1Fu,
              (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
              Key,
              _a2);
          return v18;
        }
        if ( BufferLength <= 0xFFFFFFFF )
        {
          DataSize = v13->BufferLength;
          goto LABEL_13;
        }
        v19 = 30;
      }
      v18 = -1073741675;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        2u,
        v19,
        (const _GUID *)&FxObject::`vftable'.WdfVerifierAllocateFailCount,
        Key,
        (__int64)v9,
        -1073741675);
      return v18;
    }
  }
  return result;
}
