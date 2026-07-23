/*
 * XREFs of MiAddZeroingThreads @ 0x1401402B4
 * Callers:
 *     MiReassessZeroThreads @ 0x14013FA44 (MiReassessZeroThreads.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAddZeroingThreads(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int v5; // esi
  __int64 v7; // r8
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 144);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 128);
  v4 = *(_DWORD *)(v3 + 48);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 64), &LockHandle);
  if ( v4 == *(_DWORD *)(v3 + 56) )
    goto LABEL_2;
  v5 = 1;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v3 + 32) + 16LL * v4 + 8) & 2) != 0 )
      break;
    ++v2;
    ++v4;
  }
  while ( v4 != *(_DWORD *)(v3 + 56) );
  if ( !v2 )
  {
LABEL_2:
    *(_DWORD *)(v3 + 24) = 4;
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 52) > v2 )
      *(_DWORD *)(v3 + 52) = v2;
    v7 = 2LL * *(unsigned int *)(v3 + 48);
    --*(_DWORD *)(v3 + 60);
    ++*(_DWORD *)(v3 + 48);
    _InterlockedOr(v8, 0);
    *(_BYTE *)(*(_QWORD *)(v3 + 32) + 8 * v7 + 8) &= ~1u;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v5;
}
