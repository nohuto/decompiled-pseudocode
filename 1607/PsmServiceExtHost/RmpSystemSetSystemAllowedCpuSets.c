/*
 * XREFs of RmpSystemSetSystemAllowedCpuSets @ 0x1800034D0
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180003408 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation)
{
  ULONG v1; // ebx
  WORD MaximumProcessorGroupCount; // ax
  const struct _TlgProvider_t *v5; // rcx
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v1 = 0;
  if ( !SystemInformation )
    return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v1);
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v1 = 8 * MaximumProcessorGroupCount;
    return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v1);
  }
  if ( (unsigned int)dword_18004C030 > 4 )
  {
    if ( TlgKeywordOn(v5, 0x400000000001uLL) )
    {
      LastError = GetLastError();
      p_LastError = &LastError;
      v12 = 4LL;
      TlgWrite(v6, &unk_180043427, v7, v8, 3u, &pData);
    }
  }
  return -1073739509;
}
