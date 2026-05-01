/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x180021CDC
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x180021AD8 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_RUNTIME_CONFIGURATION *a2)
{
  __int128 v2; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  DWORD pcbData; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-85h] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-81h] BYREF
  int v26; // [rsp+50h] [rbp-79h] BYREF
  int pvData; // [rsp+54h] [rbp-75h] BYREF
  int v28; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-6Dh] BYREF
  __int128 v30; // [rsp+60h] [rbp-69h]
  __int128 v31; // [rsp+70h] [rbp-59h]
  __int128 v32; // [rsp+80h] [rbp-49h]
  __int128 v33; // [rsp+90h] [rbp-39h]
  __int128 v34; // [rsp+A0h] [rbp-29h]
  __int128 v35; // [rsp+B0h] [rbp-19h]
  __int128 v36; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v37; // [rsp+D0h] [rbp+7h] BYREF
  __int128 v38; // [rsp+E0h] [rbp+17h] BYREF

  v2 = *((_OWORD *)a1 + 1);
  v30 = *(_OWORD *)a1;
  phkResult = 0LL;
  v4 = *((_OWORD *)a1 + 2);
  v31 = v2;
  v5 = *((_OWORD *)a1 + 3);
  v32 = v4;
  v6 = *((_OWORD *)a1 + 4);
  v33 = v5;
  v7 = *((_OWORD *)a1 + 5);
  v34 = v6;
  v8 = *((_OWORD *)a1 + 6);
  v35 = v7;
  v9 = *((_OWORD *)a1 + 8);
  v36 = v8;
  v37 = *((_OWORD *)a1 + 7);
  v38 = v9;
  if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult) )
  {
    v10 = -1073741823;
    goto LABEL_52;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"MemoryFlags", 0x10u, 0LL, &pvData, &pcbData) && (pvData & 0xFFFFFFC0) == 0 )
  {
    v11 = v30;
    if ( (pvData & 2) == 0 )
      v11 = pvData;
    LODWORD(v30) = v11;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CustomizationFlags", 0x10u, 0LL, &v26, &pcbData) )
  {
    v12 = DWORD1(v30);
    if ( (v26 & 0xFFFFFF00) == 0 )
      v12 = v26;
    DWORD1(v30) = v12;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"SoftCommitPriorityThreshold", 0x10u, 0LL, &v28, &pcbData) )
  {
    v13 = DWORD2(v36);
    if ( (unsigned int)(v28 - 2) <= 0x62 )
      v13 = v28;
    DWORD2(v36) = v13;
  }
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryWatcherPeriodMs", 0x10u, 0LL, (char *)&v37 + 8, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryWatcherToleranceMs", 0x10u, 0LL, (char *)&v37 + 12, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryMonitorRemediationTimeoutMs", 0x10u, 0LL, &v38, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryMonitorTaskSwitchExemptions", 0x10u, 0LL, &v37, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MaximumInSwapDelayMs", 0x10u, 0LL, (char *)&v36 + 12, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"UserPresenceIoDeduction", 0x10u, 0LL, (char *)&v37 + 4, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"ActiveLowPriPeriodMs", 0x10u, 0LL, (char *)&v38 + 4, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"LazyEmptyPeriodMs", 0x10u, 0LL, (char *)&v38 + 8, &pcbData);
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HardCommitBufferSize", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( !is_mul_ok(v29, 0x100000uLL) )
      goto LABEL_55;
    *((_QWORD *)&v30 + 1) = (unsigned __int64)v29 << 20;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    DWORD1(v32) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"VeryHighPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    DWORD2(v32) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    HIDWORD(v32) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    DWORD2(v31) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x3E8 )
      goto LABEL_55;
    HIDWORD(v31) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalCommitUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    LODWORD(v32) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"RebootDebouncePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 || v24 > (unsigned int)v32 )
      goto LABEL_55;
    DWORD2(v33) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"ActiveLowPriCommitUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x3E8 )
      goto LABEL_55;
    LODWORD(v33) = v24;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"LazyEmptyPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
    if ( v24 > 0x64 )
      goto LABEL_55;
    DWORD1(v33) = v24;
  }
  pcbData = 4;
  if ( RegGetValueW(phkResult, 0LL, L"SystemStoreTrimPhysicalUsagePercentage", 0x10u, 0LL, &v24, &pcbData) )
  {
LABEL_51:
    v14 = v31;
    *(_OWORD *)a2 = v30;
    v15 = v32;
    *((_OWORD *)a2 + 1) = v14;
    v16 = v33;
    *((_OWORD *)a2 + 2) = v15;
    v17 = v34;
    *((_OWORD *)a2 + 3) = v16;
    v18 = v35;
    *((_OWORD *)a2 + 4) = v17;
    v19 = v36;
    *((_OWORD *)a2 + 5) = v18;
    v20 = v37;
    *((_OWORD *)a2 + 6) = v19;
    v21 = v38;
    *((_OWORD *)a2 + 7) = v20;
    *((_OWORD *)a2 + 8) = v21;
    v10 = 0;
    goto LABEL_52;
  }
  if ( v24 <= 0x64 && v24 <= DWORD2(v32) )
  {
    HIDWORD(v33) = v24;
    goto LABEL_51;
  }
LABEL_55:
  v10 = -1073741811;
LABEL_52:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v10;
}
