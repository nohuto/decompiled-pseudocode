/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180034470
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpUtilRemoveEntryListAndClear @ 0x1800033D8 (RmpUtilRemoveEntryListAndClear.c)
 *     RmpSystemMemoryMetricsQuery @ 0x180015250 (RmpSystemMemoryMetricsQuery.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     RmpActivityHostDecommitOfferedMemory @ 0x18002EE78 (RmpActivityHostDecommitOfferedMemory.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  _QWORD **v7; // r14
  int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  int v13; // edx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+30h] [rbp-89h] BYREF
  int v21; // [rsp+38h] [rbp-81h] BYREF
  __int64 v22; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+48h] [rbp-71h] BYREF
  __int64 v24; // [rsp+50h] [rbp-69h] BYREF
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  __int64 v26; // [rsp+60h] [rbp-59h]
  __int64 v27; // [rsp+68h] [rbp-51h]
  EVENT_DATA_DESCRIPTOR v28; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 *v29; // [rsp+90h] [rbp-29h]
  int v30; // [rsp+98h] [rbp-21h]
  int v31; // [rsp+9Ch] [rbp-1Dh]
  int *v32; // [rsp+A0h] [rbp-19h]
  __int64 v33; // [rsp+A8h] [rbp-11h]
  __int64 *v34; // [rsp+B0h] [rbp-9h]
  int v35; // [rsp+B8h] [rbp-1h]
  int v36; // [rsp+BCh] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp+7h] BYREF

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 0x11uLL) )
    TlgWrite(v4, &unk_18004217F, v5, v6, 2u, &pData);
  RtlQueryUnbiasedInterruptTime(&v23);
  v20 = 0LL;
  v7 = (_QWORD **)(a2 + 1);
  v8 = 0;
  while ( *v7 != v7 )
  {
    v9 = (__int64)(*v7 - 23);
    v10 = (__int64)(*v7 - 107);
    RmpUtilRemoveEntryListAndClear(*v7);
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( *(int *)(v10 + 20) >= 0 && (*(_BYTE *)(*(_QWORD *)(v10 + 40) + 3340LL) & 2) == 0 )
    {
      if ( (*(_BYTE *)(v10 + 820) & 0x10) != 0 )
        *(_DWORD *)(v9 + 144) |= 0x20u;
      v25 = -1LL;
      v27 = 0LL;
      v26 = 0LL;
      LODWORD(v27) = (*(unsigned __int8 *)(v10 + 820) >> 4) & 1 | 2;
      RtlLeaveCriticalSection(&RmpGlobalLock);
      if ( (int)RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)v10, &v25) >= 0 )
      {
        v20 += v26;
        ++v8;
        RmpSystemMemoryMetricsQuery(&v28.Ptr);
        *(_QWORD *)(v9 + 112) = v33;
      }
      RtlEnterCriticalSection(&RmpGlobalLock);
      v11 = *(_DWORD *)(v9 + 144);
      if ( (v11 & 0x20) != 0 )
      {
        *(_DWORD *)(v9 + 144) = v11 & 0xFFFFFFDF;
        RmpActivityHostCheckQueueWork(v10);
      }
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease((volatile signed __int32 *)v10);
  }
  RtlQueryUnbiasedInterruptTime(&v22);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v12, 0x19uLL) )
  {
    v31 = 0;
    v29 = &v20;
    v32 = &v21;
    v36 = 0;
    v24 = v22 - v23;
    v34 = &v24;
    v30 = v13 - 17;
    v21 = v8;
    v33 = 4LL;
    v35 = v13 - 17;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v13 - 17), &unk_1800421D4, v14, v15, 5u, &v28);
  }
  RtlEnterCriticalSection(&RmpGlobalLock);
  v16 = v20;
  a2[7] += v20;
  v17 = a2[8];
  v18 = v22;
  a2[4] = v22;
  if ( v16 < v17 )
    v17 = v16;
  a2[8] = v17;
  v19 = a2[9];
  if ( v16 > v19 )
    v19 = v16;
  *((_DWORD *)a2 + 22) += v8;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v19;
  a2[10] += v18 - v23;
  RtlLeaveCriticalSection(&RmpGlobalLock);
}
