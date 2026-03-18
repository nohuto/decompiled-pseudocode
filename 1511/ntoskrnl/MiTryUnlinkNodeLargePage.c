/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140019BFC
 * Callers:
 *     MiDemoteLargeFreePage @ 0x140019D40 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x1401E1834 (MiMoveLargeFreePage.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400196EC (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  unsigned __int8 v4; // bp
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (unsigned int)MiPageToNode(a1, 0LL);
  v3 = 48 * a1 - 0x58000000000LL;
  v4 = MiLockPageInline(v3);
  v5 = *(_QWORD *)(v3 + 40) >> 40;
  LOWORD(v5) = v5 & 0x3FF;
  v6 = *(_QWORD *)(MiPartitionIdToPointer(v5) + 40) + 1336 * v2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1328), &LockHandle);
  v10 = *(_BYTE *)(v3 + 34) & 7;
  if ( (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL
    && (*(_BYTE *)(v3 + 34) & 7u) <= 1
    && (v11 = *(_QWORD **)(v3 + 8), (__int64)v11 < 0) )
  {
    v12 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v11 != v3 )
      __fastfail(3u);
    *v11 = v12;
    *(_QWORD *)(v12 + 8) = v11;
    v13 = MiUnlinkNodeLargePageHelper(v6, v3);
    KxReleaseQueuedSpinLock(&LockHandle, v14, v15, v16);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v13 )
    {
      MiInsertLargePageInFreeOrZeroList(v3, v10);
      v10 = 5;
    }
    __writecr8(v4);
    return v10;
  }
  else
  {
    KxReleaseQueuedSpinLock(&LockHandle, v7, v8, v9);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
    return 5LL;
  }
}
