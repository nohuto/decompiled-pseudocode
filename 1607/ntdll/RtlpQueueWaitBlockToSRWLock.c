/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x1800630B4
 * Callers:
 *     RtlpWakeConditionVariable @ 0x180062F54 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlBackoff @ 0x180063160 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180076164 (RtlpOptimizeSRWLockList.c)
 */

char __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // rax
  bool v4; // di
  volatile signed __int64 *v5; // r11
  __int64 v6; // r10
  char v7; // bl
  signed __int64 v8; // rdx
  int v9; // ecx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a2;
  v4 = (*(_DWORD *)(a1 + 36) & 1) == 0;
  v11 = 0;
  v5 = (volatile signed __int64 *)a2;
  v6 = a1;
  while ( (v3 & 1) != 0 && (!v4 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(v6 + 16) = v2;
    v7 = v2;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v6 + 32) = -1;
      *(_QWORD *)(v6 + 8) = v2;
      v8 = v6 | v3 & 8 | 7;
      *(_QWORD *)v6 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v3 & 4) == 0 )
        v7 = 1;
    }
    else
    {
      *(_QWORD *)(v6 + 8) = v6;
      *(_DWORD *)(v6 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) > 1 )
        v8 = v6 | 0xB;
      else
        v8 = v6 | 3;
      v9 = v3 >> 4;
      if ( !v9 )
        v9 = -2;
      *(_DWORD *)(v6 + 32) = v9;
    }
    if ( v3 == _InterlockedCompareExchange64(v5, v8, v3) )
    {
      if ( v7 )
        RtlpOptimizeSRWLockList(v5);
      LOBYTE(v2) = 1;
      return v2;
    }
    RtlBackoff(&v11);
    _m_prefetchw((const void *)v5);
    v3 = *v5;
  }
  return v2;
}
