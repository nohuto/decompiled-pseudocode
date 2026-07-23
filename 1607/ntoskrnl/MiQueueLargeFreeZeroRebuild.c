/*
 * XREFs of MiQueueLargeFreeZeroRebuild @ 0x1401FD4C8
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiLargePageFreeToZero @ 0x14008AC60 (MiLargePageFreeToZero.c)
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleasePushLockUnordered @ 0x1401E6684 (MiReleasePushLockUnordered.c)
 *     MiTryAcquirePushLockUnordered @ 0x1401E66D4 (MiTryAcquirePushLockUnordered.c)
 */

void __fastcall MiQueueLargeFreeZeroRebuild(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // r14
  int v5; // edi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // ebx
  __int64 v18; // rax
  unsigned __int16 *v19; // rbx
  KIRQL v20; // al
  __int64 v21; // rcx
  KIRQL v22; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h]
  int v25; // [rsp+90h] [rbp+18h] BYREF

  v4 = MiLargePageSizes[a3 + 1];
  v5 = 0;
  v24 = a3;
  v7 = MiLargePageSizes[a3];
  v8 = a2 & ~(v7 - 1);
  if ( a2 )
  {
    MiPageToNode(a2, 0);
    if ( MiTryAcquirePushLockUnordered((volatile signed __int32 *)(a1 + 224), v9, 0, &v25) )
    {
      v10 = 0;
      v11 = v7 % v4;
      v12 = v7 / v4;
      if ( v12 )
      {
        do
        {
          if ( !MiIsPfnInline(v8) )
            break;
          if ( MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v13 + 40)) >> 8) & 0x3FF) != (int *)a1 )
            break;
          if ( (*(_BYTE *)(v14 + 34) & 7u) > 1 )
            break;
          if ( (v15 & 0xFFFFFFFFFLL) != v16 )
            break;
          if ( *(__int64 *)(v14 + 8) >= 0 )
            break;
          ++v10;
          v8 += v4;
        }
        while ( v10 < v12 );
      }
      MiReleasePushLockUnordered((volatile signed __int64 *)(a1 + 224), v11, 0);
      if ( v10 == v12 )
      {
        v17 = 0;
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        v18 = *(_QWORD *)(a1 + 16);
        if ( v18 )
        {
          v17 = 1;
          *(_QWORD *)(a1 + 16) = v18 + 1;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v17 )
        {
          v19 = (unsigned __int16 *)(a1 + 520 * v24 + 4504);
          v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 5580));
          v21 = *v19;
          v22 = v20;
          if ( *(_QWORD *)&v19[4 * v21 + 4] )
            *((_BYTE *)v19 + 4) = 1;
          else
            ++v19[1];
          *(_QWORD *)&v19[4 * v21 + 4] = a2;
          if ( ++*v19 == 64 )
            *v19 = 0;
          if ( *(_BYTE *)(a1 + 5576) == 1 )
          {
            v5 = 1;
          }
          else
          {
            *(_BYTE *)(a1 + 5576) = 1;
            *(_QWORD *)(a1 + 5568) = a1;
            *(_QWORD *)(a1 + 5560) = MiRebuildLargeZeroPage;
            *(_QWORD *)(a1 + 5544) = 0LL;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 5544), DelayedWorkQueue);
          }
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 5580), v22);
          if ( v5 == 1 )
            MiDereferencePartition((_DWORD *)a1);
        }
      }
    }
  }
}
