/*
 * XREFs of VidSchiCreateNode @ 0x1C00415A0
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0040EF0 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0006280 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

char *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r12
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // r15
  int v8; // eax
  size_t v9; // rsi
  char *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  char *v15; // rbx
  BOOL v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  struct _KEVENT *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // eax
  char *result; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = 224 * *(_DWORD *)(a1 + 2176) + 3104;
  v9 = v8;
  if ( (unsigned __int64)v8 < 0xD00 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v24);
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x68536956u);
  v14 = 0;
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v25 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    WdLogEvent5_WdWarning(v25);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *((_WORD *)v15 + 2) = v4;
  *(_DWORD *)v15 = 1685016150;
  *((_QWORD *)v15 + 3) = a1;
  *((_WORD *)v15 + 3) = v6;
  *((_WORD *)v15 + 4) = v5;
  v16 = *(_DWORD *)(a1 + 56) == 1 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1896LL) + 48LL * v6 + 2) == v5;
  v17 = 32LL;
  *((_DWORD *)v15 + 3) ^= (*((_DWORD *)v15 + 3) ^ v16) & 1;
  v18 = v15 + 2040;
  do
  {
    v18[1] = v18;
    *v18 = v18;
    v18 += 2;
    --v17;
  }
  while ( v17 );
  *((_QWORD *)v15 + 320) = v15 + 2552;
  v19 = (struct _KEVENT *)(v15 + 168);
  *((_QWORD *)v15 + 319) = v15 + 2552;
  v20 = 3LL;
  *((_QWORD *)v15 + 322) = v15 + 2568;
  *((_QWORD *)v15 + 321) = v15 + 2568;
  *((_QWORD *)v15 + 324) = v15 + 2584;
  *((_QWORD *)v15 + 323) = v15 + 2584;
  *((_QWORD *)v15 + 326) = v15 + 2600;
  *((_QWORD *)v15 + 325) = v15 + 2600;
  do
  {
    memset(v19, 0, 0x38uLL);
    KeInitializeEvent(v19, SynchronizationEvent, 0);
    v19 = (struct _KEVENT *)((char *)v19 + 56);
    --v20;
  }
  while ( v20 );
  *((_QWORD *)v15 + 43) = v15 + 336;
  *((_QWORD *)v15 + 42) = v15 + 336;
  *((_QWORD *)v15 + 45) = v15 + 352;
  *((_QWORD *)v15 + 44) = v15 + 352;
  *((_QWORD *)v15 + 387) = v15 + 3088;
  *((_QWORD *)v15 + 386) = v15 + 3088;
  if ( *(_DWORD *)(a1 + 2176) )
  {
    do
    {
      v21 = 224LL * v14;
      *(_DWORD *)&v15[v21 + 3104] = 1953189956;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1880), (__int64)(v15 + 3088), &v15[v21 + 3120], 0LL);
      ++v14;
    }
    while ( v14 < *(_DWORD *)(a1 + 2176) );
  }
  v22 = *(_DWORD *)(a1 + 2168);
  *((_DWORD *)v15 + 770) = -1;
  *((_DWORD *)v15 + 708) = v22;
  result = v15;
  v15[3084] = 1;
  return result;
}
