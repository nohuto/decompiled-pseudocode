/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1400A6788
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013DCFC (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  v10 = *(_QWORD **)(a1 + 16);
  while ( v10 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v11 = (__int64)v10;
    v10 = (_QWORD *)v10[1];
    if ( *(_BYTE *)(v11 + 16) == 3 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 436LL) < (unsigned int)v8 )
        break;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v10 != v11 )
        __fastfail(3u);
      *v10 = v12;
      *(_QWORD *)(v12 + 8) = v10;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
  return v4;
}
