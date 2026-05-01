/*
 * XREFs of ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180037E14
 * Callers:
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18002EFE0 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpSystemSetProcessAllowedCpuSets(HANDLE ProcessHandle, PVOID ProcessInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  const struct _TlgProvider_t *v6; // rcx
  TraceLoggingHProvider v7; // rcx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  DWORD LastError; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-30h]
  __int64 v14; // [rsp+60h] [rbp-28h]

  v2 = 0;
  if ( !ProcessInformation )
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  }
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v6, 0x400000000001uLL) )
    {
      LastError = GetLastError();
      p_LastError = &LastError;
      v14 = 4LL;
      TlgWrite(v7, &unk_1800446BC, v8, v9, 3u, &pData);
    }
  }
  return -1073739509;
}
