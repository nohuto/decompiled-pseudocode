/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x14049D7EC
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpDequeueBuffer @ 0x14009D374 (EtwpDequeueBuffer.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v12; // rbx

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = EtwpDequeueBuffer((__int64)(a1 + 16));
    if ( !v4 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = EtwpDequeueBuffer((__int64)(a1 + 22));
    if ( !v5 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v5, 0);
  }
  v6 = 0;
  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1);
  if ( UsedProcessorCount )
  {
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v8 = (volatile __int64 *)(a1 + 36);
      else
        v8 = (volatile __int64 *)(*(_QWORD *)(KeGetPrcb(v6) + 24536) + 8 * (v1 + 8));
      v9 = _InterlockedExchange64(v8, 0LL);
      v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), -(v9 & 0xF));
        do
        {
          v12 = *(_QWORD *)(v10 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
          ++i;
          ExFreePoolWithTag((PVOID)v10, 0);
          v10 = v12;
        }
        while ( v12 );
      }
      ++v6;
    }
    while ( v6 < UsedProcessorCount );
  }
  _InterlockedExchangeAdd(&dword_1402D84D4[a1[79] & 1], -(i * a1[1]));
  return 0LL;
}
