/*
 * XREFs of VidSchiCreateNode @ 0x1C006B9A8
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C006B220 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v5; // r12
  unsigned __int16 v7; // r15
  int v8; // eax
  size_t v9; // rsi
  char *PoolWithTag; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebp
  char *v13; // rbx
  BOOL v14; // eax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _KEVENT *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rcx
  int v20; // ecx
  char *result; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v5 = a4;
  v7 = a2;
  v8 = 224 * *(_DWORD *)(a1 + 2420) + 2816;
  v9 = v8;
  if ( (unsigned __int64)v8 < 0xBE0 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v22);
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  v12 = 0;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v23 = WdLogNewEntry5_WdWarning(v11);
    WdLogEvent5_WdWarning(v23);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *(_DWORD *)v13 = 1685016150;
  *((_QWORD *)v13 + 3) = a1;
  *((_WORD *)v13 + 2) = v5;
  *((_WORD *)v13 + 3) = v7;
  *((_WORD *)v13 + 4) = a3;
  v14 = *(_DWORD *)(a1 + 60) == 1 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2040LL) + 48LL * v7 + 2) == a3;
  v15 = 32LL;
  *((_DWORD *)v13 + 3) ^= (*((_DWORD *)v13 + 3) ^ v14) & 1;
  v16 = v13 + 1952;
  do
  {
    v16[1] = v16;
    *v16 = v16;
    v16 += 2;
    --v15;
  }
  while ( v15 );
  *((_QWORD *)v13 + 309) = v13 + 2464;
  v17 = (struct _KEVENT *)(v13 + 240);
  *((_QWORD *)v13 + 308) = v13 + 2464;
  v18 = 3LL;
  *((_QWORD *)v13 + 311) = v13 + 2480;
  *((_QWORD *)v13 + 310) = v13 + 2480;
  *((_QWORD *)v13 + 313) = v13 + 2496;
  *((_QWORD *)v13 + 312) = v13 + 2496;
  *((_QWORD *)v13 + 315) = v13 + 2512;
  *((_QWORD *)v13 + 314) = v13 + 2512;
  do
  {
    memset(v17, 0, 0x38uLL);
    KeInitializeEvent(v17, SynchronizationEvent, 0);
    v17 = (struct _KEVENT *)((char *)v17 + 56);
    --v18;
  }
  while ( v18 );
  *((_QWORD *)v13 + 52) = v13 + 408;
  *((_QWORD *)v13 + 51) = v13 + 408;
  *((_QWORD *)v13 + 54) = v13 + 424;
  *((_QWORD *)v13 + 53) = v13 + 424;
  *((_QWORD *)v13 + 351) = v13 + 2800;
  *((_QWORD *)v13 + 350) = v13 + 2800;
  if ( *(_DWORD *)(a1 + 2420) )
  {
    do
    {
      v19 = 224LL * v12;
      *(_DWORD *)&v13[v19 + 2816] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1864), (__int64)(v13 + 2800), &v13[v19 + 2832], 0LL);
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 2420) );
  }
  v20 = *(_DWORD *)(a1 + 4 * v5 + 2160);
  result = v13;
  *((_DWORD *)v13 + 697) = -1;
  *((_DWORD *)v13 + 686) = v20;
  v13[2792] = 1;
  return result;
}
