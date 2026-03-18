/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x140118AF4
 * Callers:
 *     KeSetIdealProcessorThread @ 0x140043D40 (KeSetIdealProcessorThread.c)
 *     MiZeroInParallelWorker @ 0x1400757C8 (MiZeroInParallelWorker.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140138144 (KeSetIdealProcessorThreadByNumber.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // edi
  int v10; // edi
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int64 *v14; // [rsp+60h] [rbp+18h] BYREF

  v6 = -1073741823;
  v7 = KiProcessorBlock[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 588);
    if ( *(unsigned __int8 *)(v7 + 1616) == *(_WORD *)(a1 + 584)
      && (*(_QWORD *)(v7 + 1608) & *(_QWORD *)(a1 + 576)) != 0LL )
    {
      KiAcquireThreadStateLock(a1, &v13, (volatile signed __int32 **)&v14);
      v11 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = a2;
      if ( (v11 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = a2;
      KiUpdateSharedReadyQueueAffinityThread(v7, a1);
      if ( v13 )
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
      if ( v14 )
        _InterlockedAnd64(v14, 0LL);
      goto LABEL_22;
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 196);
    if ( *(unsigned __int8 *)(v7 + 1616) == *(_WORD *)(a1 + 560)
      && (*(_QWORD *)(v7 + 1608) & *(_QWORD *)(a1 + 552)) != 0LL )
    {
      *(_DWORD *)(a1 + 196) = a2;
LABEL_22:
      v6 = 0;
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = v10;
  return v6;
}
