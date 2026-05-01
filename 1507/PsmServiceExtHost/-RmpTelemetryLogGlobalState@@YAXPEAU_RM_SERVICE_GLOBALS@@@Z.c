/*
 * XREFs of ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B4C
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180005570 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     RmpSystemMemoryMetricsQuery @ 0x18000561C (RmpSystemMemoryMetricsQuery.c)
 *     RmpActivityHostQueryCommitDebt @ 0x1800059EC (RmpActivityHostQueryCommitDebt.c)
 *     RmpActivityHostQueryCategory @ 0x180005F24 (RmpActivityHostQueryCategory.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     MemUtilQueryProcessMetrics @ 0x180006F30 (MemUtilQueryProcessMetrics.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

void __fastcall RmpTelemetryLogGlobalState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  unsigned int v5; // esi
  struct _RM_ACTIVITY_HOST **v6; // rbx
  __int64 v7; // rdi
  int Category; // eax
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  bool v14; // cf
  unsigned int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // eax
  const struct _TlgProvider_t *v22; // rcx
  const GUID *v23; // r9
  unsigned __int64 v24; // rdi
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const struct _TlgProvider_t *v27; // rcx
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // ebx
  const struct _TlgProvider_t *v31; // rcx
  const GUID *v32; // r8
  const GUID *v33; // r9
  __int64 v34; // rcx
  const struct _TlgProvider_t *v35; // rcx
  const GUID *v36; // r8
  const GUID *v37; // r9
  unsigned __int64 v38; // rax
  unsigned int v39; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v44; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v46; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v47; // [rsp+80h] [rbp-88h]
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  unsigned int *v55; // [rsp+D8h] [rbp-30h]
  __int64 v56; // [rsp+E0h] [rbp-28h]
  unsigned int *v57; // [rsp+E8h] [rbp-20h]
  __int64 v58; // [rsp+F0h] [rbp-18h]
  unsigned int *v59; // [rsp+F8h] [rbp-10h]
  __int64 v60; // [rsp+100h] [rbp-8h]
  unsigned int *v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+110h] [rbp+8h]
  __int64 v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]

  v1 = *((_QWORD *)a1 + 204);
  v39 = *((_DWORD *)a1 + 6);
  RmpPolicyPopulateActivityHostMetricsTable(2LL, &v39, v1, 5LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v2 = 0;
  v3 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v4 = 0;
  v50 = 0LL;
  v5 = 0;
  v51 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  if ( v39 )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)(v1 + 32);
    v7 = v39;
    do
    {
      Category = RmpActivityHostQueryCategory(*v6);
      v9 = (unsigned __int64)*(v6 - 4) >> 20;
      v10 = Category;
      ++*((_DWORD *)&v48 + Category);
      v11 = *((_DWORD *)&v50 + Category);
      if ( v9 > 0xFFFFFFFF )
        LODWORD(v9) = -1;
      v12 = v9 + v11;
      v13 = -1;
      v14 = v12 < v11;
      v15 = *((_DWORD *)&v63 + v10);
      if ( !v14 )
        v13 = v12;
      *((_DWORD *)&v50 + v10) = v13;
      v16 = (unsigned __int64)*(v6 - 2) >> 20;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v17 = v16 + v15;
      v18 = -1;
      if ( v17 >= v15 )
        v18 = v17;
      *((_DWORD *)&v63 + v10) = v18;
      if ( (_DWORD)v10 == 1 && (int)RmpActivityHostQueryCommitDebt(*v6, &v44) >= 0 )
      {
        v19 = v44 >> 20;
        if ( v44 >> 20 > 0xFFFFFFFF )
          LODWORD(v19) = -1;
        v20 = v19 + v5;
        v21 = -1;
        if ( v20 >= v5 )
          v21 = v20;
        v5 = v21;
      }
      v6 += 6;
      --v7;
    }
    while ( v7 );
    v4 = v51;
    v2 = v50;
    v3 = v64;
  }
  RmpSystemMemoryMetricsQuery(&v45);
  LODWORD(v23) = dword_1800690A0;
  v24 = v46 >> 20;
  if ( v46 >> 20 > 0xFFFFFFFF )
    LODWORD(v24) = -1;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v22, 0x400000000001uLL) )
  {
    v39 = v24;
    v53 = &v39;
    LODWORD(v43) = HIDWORD(v51);
    v55 = (unsigned int *)&v43;
    v40 = HIDWORD(v50);
    v57 = &v40;
    v59 = &v41;
    v61 = (unsigned int *)&v42;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v41 = v4;
    v60 = 4LL;
    v42 = v2;
    v62 = 4LL;
    TlgWrite(v25, &unk_18005B764, v26, v23, 7u, &pData);
    LODWORD(v23) = dword_1800690A0;
  }
  v27 = (const struct _TlgProvider_t *)&v48;
  v28 = 4LL;
  do
  {
    v29 = *(_DWORD *)v27;
    if ( *(_DWORD *)v27 > 0xFFu )
      v29 = 255;
    *(_DWORD *)v27 = v29;
    v27 = (const struct _TlgProvider_t *)((char *)v27 + 4);
    --v28;
  }
  while ( v28 );
  v30 = HIDWORD(v49) | ((HIDWORD(v48) | (((unsigned int)v49 | ((_DWORD)v48 << 8)) << 8)) << 8);
  if ( (unsigned int)v23 > 4 && TlgKeywordOn(v27, 0x400000000001uLL) )
  {
    v42 = v24;
    v53 = (unsigned int *)&v42;
    v55 = &v41;
    v57 = &v40;
    v54 = 4LL;
    v41 = v5;
    v56 = 4LL;
    v40 = v30;
    v58 = 4LL;
    TlgWrite(v31, &unk_18005B6F7, v32, v33, 5u, &pData);
  }
  memset_0(&pData, 0, 0x40uLL);
  LODWORD(pData.Ptr) = 4;
  if ( (unsigned int)MemUtilQueryProcessMetrics(&pData, 1LL, 1LL) )
  {
    v34 = 0xFFFFFFFFLL;
  }
  else
  {
    v34 = *(_QWORD *)&pData.Size >> 20;
    if ( *(_QWORD *)&pData.Size >> 20 > 0xFFFFFFFFuLL )
      v34 = 0xFFFFFFFFLL;
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)v34, 0x400000000001uLL) )
  {
    v38 = v47 >> 20;
    v54 = 4LL;
    v56 = 4LL;
    if ( v47 >> 20 > (unsigned __int64)v37 )
      LODWORD(v38) = (_DWORD)v37;
    v40 = v3;
    v42 = v38;
    v53 = (unsigned int *)&v42;
    v41 = HIDWORD(v64);
    v55 = &v41;
    v57 = &v40;
    v59 = (unsigned int *)&v43;
    v61 = &v39;
    v58 = 4LL;
    LODWORD(v43) = (_DWORD)v35;
    v60 = 4LL;
    v39 = v30;
    v62 = 4LL;
    TlgWrite(v35, &unk_18005B814, v36, v37, 7u, &pData);
  }
}
