/*
 * XREFs of RmpGetResourceManagerRuntimeConfiguration @ 0x18001A574
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x18000561C (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?RmpGenerateUsageLimitsFromRuntimeSettings@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001A748 (-RmpGenerateUsageLimitsFromRuntimeSettings@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEM.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@0@Z @ 0x18001AA54 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SYSTEM_MEMORY.c)
 *     RtlQueryResourcePolicy @ 0x18001B0C8 (RtlQueryResourcePolicy.c)
 *     MemUtilQueryMaxCommit @ 0x18001B188 (MemUtilQueryMaxCommit.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     RmpSystemIsSdBusBased @ 0x180042874 (RmpSystemIsSdBusBased.c)
 */

__int64 __fastcall RmpGetResourceManagerRuntimeConfiguration(_OWORD *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rsi
  const struct _TlgProvider_t *v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 result; // rax
  int v16; // edi
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  int v20; // [rsp+38h] [rbp-D0h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v22[7]; // [rsp+40h] [rbp-C8h] BYREF
  _DWORD v23[46]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v24; // [rsp+130h] [rbp+28h]
  __int64 v25; // [rsp+138h] [rbp+30h]
  int v26; // [rsp+140h] [rbp+38h]
  int v27; // [rsp+144h] [rbp+3Ch]
  int v28; // [rsp+148h] [rbp+40h]
  int v29; // [rsp+14Ch] [rbp+44h]
  int v30; // [rsp+150h] [rbp+48h]
  int v31; // [rsp+154h] [rbp+4Ch]
  int v32; // [rsp+158h] [rbp+50h]
  int v33; // [rsp+15Ch] [rbp+54h]
  int v34; // [rsp+160h] [rbp+58h]
  int v35; // [rsp+164h] [rbp+5Ch]
  int v36; // [rsp+168h] [rbp+60h]
  int v37; // [rsp+16Ch] [rbp+64h]
  int v38; // [rsp+170h] [rbp+68h]
  int v39; // [rsp+174h] [rbp+6Ch]
  int v40; // [rsp+178h] [rbp+70h]
  int v41; // [rsp+17Ch] [rbp+74h]
  _BYTE v42[272]; // [rsp+188h] [rbp+80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+298h] [rbp+190h] BYREF
  int *p_ResourceManagerRegistryOverrides; // [rsp+2B8h] [rbp+1B0h]
  int v45; // [rsp+2C0h] [rbp+1B8h]
  int v46; // [rsp+2C4h] [rbp+1BCh]

  memset_0(v23, 0, 0x108uLL);
  memset_0(v42, 0, 0x108uLL);
  RmpSystemMemoryMetricsQuery(v22);
  MemUtilQueryMaxCommit(v22);
  v2 = v23[0] | 1;
  v23[0] |= 1u;
  v5 = 2LL;
  if ( (int)RtlQueryResourcePolicy(0LL, v3, &v20) >= 0
    && v20 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v4, &v20) >= 0
    && v20 > 10 )
  {
    v16 = v2 | 0x1C;
    v23[0] = v16;
    if ( (unsigned int)RmpSystemIsSdBusBased() )
      v23[0] = v16 | 0x20;
  }
  v34 = 35;
  v28 = 95;
  v31 = 95;
  v35 = 5000;
  v39 = 5000;
  v40 = 5000;
  v37 = 1000;
  v38 = 1000;
  v24 = 52428800LL;
  v25 = 104857600LL;
  v26 = 80;
  v27 = 170;
  v29 = 75;
  v30 = 90;
  v32 = 10;
  v33 = 65;
  v36 = 7;
  v41 = 60000;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)v23,
                                       (struct _RM_SYSTEM_MEMORY_METRICS *)v22,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v42);
  if ( ResourceManagerRegistryOverrides < 0
    || (ResourceManagerRegistryOverrides = RmpGenerateUsageLimitsFromRuntimeSettings(
                                             (struct _RM_RUNTIME_CONFIGURATION *)v42,
                                             (struct _RM_SYSTEM_MEMORY_METRICS *)v22),
        ResourceManagerRegistryOverrides < 0) )
  {
    if ( (unsigned int)dword_1800690A0 > 2 && TlgKeywordOn(v6, 1uLL) )
    {
      v46 = 0;
      p_ResourceManagerRegistryOverrides = &ResourceManagerRegistryOverrides;
      v45 = 4;
      TlgWrite(v17, &unk_18005AD75, v18, v19, 3u, &pData);
    }
    RmpGenerateUsageLimitsFromRuntimeSettings(
      (struct _RM_RUNTIME_CONFIGURATION *)v23,
      (struct _RM_SYSTEM_MEMORY_METRICS *)v22);
    v7 = v23;
  }
  else
  {
    v7 = v42;
  }
  do
  {
    v8 = v7[1];
    *a1 = *v7;
    v9 = v7[2];
    a1[1] = v8;
    v10 = v7[3];
    a1[2] = v9;
    v11 = v7[4];
    a1[3] = v10;
    v12 = v7[5];
    a1[4] = v11;
    v13 = v7[6];
    a1[5] = v12;
    v14 = v7[7];
    v7 += 8;
    a1[6] = v13;
    a1 += 8;
    *(a1 - 1) = v14;
    --v5;
  }
  while ( v5 );
  result = *(_QWORD *)v7;
  *(_QWORD *)a1 = result;
  return result;
}
