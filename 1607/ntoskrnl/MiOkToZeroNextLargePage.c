/*
 * XREFs of MiOkToZeroNextLargePage @ 0x14013F988
 * Callers:
 *     MiZeroLargePages @ 0x14013F840 (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

__int64 __fastcall MiOkToZeroNextLargePage(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r15
  __int64 v5; // rdi
  __int64 v6; // r14
  LONG v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  *a2 = 0;
  v5 = *(_QWORD *)(v2 + 128);
  if ( *(_DWORD *)(v5 + 24) )
  {
    v6 = 2LL * *(unsigned int *)(a1 + 152);
    while ( 1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 8 * v6 + 8) & 3) == 0 )
        return 1LL;
      if ( (*(_BYTE *)(*(_QWORD *)(v5 + 32) + 8 * v6 + 8) & 2) != 0 )
        break;
      *a2 = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
      if ( *(_DWORD *)(v5 + 24) == 4 )
      {
        --*(_DWORD *)(v5 + 60);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return 0LL;
      }
      v8 = KeResetEvent((PRKEVENT)v5);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( !v8 )
        KeWaitForSingleObject((PVOID)v5, Executive, 0, 0, 0LL);
    }
    *(_BYTE *)(*(_QWORD *)(v5 + 32) + 8 * v6 + 8) |= 4u;
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 144) + 112LL), 1u);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 156) )
  {
    *(_BYTE *)(a1 + 156) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 28), 0xFFFFFFFF) == 1 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 64), &LockHandle);
      if ( *(_DWORD *)(v5 + 24) != 4 )
        *(_DWORD *)(v5 + 24) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  return 1LL;
}
