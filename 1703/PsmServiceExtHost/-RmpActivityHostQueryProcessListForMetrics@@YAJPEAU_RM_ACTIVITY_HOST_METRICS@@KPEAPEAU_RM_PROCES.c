/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x1800033D0
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x18000326C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x18002A974 (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  _QWORD *Heap; // rsi
  unsigned int v7; // edi
  unsigned int i; // r12d
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  __int64 v14; // r9
  int v15; // ecx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v18; // rax
  __int64 result; // rax
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  unsigned int v23; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+44h] [rbp-55h] BYREF
  PVOID P; // [rsp+48h] [rbp-51h] BYREF
  int v26; // [rsp+50h] [rbp-49h]
  unsigned int v27; // [rsp+54h] [rbp-45h] BYREF
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR **v28; // [rsp+58h] [rbp-41h]
  unsigned int *v29; // [rsp+60h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-31h] BYREF
  unsigned int *v31; // [rsp+88h] [rbp-11h]
  int v32; // [rsp+90h] [rbp-9h]
  int v33; // [rsp+94h] [rbp-5h]

  v28 = a3;
  v29 = a4;
  v26 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v27 = a2;
  P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
  if ( P )
  {
    v7 = 0;
    for ( i = 0; i < a2; a1 = (struct _RM_ACTIVITY_HOST_METRICS *)((char *)a1 + 64) )
    {
      v9 = *((_QWORD *)a1 + 6);
      v10 = *(_DWORD *)(v9 + 56);
      if ( v10 )
      {
        if ( v10 != 1 )
        {
          v23 = -1073741811;
          goto LABEL_13;
        }
        *Heap = *(unsigned int *)(v9 + 64);
        v24 = 1;
      }
      else
      {
        v11 = v26;
        while ( 1 )
        {
          v24 = v11;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL) + 152LL))(
                  v9 + 528,
                  *(unsigned int *)(v9 + 596),
                  v9 + 64,
                  *(unsigned int *)(v9 + 600),
                  *(_QWORD *)(v9 + 24),
                  Heap,
                  &v24);
          v23 = v12;
          if ( v12 >= 0 )
            break;
          if ( v12 != -2147483643 )
          {
            if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v13, 1uLL) )
            {
              v33 = 0;
              v31 = &v23;
              v32 = 4;
              TlgWrite(v20, &unk_18004191D, v21, v22, 3u, &pData);
            }
            goto LABEL_11;
          }
          Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v24);
          if ( !Heap )
          {
            result = 3221225495LL;
            v23 = -1073741801;
            goto LABEL_14;
          }
          v11 = v24;
          v26 = v24;
        }
        v10 = v24;
        if ( !v24 )
          goto LABEL_11;
      }
      if ( v27 - v7 < v10 )
      {
        v23 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&P, &v27, v10 + v7);
        if ( v23 )
          goto LABEL_13;
        v10 = v24;
      }
      v14 = 0LL;
      if ( v10 )
      {
        do
        {
          v15 = Heap[v14];
          v14 = (unsigned int)(v14 + 1);
          v16 = P;
          v17 = v7++;
          v17 *= 2LL;
          *((_DWORD *)P + 2 * v17 + 2) = v15;
          v16[v17] = a1;
        }
        while ( (unsigned int)v14 < v24 );
      }
LABEL_11:
      ++i;
    }
    v18 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
    P = 0LL;
    v23 = 0;
    *v28 = v18;
    *v29 = v7;
  }
  else
  {
    v23 = -1073741801;
  }
LABEL_13:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  result = v23;
LABEL_14:
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v23;
  }
  return result;
}
