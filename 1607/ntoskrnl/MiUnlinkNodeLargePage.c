/*
 * XREFs of MiUnlinkNodeLargePage @ 0x140089F30
 * Callers:
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1401FD17C (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     MiBeginLargePageAccessor @ 0x14008A4F8 (MiBeginLargePageAccessor.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiUnlinkNodeLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  bool v14; // zf
  unsigned __int8 CurrentIrql; // r15
  _QWORD *v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 **v19; // rcx
  __int64 v20; // rsi
  int v21; // ebx
  _QWORD *v22; // rcx
  volatile signed __int64 *v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a4;
  v7 = *(_QWORD *)(a1 + 48) + 2184LL * a3;
  v8 = a2;
  while ( 1 )
  {
    v9 = 4 * (a5 + 4 * v8);
    if ( (_DWORD)v6 == 4 )
    {
      v10 = (unsigned __int8 *)(v7 + 2165);
      v11 = v7 + 2165 + (unsigned int)MmNumberOfChannels;
      while ( 1 )
      {
        v12 = *v10;
        if ( *(_QWORD *)(v7 + 16 * (v12 + v9 + 3)) != v7 + 16 * (v12 + v9 + 3)
          || *(_QWORD *)(v7 + 16 * (v12 + v9 + 11)) != v7 + 16 * (v12 + v9 + 11) )
        {
          break;
        }
        if ( ++v10 == (unsigned __int8 *)v11 )
          return 0LL;
      }
      v14 = v10 == (unsigned __int8 *)v11;
    }
    else
    {
      LODWORD(v12) = v6;
      if ( *(_QWORD *)(v7 + 16 * (v9 + v6 + 3)) != v7 + 16 * (v9 + v6 + 3) )
        goto LABEL_10;
      v14 = *(_QWORD *)(v7 + 16 * (v9 + v6 + 11)) == v7 + 16 * (v9 + v6 + 11);
    }
    if ( v14 )
      return 0LL;
LABEL_10:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v23[1] = (volatile signed __int64 *)(v7 + 2176);
    v23[0] = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(v23, v7 + 2176);
    }
    else
    {
      v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v7 + 2176), (__int64)v23);
      if ( v16 )
        KxWaitForLockOwnerShip((__int64)v23, v16);
    }
    v17 = (__int64 *)(v7 + 16 * ((unsigned int)v12 + v9 + 3));
    if ( (__int64 *)*v17 != v17 || (v17 = (__int64 *)(v7 + 16 * ((unsigned int)v12 + v9 + 11)), (__int64 *)*v17 != v17) )
    {
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17[1] + 24), 0x3FuLL) )
        break;
    }
    KxReleaseQueuedSpinLock(v23);
    __writecr8(CurrentIrql);
  }
  v18 = v17[1];
  v19 = *(__int64 ***)(v18 + 8);
  if ( *(__int64 **)v18 != v17 || *v19 != (__int64 *)v18 )
    __fastfail(3u);
  v20 = v17[1];
  v17[1] = (__int64)v19;
  *v19 = v17;
  if ( a6 )
  {
    v22 = (_QWORD *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      __fastfail(3u);
    *(_QWORD *)v18 = v22;
    *(_QWORD *)(v18 + 8) = v17;
    v22[1] = v18;
    *v17 = v18;
    if ( !(unsigned int)MiBeginLargePageAccessor(a6, v18) )
      v20 = 0LL;
    v21 = 1;
  }
  else
  {
    v21 = MiUnlinkNodeLargePageHelper(v7, v18, (unsigned int)v8, (unsigned int)v12);
  }
  KxReleaseQueuedSpinLock(v23);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v21 )
  {
    MiInsertLargePageInFreeOrZeroList(v18, v8, 1);
    v20 = 0LL;
  }
  __writecr8(CurrentIrql);
  return v20;
}
