/*
 * XREFs of ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180001970
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001E2C (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180001E4C (-RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000505C (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180005250 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180008C30 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgCreateWsz @ 0x180013700 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpTelemetryLogPartitionState(struct _RM_PARTITION *a1, void *a2)
{
  char *v2; // r15
  struct _RM_PARTITION *v3; // r13
  int v4; // ebx
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r10
  int v13; // edx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // ecx
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  unsigned __int64 v25; // rdi
  ULONGLONG v26; // r10
  const struct _TlgProvider_t *v27; // rcx
  const GUID *v28; // r9
  const struct _TlgProvider_t *v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // ebx
  const struct _TlgProvider_t *v33; // rcx
  const GUID *v34; // r8
  const GUID *v35; // r9
  unsigned __int64 v36; // rcx
  const struct _TlgProvider_t *v37; // rcx
  const GUID *v38; // r8
  const GUID *v39; // r9
  unsigned __int64 v40; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // ecx
  int v44; // eax
  const struct _TlgProvider_t *v45; // rcx
  LPCGUID v46; // r8
  LPCGUID v47; // r9
  unsigned int v48; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-C0h] BYREF
  int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  char v54[16]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v55; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+90h] [rbp-78h]
  WCHAR pwsz[280]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v58; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int64 v59; // [rsp+2E0h] [rbp+1D8h]
  __int64 v60; // [rsp+2E8h] [rbp+1E0h]
  __int64 v61; // [rsp+2F0h] [rbp+1E8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int64 *v64; // [rsp+328h] [rbp+220h]
  __int64 v65; // [rsp+330h] [rbp+228h]
  _DWORD *v66; // [rsp+338h] [rbp+230h]
  __int64 v67; // [rsp+340h] [rbp+238h]
  unsigned int *v68; // [rsp+348h] [rbp+240h]
  __int64 v69; // [rsp+350h] [rbp+248h]
  unsigned __int64 *v70; // [rsp+358h] [rbp+250h]
  __int64 v71; // [rsp+360h] [rbp+258h]
  __int64 v72; // [rsp+378h] [rbp+270h]
  __int64 v73; // [rsp+380h] [rbp+278h]

  v2 = (char *)a1 + 144;
  v50 = (unsigned __int64)a1;
  v3 = a1;
  RmpPolicyPopulateActivityHostMetrics(a1, 0LL, (char *)a1 + 144, 10LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v4 = 0;
  v5 = 0;
  v58 = 0LL;
  v6 = 0;
  v59 = 0LL;
  v7 = 0;
  v60 = 0LL;
  v8 = 0;
  v61 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  if ( *((_DWORD *)v2 + 9) )
  {
    do
    {
      v9 = *(_QWORD *)v2 + ((unsigned __int64)v7 << 6);
      v10 = *(_QWORD *)(v9 + 48);
      v11 = RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)v10, 1u) != 0 ? 2 : 0;
      v14 = v13 | v11;
      if ( *(char *)(v10 + 666) >= 0 )
        v14 = v11;
      ++*((_DWORD *)&v58 + v14);
      if ( (*(_BYTE *)(v9 + 62) & 2) != 0 )
      {
        v15 = *((_DWORD *)&v60 + v14);
        v16 = *(_QWORD *)v9 >> 20;
        if ( v16 > v12 )
          LODWORD(v16) = v12;
        v17 = v16 + v15;
        v18 = v12;
        if ( v17 >= v15 )
          v18 = v17;
        *((_DWORD *)&v60 + v14) = v18;
      }
      if ( (*(_BYTE *)(v9 + 62) & 8) != 0 )
      {
        v19 = *((_DWORD *)&v72 + v14);
        v20 = *(_QWORD *)(v9 + 24) >> 20;
        if ( v20 > v12 )
          LODWORD(v20) = v12;
        v21 = v20 + v19;
        v22 = v12;
        if ( v21 >= v19 )
          v22 = v21;
        *((_DWORD *)&v72 + v14) = v22;
      }
      if ( (_DWORD)v14 == 1 && RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)v10, &v53) >= 0 )
      {
        if ( (*(_BYTE *)(v10 + 820) & 0x10) != 0 && (*(_BYTE *)(v10 + 1132) & 4) == 0 )
        {
          RmpActivityHostGetTracingId((struct _RM_ACTIVITY_HOST *)v10, (struct _RM_ACTIVITY_HOST_TRACING_ID *)pwsz);
          if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v45, 0x400000000001uLL) )
          {
            TlgCreateWsz(&pDesc, pwsz);
            v64 = &v53;
            v65 = 8LL;
            v66 = (_DWORD *)v9;
            v67 = 8LL;
            TlgWrite((TraceLoggingHProvider)&v53, &unk_18003F9FB, v46, v47, 5u, &pData);
          }
          *(_DWORD *)(v10 + 1132) |= 4u;
        }
        v42 = v53 >> 20;
        if ( v53 >> 20 > 0xFFFFFFFF )
          LODWORD(v42) = -1;
        v43 = v42 + v6;
        v44 = -1;
        if ( v43 >= v6 )
          v44 = v43;
        v6 = v44;
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)v2 + 9) );
    v8 = v61;
    v4 = v60;
    v5 = v73;
    v3 = (struct _RM_PARTITION *)v50;
  }
  RmpSystemMemoryMetricsQuery(v3, (struct _RM_SYSTEM_MEMORY_METRICS *)v54);
  LODWORD(v24) = dword_18004D030;
  v25 = v55 >> 20;
  v26 = 0x400000000001LL;
  if ( v55 >> 20 > 0xFFFFFFFF )
    LODWORD(v25) = -1;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v23, 0x400000000001uLL) )
  {
    v51 = v25;
    pDesc.Ptr = (ULONGLONG)&v51;
    v52 = HIDWORD(v61);
    v64 = (unsigned __int64 *)&v52;
    v48 = HIDWORD(v60);
    v66 = &v48;
    v68 = &v49;
    v70 = &v50;
    *(_QWORD *)&pDesc.Size = 4LL;
    v65 = 4LL;
    v67 = 4LL;
    v49 = v8;
    v69 = 4LL;
    LODWORD(v50) = v4;
    v71 = 4LL;
    TlgWrite(v27, &unk_18003F8DE, v24, v28, 7u, &pData);
    LODWORD(v24) = dword_18004D030;
    v26 = 0x400000000001LL;
  }
  v29 = (const struct _TlgProvider_t *)&v58;
  v30 = 4LL;
  do
  {
    v31 = *(_DWORD *)v29;
    if ( *(_DWORD *)v29 > 0xFFu )
      v31 = 255;
    *(_DWORD *)v29 = v31;
    v29 = (const struct _TlgProvider_t *)((char *)v29 + 4);
    --v30;
  }
  while ( v30 );
  v32 = HIDWORD(v59) | ((HIDWORD(v58) | (((unsigned int)v59 | ((_DWORD)v58 << 8)) << 8)) << 8);
  if ( (unsigned int)v24 > 4 && TlgKeywordOn(v29, v26) )
  {
    LODWORD(v50) = v25;
    pDesc.Ptr = (ULONGLONG)&v50;
    v64 = (unsigned __int64 *)&v49;
    v66 = &v48;
    *(_QWORD *)&pDesc.Size = 4LL;
    v49 = v6;
    v65 = 4LL;
    v48 = v32;
    v67 = 4LL;
    TlgWrite(v33, &unk_18003F98E, v34, v35, 5u, &pData);
  }
  if ( (int)RmpSystemQueryCompressionProcessPrivateWorkingSet(&v50) < 0 )
  {
    v36 = 0xFFFFFFFFLL;
  }
  else
  {
    v36 = v50 >> 20;
    if ( v50 >> 20 > 0xFFFFFFFF )
      v36 = 0xFFFFFFFFLL;
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v36, 0x400000000001uLL) )
  {
    v40 = v56 >> 20;
    *(_QWORD *)&pDesc.Size = 4LL;
    v65 = 4LL;
    if ( v56 >> 20 > (unsigned __int64)v38 )
      LODWORD(v40) = (_DWORD)v38;
    v48 = v5;
    LODWORD(v50) = v40;
    pDesc.Ptr = (ULONGLONG)&v50;
    v49 = HIDWORD(v73);
    v64 = (unsigned __int64 *)&v49;
    v66 = &v48;
    v68 = (unsigned int *)&v52;
    v70 = (unsigned __int64 *)&v51;
    v67 = 4LL;
    v52 = (int)v37;
    v69 = 4LL;
    v51 = v32;
    v71 = 4LL;
    TlgWrite(v37, &unk_18003FA4C, v38, v39, 7u, &pData);
  }
  return 0LL;
}
