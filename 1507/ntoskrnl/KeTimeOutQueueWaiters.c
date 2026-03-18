/*
 * XREFs of KeTimeOutQueueWaiters @ 0x140120854
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1401654EC (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebp
  int v6; // r13d
  volatile CCHAR v7; // cl
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v10; // edi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v4 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = KeNumberProcessorsGroup0[1];
  v8 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v11 = *(_QWORD **)(a1 + 8);
  while ( v11 != (_QWORD *)(a1 + 8) && v4 < a3 )
  {
    v12 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    if ( *(_BYTE *)(v12 + 16) == 1 )
    {
      if ( v6 - *(_DWORD *)(*(_QWORD *)(v12 + 24) + 436LL) < (unsigned int)v8 )
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
  KiExitDispatcher((signed __int64)KeGetCurrentPrcb(), 0, 1u, 0, CurrentIrql);
  return v4;
}
