/*
 * XREFs of RtlQueryTagHeap @ 0x1800E9250
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x1800FE410 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x1800FA938 (RtlDebugQueryTagHeap.c)
 */

void *__fastcall RtlQueryTagHeap(__int64 a1, int a2, unsigned __int16 a3, char a4, __int64 a5)
{
  int v8; // ecx
  void *TagHeap; // rdi
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp-28h]

  v14 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return 0LL;
  v8 = *(_DWORD *)(a1 + 116);
  if ( (v8 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v10 = v8 | a2;
  if ( ((v8 | a2) & 0x61000000) != 0 && ((v8 | a2) & 0x10000000) == 0 )
  {
    TagHeap = (void *)RtlDebugQueryTagHeap(a1, v10, a3, a4, a5);
  }
  else
  {
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      v14 = 1;
    }
    if ( a3 < *(_WORD *)(a1 + 224) && (v11 = *(_QWORD *)(a1 + 232)) != 0 )
    {
      if ( a5 )
      {
        *(_DWORD *)a5 = *(_DWORD *)(v11 + 72LL * a3);
        *(_DWORD *)(a5 + 4) = *(_DWORD *)(v11 + 72LL * a3 + 4);
        *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v11 + 72LL * a3 + 8);
      }
      if ( a4 )
      {
        *(_DWORD *)(v11 + 72LL * a3) = 0;
        *(_DWORD *)(v11 + 72LL * a3 + 4) = 0;
        *(_QWORD *)(v11 + 72LL * a3 + 8) = 0LL;
      }
      TagHeap = (void *)(v11 + 20 + 72LL * a3);
    }
    else if ( (a3 & 0x8000u) != 0 && (a3 ^ 0x8000u) < 0x81 )
    {
      v12 = *(_QWORD *)(a1 + 328);
      if ( v12 )
      {
        v13 = v12 + 16LL * (a3 ^ 0x8000u);
        if ( a5 )
        {
          *(_DWORD *)a5 = *(_DWORD *)v13;
          *(_DWORD *)(a5 + 4) = *(_DWORD *)(v13 + 4);
          *(_QWORD *)(a5 + 8) = 16LL * *(_QWORD *)(v13 + 8);
        }
        if ( a4 )
        {
          *(_DWORD *)v13 = 0;
          *(_DWORD *)(v13 + 4) = 0;
          *(_QWORD *)(v13 + 8) = 0LL;
        }
        TagHeap = &unk_180113454;
      }
    }
  }
  if ( v14 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return TagHeap;
}
