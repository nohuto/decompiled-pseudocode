/*
 * XREFs of ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180003A50 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     RmpSystemQueryCompressionProcessPrivateWorkingSet @ 0x180003A94 (RmpSystemQueryCompressionProcessPrivateWorkingSet.c)
 *     RmpActivityHostIsRunnable @ 0x180004940 (RmpActivityHostIsRunnable.c)
 *     RmpActivityHostQueryCommitDebt @ 0x180007494 (RmpActivityHostQueryCommitDebt.c)
 *     RmpPolicyPopulateActivityHostMetrics @ 0x180007510 (RmpPolicyPopulateActivityHostMetrics.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryLogGlobalState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rsi
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  int v3; // r14d
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  unsigned int v6; // edi
  unsigned int v7; // r15d
  int IsRunnable; // eax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r11
  int v12; // r9d
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  int v20; // edx
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rsi
  ULONGLONG v25; // r10
  const struct _TlgProvider_t *v26; // rcx
  __int64 v27; // r14
  const struct _TlgProvider_t *v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  unsigned int v31; // edi
  const struct _TlgProvider_t *v32; // rcx
  const GUID *v33; // r8
  const GUID *v34; // r9
  __int64 v35; // rcx
  const GUID *v36; // r8
  const struct _TlgProvider_t *v37; // rcx
  const GUID *v38; // r9
  unsigned __int64 v39; // rax
  const struct _TlgProvider_t *v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // ecx
  int v43; // eax
  const struct _TlgProvider_t *v44; // rcx
  const GUID *v45; // r8
  const GUID *v46; // r9
  unsigned int v47; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_SERVICE_GLOBALS *v49; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v50; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  char v53[24]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v54; // [rsp+68h] [rbp-98h]
  unsigned __int64 v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  __int64 v59; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _RM_SERVICE_GLOBALS **v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  unsigned int *v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+F8h] [rbp-8h]
  unsigned int *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  unsigned int *v67; // [rsp+110h] [rbp+10h]
  __int64 v68; // [rsp+118h] [rbp+18h]
  struct _RM_SERVICE_GLOBALS **v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  unsigned int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]

  v49 = a1;
  v1 = (char *)a1 + 1784;
  v2 = a1;
  RmpPolicyPopulateActivityHostMetrics(
    (_DWORD)a1,
    0,
    (_DWORD)a1 + 1784,
    10,
    (__int64)RmpPolicyFilterActivityHostWithFlags,
    2LL);
  v3 = 0;
  v4 = 0;
  v56 = 0LL;
  v5 = 0;
  v57 = 0LL;
  v6 = 0;
  v58 = 0LL;
  v7 = 0;
  v59 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  if ( *((_DWORD *)v1 + 9) )
  {
    do
    {
      IsRunnable = RmpActivityHostIsRunnable(*(_QWORD *)(*(_QWORD *)v1 + ((unsigned __int64)v6 << 6) + 48), 1LL);
      v12 = 0;
      if ( IsRunnable )
        v12 = 2;
      if ( *(char *)(v11 + 666) < 0 )
        v12 |= v9;
      ++*((_DWORD *)&v56 + v12);
      if ( (*(_BYTE *)(v10 + 62) & 2) != 0 )
      {
        v13 = *((_DWORD *)&v58 + v12);
        v14 = *(_QWORD *)v10 >> 20;
        if ( v14 > 0xFFFFFFFF )
          LODWORD(v14) = -1;
        v15 = v14 + v13;
        v16 = -1;
        if ( v15 >= v13 )
          v16 = v15;
        *((_DWORD *)&v58 + v12) = v16;
      }
      if ( (*(_BYTE *)(v10 + 62) & 8) != 0 )
      {
        v17 = *((_DWORD *)&v73 + v12);
        v18 = *(_QWORD *)(v10 + 24) >> 20;
        if ( v18 > 0xFFFFFFFF )
          LODWORD(v18) = -1;
        v19 = v18 + v17;
        v20 = -1;
        if ( v19 >= v17 )
          v20 = v19;
        *((_DWORD *)&v73 + v12) = v20;
      }
      if ( v12 == 1 && (int)RmpActivityHostQueryCommitDebt(v11, &v52) >= 0 )
      {
        v41 = v52 >> 20;
        if ( v52 >> 20 > 0xFFFFFFFF )
          LODWORD(v41) = -1;
        v42 = v41 + v5;
        v43 = -1;
        if ( v42 >= v5 )
          v43 = v42;
        v5 = v43;
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)v1 + 9) );
    v7 = v59;
    v3 = v58;
    v4 = v74;
    v2 = v49;
  }
  RmpSystemMemoryMetricsQuery(v53);
  LODWORD(v22) = dword_18004C030;
  v23 = 4LL;
  v24 = v54 >> 20;
  v25 = 0x400000000001LL;
  if ( v54 >> 20 > 0xFFFFFFFF )
    LODWORD(v24) = -1;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v21, 0x400000000001uLL) )
  {
    v47 = v7;
    v61 = (struct _RM_SERVICE_GLOBALS **)&v50;
    v51 = HIDWORD(v59);
    v63 = (unsigned int *)&v51;
    v48 = HIDWORD(v58);
    v65 = &v48;
    v67 = &v47;
    LODWORD(v49) = v3;
    v27 = (unsigned int)v23;
    v69 = &v49;
    v50 = v24;
    v62 = v23;
    v64 = v23;
    v66 = v23;
    v68 = v23;
    v70 = v23;
    TlgWrite(v26, &unk_18003F9B6, v22, (LPCGUID)v23, 7u, &pData);
    LODWORD(v22) = dword_18004C030;
    v25 = 0x400000000001LL;
  }
  else
  {
    v27 = v23;
  }
  v28 = (const struct _TlgProvider_t *)&v56;
  v29 = v27;
  do
  {
    v30 = *(_DWORD *)v28;
    if ( *(_DWORD *)v28 > 0xFFu )
      v30 = 255;
    *(_DWORD *)v28 = v30;
    v28 = (const struct _TlgProvider_t *)((char *)v28 + v27);
    --v29;
  }
  while ( v29 );
  v31 = HIDWORD(v57) | ((HIDWORD(v56) | (((unsigned int)v57 | ((_DWORD)v56 << 8)) << 8)) << 8);
  if ( (unsigned int)v22 > (unsigned int)v27 && TlgKeywordOn(v28, v25) )
  {
    LODWORD(v49) = v24;
    v61 = &v49;
    v63 = &v47;
    v65 = &v48;
    v62 = 4LL;
    v47 = v5;
    v64 = 4LL;
    v48 = v31;
    v66 = 4LL;
    TlgWrite(v32, &unk_18003F80B, v33, v34, 5u, &pData);
  }
  if ( RmpSystemQueryCompressionProcessPrivateWorkingSet(&v49) < 0 )
  {
    v35 = 0xFFFFFFFFLL;
  }
  else
  {
    v35 = (unsigned __int64)v49 >> 20;
    if ( (unsigned __int64)v49 >> 20 > 0xFFFFFFFF )
      v35 = 0xFFFFFFFFLL;
  }
  LODWORD(v36) = dword_18004C030;
  if ( dword_18004C030 > (unsigned int)v27 && TlgKeywordOn((TraceLoggingHProvider)v35, 0x400000000001uLL) )
  {
    v39 = v55 >> 20;
    v62 = 4LL;
    v64 = 4LL;
    if ( v55 >> 20 > (unsigned __int64)v38 )
      LODWORD(v39) = (_DWORD)v38;
    v48 = v4;
    LODWORD(v49) = v39;
    v61 = &v49;
    v47 = HIDWORD(v74);
    v63 = &v47;
    v65 = &v48;
    v67 = (unsigned int *)&v51;
    v69 = (struct _RM_SERVICE_GLOBALS **)&v50;
    v66 = 4LL;
    v51 = (int)v37;
    v68 = 4LL;
    v50 = v31;
    v70 = 4LL;
    TlgWrite(v37, &unk_18003F878, v36, v38, 7u, &pData);
    LODWORD(v36) = dword_18004C030;
  }
  v40 = (const struct _TlgProvider_t *)*((unsigned int *)v2 + 81);
  if ( (_DWORD)v40 )
  {
    if ( (unsigned int)v36 > (unsigned int)v27 )
    {
      if ( TlgKeywordOn(v40, 0x400000000001uLL) )
      {
        v70 = 4LL;
        v62 = 8LL;
        v61 = (struct _RM_SERVICE_GLOBALS **)((char *)v2 + 288);
        v63 = (unsigned int *)((char *)v2 + 296);
        v65 = (unsigned int *)((char *)v2 + 304);
        v67 = (unsigned int *)((char *)v2 + 312);
        LODWORD(v49) = *((_DWORD *)v2 + 80);
        v69 = &v49;
        v71 = &v47;
        v64 = 8LL;
        v66 = 8LL;
        v68 = 8LL;
        v47 = (unsigned int)v44;
        v72 = 4LL;
        TlgWrite(v44, &unk_18003F91C, v45, v46, 8u, &pData);
      }
    }
    *((_QWORD *)v2 + 37) = -1LL;
    *((_QWORD *)v2 + 40) = 0LL;
    *((_QWORD *)v2 + 36) = 0LL;
    *((_QWORD *)v2 + 38) = 0LL;
    *((_QWORD *)v2 + 39) = 0LL;
  }
}
