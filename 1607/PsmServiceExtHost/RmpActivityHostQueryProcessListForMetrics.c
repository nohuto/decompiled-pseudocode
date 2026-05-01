/*
 * XREFs of RmpActivityHostQueryProcessListForMetrics @ 0x1800194D4
 * Callers:
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001938C (RmpSystemQueryMemUtilMetricsForHosts.c)
 * Callees:
 *     ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x18000B3F0 (-QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 *     RmpGrowArray @ 0x18002A140 (RmpGrowArray.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  PVOID ProcessHeap; // rcx
  unsigned __int64 *Heap; // rdi
  __int64 v8; // rdx
  _DWORD *v9; // rbx
  const GUID *v10; // r8
  unsigned int v11; // r14d
  unsigned int i; // r12d
  __int64 v13; // rsi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  ModernResourceEnforcer *v16; // rcx
  __int64 (__fastcall *v17)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // rax
  int v18; // eax
  const struct _TlgProvider_t *v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // eax
  __int64 result; // rax
  unsigned __int64 *v24; // rax
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r9
  unsigned int v27; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-45h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-41h]
  unsigned int v30; // [rsp+3Ch] [rbp-3Dh] BYREF
  _DWORD *v31; // [rsp+40h] [rbp-39h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-31h]
  unsigned int *v33; // [rsp+50h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-21h] BYREF
  unsigned int *v35; // [rsp+78h] [rbp-1h]
  int v36; // [rsp+80h] [rbp+7h]
  int v37; // [rsp+84h] [rbp+Bh]

  v31 = 0LL;
  v32 = a3;
  v33 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v29 = 1;
  Heap = (unsigned __int64 *)RtlAllocateHeap(ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v30 = a2;
  v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
  if ( v9 )
  {
    v11 = 0;
    for ( i = 0; i < a2; a1 += 64LL )
    {
      v13 = *(_QWORD *)(a1 + 48);
      v14 = *(_DWORD *)(v13 + 48);
      if ( v14 )
      {
        if ( v14 != 1 )
        {
          v22 = -1073741811;
          goto LABEL_15;
        }
        *Heap = *(unsigned int *)(v13 + 56);
        v28 = 1;
      }
      else
      {
        v15 = v29;
        while ( 1 )
        {
          v28 = v15;
          v16 = *(ModernResourceEnforcer **)(*(_QWORD *)(v13 + 40) + 72LL);
          v17 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(*(_QWORD *)v16 + 72LL);
          v18 = v17 == ModernResourceEnforcer::QueryProcessList
              ? ModernResourceEnforcer::QueryProcessList(v16, (struct _RM_ACTIVITY_HOST *)v13, Heap, &v28)
              : v17(v16, (struct _RM_ACTIVITY_HOST *)v13, Heap, &v28);
          v27 = v18;
          if ( v18 >= 0 )
            break;
          if ( v18 != -2147483643 )
          {
            if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v19, 1uLL) )
            {
              v37 = 0;
              v35 = &v27;
              v36 = 4;
              TlgWrite(v25, &unk_180040B2B, v10, v26, 3u, &pData);
            }
            goto LABEL_13;
          }
          v24 = (unsigned __int64 *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v28);
          if ( !v24 )
            goto LABEL_19;
          v31 = 0LL;
          Heap = v24;
          v15 = v28;
          v29 = v28;
        }
        v14 = v28;
        if ( !v28 )
          goto LABEL_13;
      }
      if ( v30 - v11 < v14 )
      {
        v27 = RmpGrowArray((_DWORD)v9, v8, (_DWORD)v10, v14 + v11, (__int64)&v31, (__int64)&v30);
        if ( v27 )
          goto LABEL_16;
        v9 = v31;
        v31 = 0LL;
        v14 = v28;
      }
      v10 = 0LL;
      if ( v14 )
      {
        do
        {
          v20 = Heap[(_QWORD)v10];
          v10 = (const GUID *)(unsigned int)((_DWORD)v10 + 1);
          v21 = v11++;
          v8 = 2 * v21;
          v9[2 * v8 + 2] = v20;
          *(_QWORD *)&v9[2 * v8] = a1;
        }
        while ( (unsigned int)v10 < v28 );
      }
LABEL_13:
      ++i;
    }
    *v32 = v9;
    v9 = 0LL;
    *v33 = v11;
    v22 = 0;
  }
  else
  {
LABEL_19:
    v22 = -1073741801;
  }
LABEL_15:
  v27 = v22;
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  result = v27;
  if ( v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v27;
  }
  return result;
}
