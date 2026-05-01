/*
 * XREFs of ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@@Z @ 0x18003D328
 * Callers:
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_POLICY@@PEAU_RM_SYSTEM_MEMORY_METRICS@@2@Z @ 0x18003D5F4 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180001D28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?GenerateKernelBugCheckEx@@YAJW4_CRASHER_EXCEPTION_CODE@@KKKKPEBG1@Z @ 0x18003C37C (-GenerateKernelBugCheckEx@@YAJW4_CRASHER_EXCEPTION_CODE@@KKKKPEBG1@Z.c)
 */

void __fastcall RmpMemoryMonitorRebootIfAble(struct _RM_POLICY *a1, UCHAR a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  bool v6; // al
  bool v7; // [rsp+40h] [rbp-C0h] BYREF
  BYTE Data[4]; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Privilege; // [rsp+48h] [rbp-B8h] BYREF
  DWORD cbData; // [rsp+4Ch] [rbp-B4h] BYREF
  HKEY phkResult; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  ULONG Response; // [rsp+70h] [rbp-90h] BYREF
  PVOID ReturnedState; // [rsp+78h] [rbp-88h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h] BYREF
  char SystemInformation[8]; // [rsp+A0h] [rbp-60h] BYREF
  TraceLoggingHProvider hProvider; // [rsp+A8h] [rbp-58h]
  _BYTE v22[48]; // [rsp+E0h] [rbp-20h] BYREF
  int v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+114h] [rbp+14h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+150h] [rbp+50h]
  int v27; // [rsp+154h] [rbp+54h]
  __int64 v28; // [rsp+230h] [rbp+130h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+240h] [rbp+140h] BYREF
  __int64 *v30; // [rsp+260h] [rbp+160h]
  int v31; // [rsp+268h] [rbp+168h]
  int v32; // [rsp+26Ch] [rbp+16Ch]
  __int64 *v33; // [rsp+270h] [rbp+170h]
  int v34; // [rsp+278h] [rbp+178h]
  int v35; // [rsp+27Ch] [rbp+17Ch]
  __int64 *v36; // [rsp+280h] [rbp+180h]
  int v37; // [rsp+288h] [rbp+188h]
  int v38; // [rsp+28Ch] [rbp+18Ch]
  __int64 *v39; // [rsp+290h] [rbp+190h]
  int v40; // [rsp+298h] [rbp+198h]
  int v41; // [rsp+29Ch] [rbp+19Ch]
  __int64 *v42; // [rsp+2A0h] [rbp+1A0h]
  int v43; // [rsp+2A8h] [rbp+1A8h]
  int v44; // [rsp+2ACh] [rbp+1ACh]
  __int64 *v45; // [rsp+2B0h] [rbp+1B0h]
  int v46; // [rsp+2B8h] [rbp+1B8h]
  int v47; // [rsp+2BCh] [rbp+1BCh]
  bool *v48; // [rsp+2C0h] [rbp+1C0h]
  int v49; // [rsp+2C8h] [rbp+1C8h]
  int v50; // [rsp+2CCh] [rbp+1CCh]

  phkResult = 0LL;
  if ( TraceLoggingProviderEnabled(a1, a2, 0LL) )
  {
    memset_0(SystemInformation, 0, 0x40uLL);
    memset_0(v22, 0, 0x158uLL);
    NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    NtQuerySystemInformation(SystemPerformanceInformation, v22, 0x158u, 0LL);
    if ( (unsigned int)dword_1800690A0 > 4 )
    {
      if ( TlgKeywordOn(v3, 0x400000000009uLL) )
      {
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v19 = (unsigned int)(v23 * (_DWORD)hProvider);
        v30 = &v19;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        v12 = (unsigned int)((_DWORD)hProvider * v25);
        v33 = &v12;
        v43 = 8;
        v46 = 8;
        v49 = 1;
        v18 = (unsigned int)((_DWORD)hProvider * v24);
        v36 = &v18;
        v17 = v28 * (unsigned int)hProvider;
        v39 = &v17;
        v13 = (unsigned int)((_DWORD)hProvider * v27);
        v42 = &v13;
        v14 = (unsigned int)((_DWORD)hProvider * v26);
        v45 = &v14;
        v6 = (*((_DWORD *)a1 + 363) & 2) != 0;
        v50 = 0;
        v7 = v6;
        v48 = &v7;
        TlgWrite((TraceLoggingHProvider)(unsigned int)hProvider, &unk_18005BB1E, v4, v5, 9u, &pData);
      }
    }
  }
  if ( (*((_BYTE *)a1 + 1452) & 2) != 0 )
  {
    if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult)
      || (cbData = 4, RegQueryValueExW(phkResult, L"RebootOnLowCommit", 0LL, 0LL, Data, &cbData))
      || *(_DWORD *)Data )
    {
      GenerateKernelBugCheckEx();
      Privilege = 19;
      if ( RtlAcquirePrivilege(&Privilege, 1u, 0, &ReturnedState) >= 0 )
      {
        NtRaiseHardError(-1073741112, 0, 0, 0LL, 6u, &Response);
        RtlReleasePrivilege(&ReturnedState);
      }
      if ( phkResult )
        RegCloseKey(phkResult);
    }
  }
}
