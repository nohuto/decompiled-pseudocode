/*
 * XREFs of MiUnlinkNodeLargePage @ 0x140019534
 * Callers:
 *     MiReplenishFromNodeLargePages @ 0x1400193C8 (MiReplenishFromNodeLargePages.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x140131E1C (MiZeroLargePages.c)
 *     MiFindLargeNodePages @ 0x1401D325C (MiFindLargeNodePages.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 * Callees:
 *     MiUnlinkNodeLargePageHelper @ 0x1400196EC (MiUnlinkNodeLargePageHelper.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140019D90 (MiInsertLargePageInFreeOrZeroList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int8 *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r15
  bool v11; // zf
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v24; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  v5 = *(_QWORD *)(a1 + 40) + 1336LL * a2;
  v6 = a3;
  while ( 1 )
  {
    if ( (_DWORD)v6 == 4 )
    {
      v7 = (unsigned __int8 *)(v5 + 1317);
      v8 = v5 + 1317 + (unsigned int)MmNumberOfChannels;
      v9 = 4 * v4;
      while ( 1 )
      {
        v10 = *v7;
        if ( *(_QWORD *)(v5 + 16 * (v10 + v9 + 1)) != v5 + 16 * (v10 + v9 + 1)
          || *(_QWORD *)(v5 + 16 * (v10 + v9 + 9)) != v5 + 16 * (v10 + v9 + 9) )
        {
          break;
        }
        if ( ++v7 == (unsigned __int8 *)v8 )
          return 0LL;
      }
      v11 = v7 == (unsigned __int8 *)v8;
    }
    else
    {
      v9 = 4 * v4;
      LODWORD(v10) = v6;
      v24 = (_QWORD *)(v5 + 16 * (4 * v4 + v6 + 1));
      if ( (_QWORD *)*v24 != v24 )
        goto LABEL_7;
      v11 = *(_QWORD *)(v5 + 16 * (v9 + v6 + 9)) == v5 + 16 * (v9 + v6 + 9);
    }
    if ( v11 )
      return 0LL;
LABEL_7:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1328), &LockHandle);
    v16 = (_QWORD *)(v5 + 16 * ((unsigned int)v10 + v9 + 1));
    if ( (_QWORD *)*v16 != v16 || (v16 = (_QWORD *)(v5 + 16 * ((unsigned int)v10 + v9 + 9)), (_QWORD *)*v16 != v16) )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v16[1] + 24LL), 0x3FuLL) )
        break;
    }
    KxReleaseQueuedSpinLock(&LockHandle, v13, v14, v15);
    __writecr8(CurrentIrql);
  }
  v17 = v16[1];
  v18 = *(_QWORD **)(v17 + 8);
  if ( *(_QWORD **)v17 != v16 || *v18 != v17 )
    __fastfail(3u);
  v16[1] = v18;
  *v18 = v16;
  v19 = MiUnlinkNodeLargePageHelper(v5, v17, (unsigned int)v4, (unsigned int)v10);
  KxReleaseQueuedSpinLock(&LockHandle, v20, v21, v22);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v19 )
  {
    MiInsertLargePageInFreeOrZeroList(v17, (unsigned int)v4);
    v17 = 0LL;
  }
  __writecr8(CurrentIrql);
  return v17;
}
