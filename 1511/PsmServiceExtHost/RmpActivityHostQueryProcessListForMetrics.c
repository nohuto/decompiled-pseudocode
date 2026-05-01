/*
 * XREFs of RmpActivityHostQueryProcessListForMetrics @ 0x180006880
 * Callers:
 *     RmpSystemQueryMemUtilMetricsForHosts @ 0x18001C8E8 (RmpSystemQueryMemUtilMetricsForHosts.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     ?QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z @ 0x180016340 (-QueryProcessList@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_KPEAK@Z.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     RmpGrowArray @ 0x18003EE24 (RmpGrowArray.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(__int64 a1, unsigned int a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r15
  unsigned __int64 *Heap; // rdi
  void *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 (__fastcall *v12)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *); // r12
  int v13; // eax
  const struct _TlgProvider_t *v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  __int64 result; // rax
  unsigned __int64 *v20; // rax
  const struct _TlgProvider_t *v21; // rcx
  const GUID *v22; // r8
  const GUID *v23; // r9
  unsigned int v24; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-51h]
  int v27; // [rsp+3Ch] [rbp-4Dh]
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-41h]
  __int64 v30; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v31; // [rsp+58h] [rbp-31h]
  unsigned int *v32; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v34; // [rsp+88h] [rbp-1h]
  int v35; // [rsp+90h] [rbp+7h]
  int v36; // [rsp+94h] [rbp+Bh]

  v30 = 0LL;
  v4 = 1;
  v5 = a1;
  v29 = a1;
  v32 = a4;
  v31 = a3;
  v26 = 1;
  Heap = (unsigned __int64 *)RmpAllocateHeap(8uLL);
  if ( !Heap )
    return 3221225495LL;
  LODWORD(v28) = a2;
  v8 = (void *)RmpAllocateHeap(16LL * a2);
  if ( v8 )
  {
    v9 = 0;
    v27 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v5 + 40);
        v11 = *(_DWORD *)(v10 + 40);
        if ( v11 )
        {
          if ( v11 != 1 )
          {
            v18 = -1073741811;
            goto LABEL_15;
          }
          *Heap = *(unsigned int *)(v10 + 48);
          v25 = 1;
LABEL_10:
          if ( (unsigned int)v28 - v9 < v11 )
          {
            v24 = RmpGrowArray(v8, (__int64)&v30, (__int64)&v28);
            if ( v24 )
              goto LABEL_16;
            v8 = (void *)v30;
            v30 = 0LL;
            v11 = v25;
          }
          v15 = 0LL;
          if ( v11 )
          {
            do
            {
              v16 = Heap[v15];
              v15 = (unsigned int)(v15 + 1);
              v17 = v9++;
              v17 *= 2LL;
              *((_DWORD *)v8 + 2 * v17 + 2) = v16;
              *((_QWORD *)v8 + v17) = v5;
            }
            while ( (unsigned int)v15 < v25 );
          }
        }
        else
        {
          while ( 1 )
          {
            v25 = v4;
            v12 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, struct _RM_ACTIVITY_HOST *, unsigned __int64 *, unsigned int *))(**((_QWORD **)RmSvcGlobals + 10) + 72LL);
            v13 = v12 == ModernResourceEnforcer::QueryProcessList
                ? ModernResourceEnforcer::QueryProcessList(
                    *((ModernResourceEnforcer **)RmSvcGlobals + 10),
                    (struct _RM_ACTIVITY_HOST *)v10,
                    Heap,
                    &v25)
                : v12(*((ModernResourceEnforcer **)RmSvcGlobals + 10), (struct _RM_ACTIVITY_HOST *)v10, Heap, &v25);
            v24 = v13;
            if ( v13 >= 0 )
              break;
            if ( v13 != -2147483643 )
            {
              if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v14, 1uLL) )
              {
                v36 = 0;
                v34 = &v24;
                v35 = 4;
                TlgWrite(v21, &unk_180062FD0, v22, v23, 3u, &pData);
              }
              goto LABEL_19;
            }
            v20 = (unsigned __int64 *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v25);
            if ( !v20 )
              goto LABEL_21;
            v4 = v25;
            Heap = v20;
            v30 = 0LL;
            v26 = v25;
          }
          v11 = v25;
          if ( v25 )
          {
            v5 = v29;
            goto LABEL_10;
          }
LABEL_19:
          v5 = v29;
        }
        v5 += 56LL;
        v29 = v5;
        if ( ++v27 >= a2 )
          break;
        v4 = v26;
      }
    }
    *v31 = v8;
    v8 = 0LL;
    *v32 = v9;
    v18 = 0;
  }
  else
  {
LABEL_21:
    v18 = -1073741801;
  }
LABEL_15:
  v24 = v18;
LABEL_16:
  RmpFreeHeap(Heap);
  result = v24;
  if ( v8 )
  {
    RmpFreeHeap(v8);
    return v24;
  }
  return result;
}
