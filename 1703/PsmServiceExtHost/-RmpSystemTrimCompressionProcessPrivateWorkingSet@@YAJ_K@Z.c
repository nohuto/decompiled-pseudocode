/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x180038274
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18003686C (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ecx
  int v3; // edx
  const GUID *v4; // r8
  const GUID *v5; // r9
  unsigned int v7; // [rsp+30h] [rbp-49h] BYREF
  __int64 v8; // [rsp+38h] [rbp-41h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp-31h]
  int v11; // [rsp+50h] [rbp-29h]
  _QWORD v12[3]; // [rsp+58h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  unsigned int *v14; // [rsp+90h] [rbp+17h]
  int v15; // [rsp+98h] [rbp+1Fh]
  int v16; // [rsp+9Ch] [rbp+23h]
  __int64 *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]

  v8 = a1;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v12[0] = 1LL;
  v11 = 16;
  v12[1] = (unsigned __int64)(a1 + 4095) >> 12;
  v10 = v12;
  v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v2 = v1;
  v7 = v1;
  if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn((TraceLoggingHProvider)v1, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v14 = &v7;
    v17 = &v8;
    v15 = v3 + 3;
    v18 = 8;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v3 + 3), &unk_180044462, v4, v5, v3 + 3, &pData);
    return v7;
  }
  return v2;
}
