/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800346C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180012D30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18002E330 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // r15d
  __int64 **v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 **v13; // rcx
  int v14; // eax
  const struct _TlgProvider_t *v15; // rcx
  int v16; // edx
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // [rsp+30h] [rbp-99h] BYREF
  int v24; // [rsp+38h] [rbp-91h] BYREF
  __int64 v25; // [rsp+40h] [rbp-89h] BYREF
  __int64 v26; // [rsp+48h] [rbp-81h] BYREF
  __int64 v27; // [rsp+50h] [rbp-79h] BYREF
  __int64 v28; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h]
  __int64 v30; // [rsp+68h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 *v32; // [rsp+90h] [rbp-39h]
  int v33; // [rsp+98h] [rbp-31h]
  int v34; // [rsp+9Ch] [rbp-2Dh]
  int *v35; // [rsp+A0h] [rbp-29h]
  int v36; // [rsp+A8h] [rbp-21h]
  int v37; // [rsp+ACh] [rbp-1Dh]
  __int64 *v38; // [rsp+B0h] [rbp-19h]
  int v39; // [rsp+B8h] [rbp-11h]
  int v40; // [rsp+BCh] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp+7h] BYREF

  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 0x11uLL) )
    TlgWrite(v4, &unk_1800432E1, v5, v6, 2u, &pData);
  RtlQueryUnbiasedInterruptTime(&v26);
  v23 = 0LL;
  v7 = 0;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = (__int64 **)(a2 + 1);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = (__int64)(*v8 - 23);
    v10 = *v8;
    v11 = **v8;
    v12 = (__int64)(*v8 - 107);
    v13 = (__int64 **)(*v8)[1];
    if ( *(__int64 **)(v11 + 8) != *v8 || *v13 != v10 )
      __fastfail(3u);
    *v13 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v13;
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( *(int *)(v12 + 20) < 0 || (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 1524LL) & 2) != 0 )
    {
      RtlLeaveCriticalSection(&RmpGlobalLock);
    }
    else
    {
      if ( (*(_BYTE *)(v12 + 820) & 0x10) != 0 )
        *(_DWORD *)(v9 + 144) |= 0x20u;
      v28 = -1LL;
      v30 = 0LL;
      v29 = 0LL;
      LODWORD(v30) = (*(_BYTE *)(v12 + 820) & 0x10 | 0x20u) >> 4;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)v12,
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v28) >= 0 )
      {
        v23 += v29;
        ++v7;
        RmpSystemMemoryMetricsQuery(*(struct _RM_PARTITION **)(v12 + 48), (struct _RM_SYSTEM_MEMORY_METRICS *)&v31);
        *(_QWORD *)(v9 + 112) = v38;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      v14 = *(_DWORD *)(v9 + 144);
      if ( (v14 & 0x20) != 0 )
      {
        *(_DWORD *)(v9 + 144) = v14 & 0xFFFFFFDF;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v12);
      }
    }
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v12);
  }
  RtlQueryUnbiasedInterruptTime(&v25);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v15, 0x19uLL) )
  {
    v34 = 0;
    v37 = 0;
    v32 = &v23;
    v35 = &v24;
    v40 = 0;
    v27 = v25 - v26;
    v38 = &v27;
    v33 = v16 - 17;
    v24 = v7;
    v36 = 4;
    v39 = v16 - 17;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v16 - 17), &unk_180043309, v17, v18, 5u, &v31);
  }
  v19 = v23;
  a2[7] += v23;
  v20 = a2[8];
  v21 = v25;
  a2[4] = v25;
  if ( v19 < v20 )
    v20 = v19;
  a2[8] = v20;
  v22 = a2[9];
  if ( v19 > v22 )
    v22 = v19;
  *((_DWORD *)a2 + 22) += v7;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v22;
  a2[10] += v21 - v26;
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
