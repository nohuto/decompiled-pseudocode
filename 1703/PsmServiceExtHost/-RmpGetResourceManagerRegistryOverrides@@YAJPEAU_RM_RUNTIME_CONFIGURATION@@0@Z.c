/*
 * XREFs of ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x18001E134
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x18001D578 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
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
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD *v19; // rbx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  unsigned int v23; // ebx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-BCh] BYREF
  HKEY phkResult; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v46; // [rsp+100h] [rbp+0h]
  __int128 v47; // [rsp+110h] [rbp+10h] BYREF

  v2 = *((_OWORD *)a1 + 1);
  v37 = *(_OWORD *)a1;
  phkResult = 0LL;
  v4 = *((_OWORD *)a1 + 2);
  v38 = v2;
  v5 = *((_OWORD *)a1 + 3);
  v39 = v4;
  v6 = *((_OWORD *)a1 + 4);
  v40 = v5;
  v7 = *((_OWORD *)a1 + 5);
  v41 = v6;
  v8 = *((_OWORD *)a1 + 6);
  v42 = v7;
  v9 = *((_OWORD *)a1 + 8);
  v43 = v8;
  v44 = *((_OWORD *)a1 + 7);
  v10 = *((_OWORD *)a1 + 9);
  v45 = v9;
  v11 = *((_OWORD *)a1 + 10);
  v46 = v10;
  v47 = v11;
  if ( RegOpenKeyW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", &phkResult) )
  {
    v23 = -1073741823;
    goto LABEL_19;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"MemoryFlags", 0x10u, 0LL, &pvData, &pcbData) && (pvData & 0xFFFFFFC0) == 0 )
  {
    v25 = v37;
    if ( (pvData & 2) == 0 )
      v25 = pvData;
    LODWORD(v37) = v25;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CustomizationFlags", 0x10u, 0LL, &v31, &pcbData) )
  {
    v26 = DWORD1(v37);
    if ( (v31 & 0xFFFFFFC0) == 0 )
      v26 = v31;
    DWORD1(v37) = v26;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"SoftCommitPriorityThreshold", 0x10u, 0LL, &v34, &pcbData) )
  {
    v27 = DWORD2(v44);
    if ( (unsigned int)(v34 - 2) <= 0x62 )
      v27 = v34;
    DWORD2(v44) = v27;
  }
  v32 = 0;
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"EnableRelativeImportance", 0x10u, 0LL, &v32, &pcbData);
  BYTE8(v37) = v32 != 0;
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MemoryMonitorRemediationTimeoutMs", 0x10u, 0LL, (char *)&v45 + 4, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"MaximumInSwapDelayMs", 0x10u, 0LL, (char *)&v44 + 12, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"UserPresenceIoDeduction", 0x10u, 0LL, &v45, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"ActiveLowPriPeriodMs", 0x10u, 0LL, (char *)&v45 + 8, &pcbData);
  pcbData = 4;
  RegGetValueW(phkResult, 0LL, L"LazyEmptyPeriodMs", 0x10u, 0LL, (char *)&v45 + 12, &pcbData);
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HardCommitBufferSize", 0x10u, 0LL, &v35, &pcbData) )
  {
    if ( !is_mul_ok(v35, 0x100000uLL) )
      goto LABEL_35;
    *(_QWORD *)&v38 = (unsigned __int64)v35 << 20;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    DWORD2(v39) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"VeryHighPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    HIDWORD(v39) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    LODWORD(v40) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"MediumCommitUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    DWORD2(v38) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    HIDWORD(v38) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"HighCommitPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x3E8 )
      goto LABEL_35;
    LODWORD(v39) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"CriticalCommitUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    DWORD1(v39) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"RebootDebouncePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 || v29 > DWORD1(v39) )
      goto LABEL_35;
    HIDWORD(v40) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"ActiveLowPriCommitUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x3E8 )
      goto LABEL_35;
    DWORD1(v40) = v29;
  }
  pcbData = 4;
  if ( !RegGetValueW(phkResult, 0LL, L"LazyEmptyPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
    if ( v29 > 0x64 )
      goto LABEL_35;
    DWORD2(v40) = v29;
  }
  pcbData = 4;
  if ( RegGetValueW(phkResult, 0LL, L"SystemStoreTrimPhysicalUsagePercentage", 0x10u, 0LL, &v29, &pcbData) )
  {
LABEL_17:
    pcbData = 4;
    if ( RegGetValueW(phkResult, 0LL, L"QoSTimePercent", 0x10u, 0LL, v36, &pcbData) )
    {
LABEL_18:
      pcbData = 4;
      RegGetValueW(phkResult, 0LL, L"QosTimeoutMs", 0x10u, 0LL, &v47, &pcbData);
      v12 = v38;
      *(_OWORD *)a2 = v37;
      v13 = v39;
      *((_OWORD *)a2 + 1) = v12;
      v14 = v40;
      *((_OWORD *)a2 + 2) = v13;
      v15 = v41;
      *((_OWORD *)a2 + 3) = v14;
      v16 = v42;
      *((_OWORD *)a2 + 4) = v15;
      v17 = v43;
      *((_OWORD *)a2 + 5) = v16;
      v18 = v44;
      *((_OWORD *)a2 + 6) = v17;
      v19 = (_OWORD *)((char *)a2 + 128);
      v20 = v45;
      *(v19 - 1) = v18;
      v21 = v46;
      *v19 = v20;
      v22 = v47;
      v19[1] = v21;
      v19[2] = v22;
      v23 = 0;
      goto LABEL_19;
    }
    if ( v36[0] <= 0x64 )
    {
      BYTE8(v47) = v36[0];
      goto LABEL_18;
    }
    goto LABEL_35;
  }
  if ( v29 <= 0x64 && v29 <= HIDWORD(v39) )
  {
    LODWORD(v41) = v29;
    goto LABEL_17;
  }
LABEL_35:
  v23 = -1073741811;
LABEL_19:
  if ( phkResult )
    RegCloseKey(phkResult);
  return v23;
}
