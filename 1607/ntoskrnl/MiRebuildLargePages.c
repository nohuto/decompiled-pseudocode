/*
 * XREFs of MiRebuildLargePages @ 0x1401FD95C
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140066D30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400BEC6C (MiNodeLargeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x1401F3048 (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x1401FD6F8 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // r12
  ULONG_PTR v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned int v7; // r15d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned int i; // ebp
  unsigned __int8 CurrentIrql; // r15
  KSPIN_LOCK *v12; // rbp
  __int64 v13; // rcx
  unsigned int v14; // ebp
  unsigned __int64 v15; // r11
  unsigned int j; // r8d
  __int64 NodeStandbyPageCount; // rax
  __int64 v18; // r11
  int v19; // r8d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  char v22; // al
  unsigned __int8 v23; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  char v25; // [rsp+80h] [rbp+8h]
  unsigned __int64 v26; // [rsp+88h] [rbp+10h]

  v1 = a1 >> 58;
  v2 = 16 * (a1 | 0xFFC0000000000000uLL);
  v3 = *(_QWORD *)(v2 + 0x30) + 2184 * (a1 >> 58);
  v25 = *(_BYTE *)(v3 + 1235);
  v26 = *(_QWORD *)(v3 + 2056);
  v4 = v26 / 0xC8;
  if ( v26 / 0xC8 >= (-(__int64)(v25 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
  {
    v5 = MiNodeLargeFreeZeroPages((_QWORD *)v3, 4u, 2);
    v6 = v5;
    if ( v5 < v4 )
    {
      v7 = MmNumberOfChannels;
      v8 = v4 - v5;
      v9 = 0LL;
      for ( i = 0; i < v7; ++i )
        v9 += MiNodeFreeZeroPages((_QWORD *)v3, i, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v12 = (KSPIN_LOCK *)(v3 + 2176);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 2176), &LockHandle);
      v13 = KeAbPreAcquire(v3, 0LL, 2);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      if ( v9 < v8 )
      {
        if ( v6 < 0x400 )
        {
          v14 = MmNumberOfChannels;
          v15 = 0LL;
          for ( j = 0; j < v14; j = v19 + 1 )
          {
            NodeStandbyPageCount = MiGetNodeStandbyPageCount(v2, v1, j);
            v15 = NodeStandbyPageCount + v18;
          }
          v20 = 0x8000LL;
          v12 = (KSPIN_LOCK *)(v3 + 2176);
          if ( v26 / 0xA > 0x8000 )
            v20 = v26 / 0xA;
          if ( v15 > v20 )
            v9 += (v15 - v20) / 0xC8;
        }
        if ( v9 < v8 )
          goto LABEL_17;
      }
      *(_BYTE *)(v3 + 1235) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v21 = MiRebuildLargePage(v2, v1, v9);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v12, &LockHandle);
      if ( v21 )
      {
LABEL_17:
        v22 = 8;
      }
      else
      {
        if ( v25 )
          *(_BYTE *)(v3 + 1235) = 1;
        v23 = *(_BYTE *)(v3 + 1234);
        if ( v23 >= 0x80u )
          v22 = -1;
        else
          v22 = 2 * v23;
      }
      *(_BYTE *)(v3 + 1234) = v22;
      *(_BYTE *)(v3 + 1232) = v22;
      *(_BYTE *)(v3 + 1233) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      KeAbPostRelease(v3);
    }
  }
  MiDereferencePartition((_DWORD *)v2);
}
