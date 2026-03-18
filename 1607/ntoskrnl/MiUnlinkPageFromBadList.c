/*
 * XREFs of MiUnlinkPageFromBadList @ 0x1401F3054
 * Callers:
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiMoveEccPagesToFreeList @ 0x1401E2030 (MiMoveEccPagesToFreeList.c)
 *     MiTransferPartitionPageRun @ 0x1401F2058 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x140069570 (KxReleaseQueuedSpinLock.c)
 *     MiSetPfnBlink @ 0x140107ACC (MiSetPfnBlink.c)
 */

signed __int64 __fastcall MiUnlinkPageFromBadList(_QWORD *a1)
{
  unsigned __int64 v2; // rbp
  int *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // r8
  unsigned int v9; // eax
  int v10; // ebp
  unsigned __int64 v11; // rcx
  signed __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (__int64)(a1 + 0xB000000000LL) / 48;
  v3 = MiPartitionIdToPointer(((unsigned int)HIDWORD(a1[5]) >> 8) & 0x3FF);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 460, &LockHandle);
  v4 = *a1 & 0xFFFFFFFFFLL;
  v5 = a1[3] & 0xFFFFFFFFFLL;
  if ( v4 == 0xFFFFFFFFFLL )
    *((_QWORD *)v3 + 459) = v5;
  else
    MiSetPfnBlink(48 * v4 - 0x58000000000LL, a1[3] & 0xFFFFFFFFFLL, 0);
  if ( v5 == 0xFFFFFFFFFLL )
    *((_QWORD *)v3 + 458) = v4;
  else
    *(_QWORD *)(48 * v5 - 0x58000000000LL) ^= (v4 ^ *(_QWORD *)(48 * v5 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  if ( dword_140327060 == 1 )
  {
    v6 = v2 & 0x1F;
    LOBYTE(v7) = 1;
    v8 = (volatile signed __int32 *)(qword_140327080 + 4 * (v2 >> 5));
    if ( v6 + 1 <= 0x20 )
    {
      v9 = 1 << v6;
LABEL_16:
      _InterlockedOr(v8, v9);
      goto LABEL_17;
    }
    if ( (v2 & 0x1F) == 0 )
      goto LABEL_15;
    v10 = v2 & 0x1F;
    _InterlockedOr(v8++, ((1 << (32 - v10)) - 1) << v6);
    v7 = 1LL - (unsigned int)(32 - v10);
    if ( v7 >= 0x20 )
    {
      v11 = v7 >> 5;
      v7 += -32LL * (v7 >> 5);
      do
      {
        *v8++ = -1;
        --v11;
      }
      while ( v11 );
    }
    if ( v7 )
    {
LABEL_15:
      v9 = (1 << v7) - 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  --*((_QWORD *)v3 + 456);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  *a1 = 0LL;
  result = MiSetPfnBlink((__int64)a1, 0LL, 1);
  a1[1] = 0LL;
  return result;
}
