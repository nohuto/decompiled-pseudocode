/*
 * XREFs of MiReduceZeroingThreads @ 0x1401F4124
 * Callers:
 *     MiReassessZeroThreads @ 0x14013FA44 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned int v6; // edi
  char v7; // r11
  char v8; // cl
  __int64 v9; // rax
  unsigned int v10; // r10d
  __int64 v11; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v4 = 0;
  v5 = *(_QWORD *)(v2 + 128);
  v6 = *(_DWORD *)(v5 + 56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
  v7 = 1;
  do
  {
    v8 = *(_BYTE *)(*(_QWORD *)(v5 + 32) + 16LL * --v6 + 8);
    if ( (v8 & 2) == 0 )
    {
      if ( (v8 & 1) == 0 )
        break;
      v9 = *(_QWORD *)(v5 + 32);
      v4 = 1;
      --*(_DWORD *)(v5 + 60);
      *(_BYTE *)(*(_QWORD *)(v5 + 32) + 16LL * v6 + 8) = *(_BYTE *)(v9 + 16LL * v6 + 8) | 2;
    }
  }
  while ( v6 );
  v10 = v6;
  if ( v6 > *(_DWORD *)(v5 + 52) )
    v10 = *(_DWORD *)(v5 + 52);
  if ( v10 )
  {
    v4 = 1;
    if ( a2 == 1 )
    {
      v7 = 3;
      *(_DWORD *)(v5 + 24) = 4;
    }
    else
    {
      *(_DWORD *)(v5 + 60) += v10;
    }
    *(_DWORD *)(v5 + 48) -= v10;
    do
    {
      v11 = v6--;
      *(_BYTE *)(*(_QWORD *)(v5 + 32) + 16 * v11 + 8) |= v7;
      --v10;
    }
    while ( v10 );
  }
  else
  {
    *(_DWORD *)(v5 + 24) = 4;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
