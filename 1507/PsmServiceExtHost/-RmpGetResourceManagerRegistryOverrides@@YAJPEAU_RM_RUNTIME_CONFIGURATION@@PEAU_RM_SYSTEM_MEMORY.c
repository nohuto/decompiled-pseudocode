/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@0@Z @ 0x18001AA54
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGetResourceManagerRegistryOverrides(
        struct _RM_RUNTIME_CONFIGURATION *a1,
        struct _RM_SYSTEM_MEMORY_METRICS *a2,
        struct _RM_RUNTIME_CONFIGURATION *a3)
{
  int *v3; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // ecx
  int *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-BCh] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  int pvData; // [rsp+54h] [rbp-ACh] BYREF
  int v32; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+120h] [rbp+20h]
  unsigned int v38; // [rsp+128h] [rbp+28h]
  unsigned int v39; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v40; // [rsp+130h] [rbp+30h]
  unsigned int v41; // [rsp+134h] [rbp+34h]
  unsigned int v42; // [rsp+138h] [rbp+38h]
  unsigned int v43; // [rsp+13Ch] [rbp+3Ch]
  unsigned int v44; // [rsp+140h] [rbp+40h]
  unsigned int v45; // [rsp+144h] [rbp+44h]
  int v46; // [rsp+148h] [rbp+48h]
  _BYTE v47[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
  _BYTE v48[4]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v49[4]; // [rsp+154h] [rbp+54h] BYREF
  _BYTE v50[4]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v51[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
  _BYTE v52[4]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v53[12]; // [rsp+164h] [rbp+64h] BYREF

  v3 = &v34;
  phkResult = 0LL;
  v6 = 2LL;
  v7 = 2LL;
  do
  {
    v8 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v3 = *(_OWORD *)a1;
    v9 = *((_OWORD *)a1 + 2);
    *((_OWORD *)v3 + 1) = v8;
    v10 = *((_OWORD *)a1 + 3);
    *((_OWORD *)v3 + 2) = v9;
    v11 = *((_OWORD *)a1 + 4);
    *((_OWORD *)v3 + 3) = v10;
    v12 = *((_OWORD *)a1 + 5);
    *((_OWORD *)v3 + 4) = v11;
    v13 = *((_OWORD *)a1 + 6);
    *((_OWORD *)v3 + 5) = v12;
    v14 = *((_OWORD *)a1 + 7);
    a1 = (struct _RM_RUNTIME_CONFIGURATION *)((char *)a1 + 128);
    *((_OWORD *)v3 + 6) = v13;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v14;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)v3 = *(_QWORD *)a1;
  if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult) )
  {
    v15 = -1073741823;
    goto LABEL_48;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"MemoryFlags", 0x10u, 0LL, &pvData, &pcbData)
    && (pvData & 0xFFFFFFC0) == 0
    && ((pvData & 4) == 0 || (pvData & 2) == 0) )
  {
    v34 = pvData;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CustomizationFlags", 0x10u, 0LL, &v30, &pcbData) )
  {
    v16 = v35;
    if ( (v30 & 0xFFFFFFE0) == 0 )
      v16 = v30;
    v35 = v16;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"SoftCommitPriorityThreshold", 0x10u, 0LL, &v32, &pcbData) )
  {
    v17 = v46;
    if ( (unsigned int)(v32 - 2) <= 0x62 )
      v17 = v32;
    v46 = v17;
  }
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryWatcherPeriodMs", 0x10u, 0LL, v49, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryWatcherToleranceMs", 0x10u, 0LL, v50, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryMonitorRemediationTimeoutMs", 0x10u, 0LL, v51, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryMonitorTaskSwitchExemptions", 0x10u, 0LL, v48, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MaximumInSwapDelayMs", 0x10u, 0LL, v47, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"ActiveLowPriPeriodMs", 0x10u, 0LL, v52, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"LazyEmptyPeriodMs", 0x10u, 0LL, v53, &pcbData);
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HardCommitBufferSize", 0x10u, 0LL, &v33, &pcbData) )
  {
    if ( !is_mul_ok(v33, 0x100000uLL) )
      goto LABEL_51;
    v36 = (unsigned __int64)v33 << 20;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighPhysicalUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x64 )
      goto LABEL_51;
    v41 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"VeryHighPhysicalUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x64 )
      goto LABEL_51;
    v42 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalPhysicalUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x64 )
      goto LABEL_51;
    v43 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x64 )
      goto LABEL_51;
    v38 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitPhysicalUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x3E8 )
      goto LABEL_51;
    v39 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalCommitUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x64 )
      goto LABEL_51;
    v40 = v28;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"ActiveLowPriCommitUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
  {
    if ( v28 > 0x3E8 )
      goto LABEL_51;
    v44 = v28;
  }
  pcbData = 4;
  if ( RegGetValueW(phkResult, 0LL, L"LazyEmptyPhysicalUsagePercentage", 0x10u, 0LL, &v28, &pcbData) )
    goto LABEL_45;
  if ( v28 > 0x64 )
  {
LABEL_51:
    v15 = -1073741811;
    goto LABEL_48;
  }
  v45 = v28;
LABEL_45:
  v37 = *((_QWORD *)a2 + 2);
  v18 = &v34;
  do
  {
    v19 = *((_OWORD *)v18 + 1);
    *(_OWORD *)a3 = *(_OWORD *)v18;
    v20 = *((_OWORD *)v18 + 2);
    *((_OWORD *)a3 + 1) = v19;
    v21 = *((_OWORD *)v18 + 3);
    *((_OWORD *)a3 + 2) = v20;
    v22 = *((_OWORD *)v18 + 4);
    *((_OWORD *)a3 + 3) = v21;
    v23 = *((_OWORD *)v18 + 5);
    *((_OWORD *)a3 + 4) = v22;
    v24 = *((_OWORD *)v18 + 6);
    *((_OWORD *)a3 + 5) = v23;
    v25 = *((_OWORD *)v18 + 7);
    v18 += 32;
    *((_OWORD *)a3 + 6) = v24;
    a3 = (struct _RM_RUNTIME_CONFIGURATION *)((char *)a3 + 128);
    *((_OWORD *)a3 - 1) = v25;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)a3 = *(_QWORD *)v18;
  v15 = 0;
LABEL_48:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v15;
}
