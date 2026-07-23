/*
 * XREFs of CcDeleteSectionsForPartition @ 0x1401B24D8
 * Callers:
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall CcDeleteSectionsForPartition(__int64 **a1, __int16 a2)
{
  KIRQL v4; // al
  __int64 *v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rbx
  KIRQL v9; // r8
  int *v10; // rbx
  KIRQL v11; // al

  v4 = KeAcquireQueuedSpinLock(5uLL);
  v5 = *a1;
  v6 = v4;
  while ( v5 != (__int64 *)a1 )
  {
    v7 = (__int64)(v5 - 17);
    if ( (v5[2] & 0x820) != 0
      || ((v8 = *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28),
           v9 = ExAcquireSpinLockExclusive(&dword_140326580),
           *(_QWORD *)v8)
        ? (v10 = MiPartitionIdToPointer(*(_WORD *)(*(_QWORD *)v8 + 60LL) & 0x3FF))
        : (v10 = MiSystemPartition),
          ExReleaseSpinLockExclusive(&dword_140326580, v9),
          *(_WORD *)v10 != a2) )
    {
LABEL_10:
      v5 = (__int64 *)*v5;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 4) )
      {
        __debugbreak();
        goto LABEL_10;
      }
      v5 = (__int64 *)*v5;
      *((_DWORD *)v5 + 4) |= 0x20u;
      ++*((_DWORD *)v5 - 6);
      CcDeleteSharedCacheMap(v7, v6, 0, 0LL);
      v11 = KeAcquireQueuedSpinLock(5uLL);
      *((_DWORD *)v5 + 4) &= ~0x20u;
      v6 = v11;
      --*((_DWORD *)v5 - 6);
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v6);
}
