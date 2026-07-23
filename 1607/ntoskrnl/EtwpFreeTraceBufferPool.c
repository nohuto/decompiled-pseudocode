/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14049413C
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     EtwpDequeueBuffer @ 0x1400EB5C4 (EtwpDequeueBuffer.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int i; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  ULONG v6; // ebp
  ULONG UsedProcessorCount; // r14d
  volatile __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rbx
  __int64 *v16; // rcx
  __int64 v17; // rax

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
    if ( !v4 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
    if ( !v5 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 57);
    ExFreePoolWithTag(v5, 0);
  }
  v6 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( UsedProcessorCount )
  {
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v8 = (volatile __int64 *)(a1 + 32);
      else
        v8 = (volatile __int64 *)(*(_QWORD *)(KeGetPrcb(v6) + 24536) + 8 * (v1 + 8));
      v9 = _InterlockedExchange64(v8, 0LL);
      v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), -(v9 & 0xF));
        do
        {
          v11 = *(_QWORD *)(v10 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
          ++i;
          ExFreePoolWithTag((PVOID)v10, 0);
          v10 = v11;
        }
        while ( v11 );
      }
      ++v6;
    }
    while ( v6 < UsedProcessorCount );
  }
  if ( !*((_QWORD *)a1 + 120) )
    goto LABEL_17;
  _InterlockedDecrement((volatile signed __int32 *)a1 + 58);
  v12 = (__int64 *)*((_QWORD *)a1 + 120);
  ++i;
  while ( 1 )
  {
    ExFreePoolWithTag(v12, 0);
LABEL_17:
    v13 = (__int64 *)*((_QWORD *)a1 + 124);
    if ( !v13 )
      break;
    v14 = *v13;
    v12 = v13 - 4;
    *((_QWORD *)a1 + 124) = v14;
  }
  v15 = (__int64 **)(a1 + 24);
  while ( *v15 != (__int64 *)v15 )
  {
    v16 = *v15;
    v17 = **v15;
    if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
      __fastfail(3u);
    *v15 = (__int64 *)v17;
    *(_QWORD *)(v17 + 8) = v15;
    ExFreePoolWithTag(v16, 0);
  }
  _InterlockedExchangeAdd(&dword_1402FD814[a1[75] & 1], -(i * a1[1]));
  return 0LL;
}
