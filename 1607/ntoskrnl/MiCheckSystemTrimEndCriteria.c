/*
 * XREFs of MiCheckSystemTrimEndCriteria @ 0x1401E9150
 * Callers:
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiLogContinueTrim @ 0x1401E980C (MiLogContinueTrim.c)
 */

__int64 __fastcall MiCheckSystemTrimEndCriteria(_QWORD *a1, __int64 a2, struct _KLOCK_QUEUE_HANDLE *a3)
{
  char v3; // r9
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned int v19; // ecx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v23; // rax

  v3 = *(_BYTE *)(a2 + 2);
  v5 = a1[781];
  v6 = 2LL;
  if ( (unsigned __int8)(v3 - 2) <= 1u )
  {
    v23 = *(_QWORD *)(v5 + 2376);
    if ( *(_QWORD *)(a2 + 88) < v23 )
      *(_QWORD *)(v5 + 2376) = v23 - *(_QWORD *)(a2 + 72);
    else
      *(_QWORD *)(v5 + 2376) = 0LL;
    return 1LL;
  }
  if ( (*(_BYTE *)a2 & 0x7Fu) >= 4 )
    return 1LL;
  v9 = a1[808];
  if ( v9 >= *(_QWORD *)(a2 + 64) )
    return 1LL;
  v10 = 0LL;
  if ( *(_QWORD *)(a2 + 88) >= *(_QWORD *)(a2 + 72) )
  {
    if ( v9 < 0x420 )
    {
      *(_QWORD *)(a2 + 88) = 0LL;
      goto LABEL_7;
    }
    return 1LL;
  }
LABEL_7:
  v11 = (_QWORD *)(v5 + 2432);
  v12 = 7LL;
  do
  {
    *v11 = *(_QWORD *)((char *)v11 + a2 - v5 - 2424);
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = 0LL;
  v14 = (_QWORD *)(v5 + 2472);
  do
  {
    v13 += *v14++;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(v5 + 2424) = v13;
  KeReleaseInStackQueuedSpinLock(a3);
  if ( a1[904] < 0x420uLL )
  {
    ++*(_DWORD *)(v5 + 2568);
  }
  else
  {
    ++*(_DWORD *)(v5 + 2564);
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  v15 = a1[808];
  v16 = *(_QWORD *)(a2 + 64);
  if ( v15 >= v16 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, a3);
    return 1LL;
  }
  v17 = v16 - v15;
  v18 = *(_BYTE *)a2 & 0x7F;
  v19 = MiTrimPassToAge[v18];
  if ( MiTrimPassToAge[v18] )
    --v19;
  if ( v19 < 7 )
  {
    v20 = (_QWORD *)(v5 + 8 * (v19 + 304LL));
    v21 = 7 - v19;
    do
    {
      v10 += *v20++;
      --v21;
    }
    while ( v21 );
  }
  memset((void *)(a2 + 8), 0, 0x38uLL);
  if ( v10 < v17 + 256 || *(char *)a2 < 0 )
    *(_BYTE *)a2 ^= (*(_BYTE *)a2 ^ (*(_BYTE *)a2 + 1)) & 0x7F;
  else
    *(_BYTE *)a2 |= 0x80u;
  MiLogContinueTrim(a1, a2);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, a3);
  return 0LL;
}
