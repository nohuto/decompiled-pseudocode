/*
 * XREFs of VidSchiCreateNode @ 0x1C006396C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0063290 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0016C00 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r12
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // r15
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
  int v20; // eax
  char *result; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = 224 * *(_DWORD *)(a1 + 2128) + 2976;
  v9 = v8;
  if ( (unsigned __int64)v8 < 0xC80 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
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
  *((_WORD *)v13 + 2) = v4;
  *(_DWORD *)v13 = 1685016150;
  *((_QWORD *)v13 + 3) = a1;
  *((_WORD *)v13 + 3) = v6;
  *((_WORD *)v13 + 4) = v5;
  v14 = *(_DWORD *)(a1 + 56) == 1 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1904LL) + 48LL * v6 + 2) == v5;
  v15 = 32LL;
  *((_DWORD *)v13 + 3) ^= (*((_DWORD *)v13 + 3) ^ v14) & 1;
  v16 = v13 + 1912;
  do
  {
    v16[1] = v16;
    *v16 = v16;
    v16 += 2;
    --v15;
  }
  while ( v15 );
  *((_QWORD *)v13 + 304) = v13 + 2424;
  v17 = (struct _KEVENT *)(v13 + 200);
  *((_QWORD *)v13 + 303) = v13 + 2424;
  v18 = 3LL;
  *((_QWORD *)v13 + 306) = v13 + 2440;
  *((_QWORD *)v13 + 305) = v13 + 2440;
  *((_QWORD *)v13 + 308) = v13 + 2456;
  *((_QWORD *)v13 + 307) = v13 + 2456;
  *((_QWORD *)v13 + 310) = v13 + 2472;
  *((_QWORD *)v13 + 309) = v13 + 2472;
  do
  {
    memset(v17, 0, 0x38uLL);
    KeInitializeEvent(v17, SynchronizationEvent, 0);
    v17 = (struct _KEVENT *)((char *)v17 + 56);
    --v18;
  }
  while ( v18 );
  *((_QWORD *)v13 + 47) = v13 + 368;
  *((_QWORD *)v13 + 46) = v13 + 368;
  *((_QWORD *)v13 + 49) = v13 + 384;
  *((_QWORD *)v13 + 48) = v13 + 384;
  *((_QWORD *)v13 + 371) = v13 + 2960;
  *((_QWORD *)v13 + 370) = v13 + 2960;
  if ( *(_DWORD *)(a1 + 2128) )
  {
    do
    {
      v19 = 224LL * v12;
      *(_DWORD *)&v13[v19 + 2976] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1832), (__int64)(v13 + 2960), &v13[v19 + 2992], 0LL);
      ++v12;
    }
    while ( v12 < *(_DWORD *)(a1 + 2128) );
  }
  v20 = *(_DWORD *)(a1 + 2120);
  *((_DWORD *)v13 + 738) = -1;
  *((_DWORD *)v13 + 676) = v20;
  result = v13;
  v13[2956] = 1;
  return result;
}
