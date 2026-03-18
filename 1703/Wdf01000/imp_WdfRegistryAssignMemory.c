/*
 * XREFs of imp_WdfRegistryAssignMemory @ 0x1C0083940
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000307C (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
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
  WDFMEMORY__ *_a2; // rbp
  __int64 result; // rax
  char *v11; // r12
  ULONG v12; // eax
  _WDFMEMORY_OFFSET *v13; // r15
  ULONG v14; // edx
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  int _a3; // edi
  unsigned __int64 v19; // rax
  NTSTATUS v20; // eax
  ULONG v21; // [rsp+40h] [rbp-48h]
  ULONG_PTR retaddr; // [rsp+88h] [rbp+0h]
  IFxMemory *pMemory; // [rsp+90h] [rbp+8h] BYREF
  FxRegKey *pKey; // [rsp+A0h] [rbp+18h] BYREF
  ULONG Type; // [rsp+A8h] [rbp+20h]

  Type = ValueType;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Key,
    0x1006u,
    (void **)&pKey);
  m_Globals = pKey->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a2 = Memory;
  if ( !Memory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(m_Globals, (unsigned __int64)_a2, 0x100Au, (void **)&pMemory);
      v11 = (char *)pMemory->GetBuffer(pMemory);
      v12 = pMemory->GetBufferSize(pMemory);
      v13 = MemoryOffsets;
      v14 = v12;
      v21 = v12;
      if ( MemoryOffsets )
      {
        BufferLength = MemoryOffsets->BufferLength;
        v16 = BufferLength + MemoryOffsets->BufferOffset;
        if ( v16 >= BufferLength )
        {
          v17 = BufferLength + MemoryOffsets->BufferOffset;
          if ( v17 > pMemory->GetBufferSize(pMemory) )
          {
            _a3 = -1073741675;
LABEL_14:
            WPP_IFR_SF_qid(m_Globals, 2u, 2u, 0x21u, WPP_FxRegistryAPI_cpp_Traceguids, Key, (__int64)_a2, _a3);
            return (unsigned int)_a3;
          }
          _a3 = 0;
        }
        else
        {
          _a3 = v16 < BufferLength ? 0xC0000095 : 0;
        }
        if ( _a3 < 0 )
          goto LABEL_14;
        v19 = v13->BufferLength;
        if ( v19 )
        {
          if ( v19 > 0xFFFFFFFF )
          {
            WPP_IFR_SF_qid(m_Globals, 2u, 2u, 0x22u, WPP_FxRegistryAPI_cpp_Traceguids, Key, (__int64)_a2, -1073741675);
            return 3221225621LL;
          }
          v14 = v13->BufferLength;
        }
        else
        {
          v14 = v21;
        }
        v11 += v13->BufferOffset;
      }
      v20 = ZwSetValueKey(pKey->m_Key, ValueName, 0, Type, v11, v14);
      _a3 = v20;
      if ( v20 < 0 )
        WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0x23u, WPP_FxRegistryAPI_cpp_Traceguids, Key, v20);
      return (unsigned int)_a3;
    }
  }
  return result;
}
