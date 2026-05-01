/*
 * XREFs of ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18001F804
 * Callers:
 *     ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F750 (-RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x1800216A4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 */

NTSTATUS __fastcall RmpSystemSetSystemAllowedCpuSets(PVOID SystemInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  const struct _TlgProvider_t *v5; // rcx
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  DWORD LastError; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp-28h]

  if ( !SystemInformation )
  {
    v2 = 0;
    goto LABEL_3;
  }
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
LABEL_3:
    if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
      return DelegateSetSystemAllowedCpuSets(SystemInformation, v2);
    else
      return NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, SystemInformation, v2);
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 0x400000000001uLL) )
  {
    LastError = GetLastError();
    p_LastError = &LastError;
    v12 = 4LL;
    TlgWrite(v6, &unk_1800446BC, v7, v8, 3u, &pData);
  }
  return -1073739509;
}
