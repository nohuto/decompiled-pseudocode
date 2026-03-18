/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1400C6848
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v5; // r15d
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v4 = 0;
  v5 = a3;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64;
  v9 = v8 >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v8, a3);
  v11 = *(_QWORD **)(a1 + 8);
  while ( v11 != (_QWORD *)(a1 + 8) && v4 < v5 )
  {
    v12 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    if ( *(_BYTE *)(v12 + 16) == 1 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v12 + 24) + 436LL) < (unsigned int)v9 )
        break;
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD **)(v12 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v12, 258LL, 0LL) )
        ++v4;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
  return v4;
}
