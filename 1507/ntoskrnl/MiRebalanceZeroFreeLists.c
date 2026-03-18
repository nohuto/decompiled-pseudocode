/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x14022E06C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiFreeZeroPagesNeeded @ 0x14022D920 (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *P)
{
  unsigned __int16 v1; // dx
  unsigned int v2; // r12d
  __int64 v3; // rax
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  _BYTE *v7; // r15
  unsigned int v8; // esi
  __int64 v9; // rbp
  BOOL v10; // r13d
  __int64 v11; // rax
  ULONG_PTR v12; // r15
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  _BYTE *v19; // [rsp+80h] [rbp+8h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp+10h]

  v1 = KeNumberNodes;
  v2 = 0;
  v3 = P[5];
  v5 = 0;
  if ( KeNumberNodes )
  {
    v6 = MmNumberOfChannels;
    v7 = (_BYTE *)(v3 + 1296);
    v19 = (_BYTE *)(v3 + 1296);
    do
    {
      v8 = 0;
      if ( v6 )
      {
        do
        {
          v9 = MiFreeZeroPagesNeeded((__int64)P, v5, v8);
          if ( v9 )
          {
            v10 = (*v7 & 1) == 0;
            do
            {
              v11 = MiRemoveLowestPriorityStandbyPage((__int64)P, 8u);
              v12 = v11;
              if ( v11 == -1 )
                break;
              --v9;
              v13 = 48 * v11 - 0x58000000000LL;
              v14 = *(_QWORD *)(v13 + 40);
              v15 = (v14 >> 36) & 3;
              v16 = v14 >> 58;
              if ( (_DWORD)v16 != v5 || (_DWORD)v15 != v8 && !v10 )
              {
                if ( MiFreeZeroPagesNeeded((__int64)P, v16, v15) )
                {
                  ++v9;
                }
                else
                {
                  v17 = MiSwapNumaStandbyPage(v12, v5, v8, 16LL);
                  if ( v17 == v12 )
                  {
                    v9 = 0LL;
                  }
                  else
                  {
                    v12 = v17;
                    v13 = 48 * v17 - 0x58000000000LL;
                  }
                }
              }
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v2);
                }
                while ( *(__int64 *)(v13 + 24) < 0 );
              }
              *(_QWORD *)(v13 + 24) |= 0x4000000000000000uLL;
              MiInsertPageInFreeOrZeroedList(v12, 2);
              _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              v2 = 0;
            }
            while ( v9 );
            v6 = MmNumberOfChannels;
            v7 = v19;
          }
          ++v8;
        }
        while ( v8 < v6 );
        v1 = KeNumberNodes;
      }
      v7 += 1336;
      ++v5;
      v19 = v7;
    }
    while ( v5 < v1 );
  }
  KeAcquireInStackQueuedSpinLock(&qword_14034F0A0, &LockHandle);
  P[606] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  MiDereferencePartition(P);
}
