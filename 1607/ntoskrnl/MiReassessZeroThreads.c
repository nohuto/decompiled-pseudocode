/*
 * XREFs of MiReassessZeroThreads @ 0x14013FA44
 * Callers:
 *     MiZeroLargePages @ 0x14013F840 (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiAddZeroingThreads @ 0x1401402B4 (MiAddZeroingThreads.c)
 *     MiReduceZeroingThreads @ 0x1401F4124 (MiReduceZeroingThreads.c)
 */

void __fastcall MiReassessZeroThreads(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rbx
  signed __int32 v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  int v13; // ecx
  unsigned int i; // edx
  __int64 v15; // rcx
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return;
  v2 = *(_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(v2 + 128);
  if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFB) == 0 )
    return;
  if ( _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v4 + 32) + 16LL * *(unsigned int *)(a1 + 152)), a2) )
    return;
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
  v6 = *(_DWORD *)(v4 + 48);
  if ( v5 + 1 != v6 )
    return;
  v7 = 0LL;
  v8 = 0;
  if ( v6 )
  {
    do
    {
      v9 = v8++;
      v7 += *(_QWORD *)(*(_QWORD *)(v4 + 32) + 16 * v9);
    }
    while ( v8 < *(_DWORD *)(v4 + 48) );
  }
  v10 = 8 * *(_DWORD *)(v4 + 48);
  v11 = v7 % v10;
  v12 = v7 / v10;
  if ( !(v7 / v10) )
    v12 = 1LL;
  if ( *(_DWORD *)(v4 + 24) == 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
    if ( *(_DWORD *)(v4 + 24) == 4 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return;
    }
    *(_DWORD *)(v4 + 24) = 2;
    *(_QWORD *)(v4 + 40) = v12 + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v13 = 0;
  if ( v12 >= *(_QWORD *)(v4 + 40) )
  {
    if ( ++*(_DWORD *)(v4 + 72) < 8u )
      goto LABEL_13;
    if ( *(int *)(v4 + 24) >= 3 )
    {
      *(_DWORD *)(v4 + 52) = 1;
      v16 = MiReduceZeroingThreads(a1, 1LL);
    }
    else
    {
      *(_DWORD *)(v4 + 72) = 0;
      *(_DWORD *)(v4 + 24) = 3;
      v16 = MiAddZeroingThreads(a1, v11);
    }
LABEL_24:
    v13 = v16;
LABEL_13:
    *(_DWORD *)(v4 + 68) = 0;
    if ( v13 == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
      KeSetEvent((PRKEVENT)v4, 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    goto LABEL_15;
  }
  ++*(_DWORD *)(v4 + 68);
  *(_DWORD *)(v4 + 72) = 0;
  if ( *(_DWORD *)(v4 + 68) >= 8u )
  {
    if ( *(_DWORD *)(v4 + 24) == 2 )
      v16 = MiReduceZeroingThreads(a1, 0LL);
    else
      v16 = MiAddZeroingThreads(a1, v11);
    *(_QWORD *)(v4 + 40) = v12;
    goto LABEL_24;
  }
LABEL_15:
  *(_DWORD *)(v4 + 28) = 0;
  _InterlockedOr(v17, 0);
  for ( i = 0; i < *(_DWORD *)(v4 + 48); ++i )
  {
    v15 = 16LL * i;
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v4 + 32) + v15), 0LL);
  }
}
