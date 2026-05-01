/*
 * XREFs of ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180005B08
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180005A50 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     RmpActivityHostQueryCommitDebt @ 0x180005A94 (RmpActivityHostQueryCommitDebt.c)
 *     RmpActivityHostQueryCategory @ 0x180005ECC (RmpActivityHostQueryCategory.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180006E30 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 *     RmpQuerySystemProcessPrivateWorkingSet @ 0x18001F4FC (RmpQuerySystemProcessPrivateWorkingSet.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

void __fastcall RmpTelemetryLogGlobalState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  unsigned int v3; // r15d
  unsigned int v4; // r14d
  unsigned int v5; // esi
  __int64 *v6; // rbx
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
  const struct _TlgProvider_t *v19; // rcx
  __int64 v20; // r8
  const GUID *v21; // r9
  unsigned __int64 v22; // rdi
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const struct _TlgProvider_t *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // ebx
  const struct _TlgProvider_t *v29; // rcx
  const GUID *v30; // r9
  __int64 v31; // rcx
  const struct _TlgProvider_t *v32; // rcx
  const GUID *v33; // r8
  const GUID *v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned int v39; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-C0h] BYREF
  char v44[16]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v45; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v46; // [rsp+78h] [rbp-90h]
  unsigned __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h]
  __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  unsigned int *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  unsigned int *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  unsigned int *v60; // [rsp+108h] [rbp+0h]
  __int64 v61; // [rsp+110h] [rbp+8h]
  unsigned int *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]

  v1 = *((_QWORD *)a1 + 194);
  v39 = *((_DWORD *)a1 + 6);
  RmpPolicyPopulateActivityHostMetricsTable(2LL, &v39, v1, 5LL, RmpPolicyFilterActivityHostWithFlags, 2LL);
  v2 = 0;
  v3 = 0;
  v49 = 0LL;
  v50 = 0LL;
  v4 = 0;
  v47 = 0LL;
  v5 = 0;
  v48 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( v39 )
  {
    v6 = (__int64 *)(v1 + 40);
    v7 = v39;
    do
    {
      Category = RmpActivityHostQueryCategory(*v6);
      v9 = (unsigned __int64)*(v6 - 5) >> 20;
      v10 = Category;
      ++*((_DWORD *)&v49 + Category);
      v11 = *((_DWORD *)&v47 + Category);
      if ( v9 > 0xFFFFFFFF )
        LODWORD(v9) = -1;
      v12 = v9 + v11;
      v13 = -1;
      v14 = v12 < v11;
      v15 = *((_DWORD *)&v51 + v10);
      if ( !v14 )
        v13 = v12;
      *((_DWORD *)&v47 + v10) = v13;
      v16 = (unsigned __int64)*(v6 - 2) >> 20;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v17 = v16 + v15;
      v18 = -1;
      if ( v17 >= v15 )
        v18 = v17;
      *((_DWORD *)&v51 + v10) = v18;
      if ( (_DWORD)v10 == 1 && (int)RmpActivityHostQueryCommitDebt(*v6, &v43) >= 0 )
      {
        v36 = v43 >> 20;
        if ( v43 >> 20 > 0xFFFFFFFF )
          LODWORD(v36) = -1;
        v37 = v36 + v5;
        v38 = -1;
        if ( v37 >= v5 )
          v38 = v37;
        v5 = v38;
      }
      v6 += 7;
      --v7;
    }
    while ( v7 );
    v4 = v48;
    v2 = v47;
    v3 = v52;
  }
  RmpSystemMemoryMetricsQuery(v44);
  v20 = 0x400000000001LL;
  LODWORD(v21) = dword_180071060;
  v22 = v45 >> 20;
  if ( v45 >> 20 > 0xFFFFFFFF )
    LODWORD(v22) = -1;
  if ( (unsigned int)dword_180071060 > 4 )
  {
    if ( TlgKeywordOn(v19, 0x400000000001uLL) )
    {
      v39 = v22;
      v54 = &v39;
      v42 = HIDWORD(v48);
      v56 = (unsigned int *)&v42;
      v40 = HIDWORD(v47);
      v58 = &v40;
      v60 = &v41;
      v62 = (unsigned int *)&v47;
      v55 = 4LL;
      v57 = 4LL;
      v59 = 4LL;
      v41 = v4;
      v61 = 4LL;
      LODWORD(v47) = v2;
      v63 = 4LL;
      TlgWrite(v23, &unk_18006328F, v24, v21, 7u, &pData);
      LODWORD(v21) = dword_180071060;
    }
    v20 = 0x400000000001LL;
  }
  v25 = (const struct _TlgProvider_t *)&v49;
  v26 = 4LL;
  do
  {
    v27 = *(_DWORD *)v25;
    if ( *(_DWORD *)v25 > 0xFFu )
      v27 = 255;
    *(_DWORD *)v25 = v27;
    v25 = (const struct _TlgProvider_t *)((char *)v25 + 4);
    --v26;
  }
  while ( v26 );
  v28 = HIDWORD(v50) | ((HIDWORD(v49) | (((unsigned int)v50 | ((_DWORD)v49 << 8)) << 8)) << 8);
  if ( (unsigned int)v21 > 4 && TlgKeywordOn(v25, 0x400000000001uLL) )
  {
    LODWORD(v47) = v22;
    v54 = (unsigned int *)&v47;
    v56 = &v41;
    v58 = &v40;
    v55 = 4LL;
    v41 = v5;
    v57 = 4LL;
    v40 = v28;
    v59 = 4LL;
    TlgWrite(v29, &unk_180063222, (LPCGUID)v20, v30, 5u, &pData);
  }
  if ( (unsigned int)RmpQuerySystemProcessPrivateWorkingSet(&v47, v26, v20) )
  {
    v31 = 0xFFFFFFFFLL;
  }
  else
  {
    v31 = v47 >> 20;
    if ( v47 >> 20 > 0xFFFFFFFF )
      v31 = 0xFFFFFFFFLL;
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)v31, 0x400000000001uLL) )
  {
    v35 = v46 >> 20;
    v55 = 4LL;
    v57 = 4LL;
    if ( v46 >> 20 > (unsigned __int64)v34 )
      LODWORD(v35) = (_DWORD)v34;
    v40 = v3;
    LODWORD(v47) = v35;
    v54 = (unsigned int *)&v47;
    v41 = HIDWORD(v52);
    v56 = &v41;
    v58 = &v40;
    v60 = (unsigned int *)&v42;
    v62 = &v39;
    v59 = 4LL;
    v42 = (int)v32;
    v61 = 4LL;
    v39 = v28;
    v63 = 4LL;
    TlgWrite(v32, &unk_18006317E, v33, v34, 7u, &pData);
  }
}
