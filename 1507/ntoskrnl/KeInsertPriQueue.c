/*
 * XREFs of KeInsertPriQueue @ 0x140029C68
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x14000C440 (KiWakePriQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KeInsertPriQueue(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  char v9; // r12
  struct _KPRCB *CurrentPrcb; // r13
  unsigned int v11; // edi
  _KTHREAD *CurrentThread; // r14
  unsigned int v13; // ecx
  _DWORD *v14; // r9
  __int64 v15; // r8
  _QWORD *v16; // rax
  char CurrentIrql; // [rsp+60h] [rbp+8h]

  v5 = a3;
  v6 = a1 + 8;
  v7 = (_QWORD *)a2;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( *(_QWORD *)(v6 + 8) != v6
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v13 = 0;
    a2 = a1 + 664;
    v14 = (_DWORD *)(a1 + 664);
    v15 = 32LL;
    while ( 1 )
    {
      --v14;
      --v15;
      v13 += *v14;
      if ( v13 >= *(_DWORD *)a2 )
        break;
      if ( v15 <= v5 )
      {
        if ( v13 < *(_DWORD *)a2 )
        {
          v9 = KiWakePriQueueWaiter((__int64)CurrentPrcb, a1, (__int64)v7, v5);
          if ( v9 )
            goto LABEL_20;
        }
        break;
      }
    }
  }
  if ( (a5 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    a2 = 16 * v5 + a1 + 24;
    v16 = *(_QWORD **)(a2 + 8);
    *v7 = a2;
    v7[1] = v16;
    if ( *v16 != a2 )
      __fastfail(3u);
    *v16 = v7;
    *(_QWORD *)(a2 + 8) = v7;
  }
LABEL_20:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  LOBYTE(a2) = a5 & 1;
  KiExitDispatcher((_DWORD)CurrentPrcb, a2, 1, 0, CurrentIrql);
  return v9;
}
