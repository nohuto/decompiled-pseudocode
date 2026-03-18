/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x14021A3F8
 * Callers:
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(__int64 a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  __int64 v3; // r10
  _QWORD *v4; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v24; // rax

  v3 = 2LL;
  v4 = *(_QWORD **)(a1 + 5256);
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 2) - 2) <= 1u )
  {
    v24 = v4[297];
    if ( *(_QWORD *)(a2 + 96) < v24 )
      v4[297] = v24 - *(_QWORD *)(a2 + 80);
    else
      v4[297] = 0LL;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v8 = *(_QWORD *)(a1 + 5504);
  v9 = *(_QWORD *)(a2 + 72);
  if ( v8 >= v9 )
    return 1LL;
  v10 = v8 + *(_QWORD *)(a2 + 8);
  if ( v10 < v8 || v10 >= v9 )
    return 1LL;
  v11 = 0LL;
  if ( *(_QWORD *)(a2 + 96) >= *(_QWORD *)(a2 + 80) )
  {
    if ( v8 < 0x400 )
    {
      *(_QWORD *)(a2 + 96) = 0LL;
      goto LABEL_9;
    }
    return 1LL;
  }
LABEL_9:
  *(_QWORD *)(a2 + 8) = 0LL;
  v12 = v4 + 304;
  v13 = 7LL;
  do
  {
    *v12 = *(_QWORD *)((char *)v12 + a2 - (_QWORD)v4 - 2416);
    ++v12;
    --v13;
  }
  while ( v13 );
  v14 = 0LL;
  v15 = v4 + 309;
  do
  {
    v14 += *v15++;
    --v3;
  }
  while ( v3 );
  v4[303] = v14;
  KeReleaseInStackQueuedSpinLock(a3);
  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  v16 = *(_QWORD *)(a1 + 5504);
  v17 = *(_QWORD *)(a2 + 72);
  if ( v16 >= v17 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, a3);
    return 1LL;
  }
  v18 = v17 - v16;
  v19 = *(_BYTE *)a2 & 0x7F;
  v20 = (unsigned __int8)MiTrimPassToAge[v19];
  if ( MiTrimPassToAge[v19] )
    --v20;
  if ( v20 < 7 )
  {
    v21 = &v4[v20 + 304];
    v22 = 7 - v20;
    do
    {
      v11 += *v21++;
      --v22;
    }
    while ( v22 );
  }
  memset((void *)(a2 + 16), 0, 0x38uLL);
  if ( v11 < v18 + 256 || *(char *)a2 < 0 )
    *(_BYTE *)a2 ^= (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    *(_BYTE *)a2 |= 0x80u;
  KeAcquireInStackQueuedSpinLock(&SpinLock, a3);
  return 0LL;
}
