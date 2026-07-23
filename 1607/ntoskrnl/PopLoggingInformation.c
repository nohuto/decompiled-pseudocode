/*
 * XREFs of PopLoggingInformation @ 0x14052C594
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopLoggingInformation(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  int v6; // ebp
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *PoolWithTag; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r14
  size_t v12; // rbx

  v2 = PowerStateDisableReasonListHead;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  if ( (__int64 *)PowerStateDisableReasonListHead == &PowerStateDisableReasonListHead )
  {
LABEL_15:
    v7 += 16;
  }
  else
  {
    do
    {
      ++v6;
      v8 = v7 + 16;
      if ( v7 + 16 < v7 )
        return (unsigned int)-1073741675;
      v7 = v8 + *(_DWORD *)(v2 + 28);
      if ( v7 < v8 )
        return (unsigned int)-1073741675;
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &PowerStateDisableReasonListHead );
    if ( !v6 )
      goto LABEL_15;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x66756263u);
  if ( PoolWithTag )
  {
    *a2 = v7;
    v10 = PoolWithTag + 4;
    *a1 = PoolWithTag;
    *(_DWORD *)PoolWithTag = v7;
    if ( v6 )
    {
      v11 = PowerStateDisableReasonListHead;
      while ( (__int64 *)v11 != &PowerStateDisableReasonListHead && v6 )
      {
        v12 = (unsigned int)(*(_DWORD *)(v11 + 28) + 16);
        memmove(v10, (const void *)(v11 + 16), v12);
        v11 = *(_QWORD *)v11;
        v10 = (_QWORD *)((char *)v10 + v12);
        --v6;
      }
    }
    else
    {
      *v10 = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      *((_DWORD *)PoolWithTag + 3) = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
