/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1401E424C
 * Callers:
 *     <none>
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeZeroPagesNeeded @ 0x1401E3BDC (MiFreeZeroPagesNeeded.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *P)
{
  __int64 v1; // rdi
  unsigned int v3; // r14d
  unsigned __int16 v4; // cx
  unsigned int v5; // ebx
  _BYTE *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // r15
  BOOL v9; // r13d
  __int64 v10; // rax
  ULONG_PTR v11; // r12
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _BYTE *v19; // [rsp+70h] [rbp+8h]

  v1 = P[5];
  v3 = 0;
  v4 = KeNumberNodes;
  if ( KeNumberNodes )
  {
    v5 = MmNumberOfChannels;
    v6 = (_BYTE *)(v1 + 1296);
    v19 = v6;
    do
    {
      v7 = 0;
      if ( v5 )
      {
        do
        {
          v8 = MiFreeZeroPagesNeeded((__int64)P, v3, v7);
          if ( v8 )
          {
            v9 = (*v6 & 1) == 0;
            do
            {
              v10 = MiRemoveLowestPriorityStandbyPage((__int64)P, 8u, 0);
              v11 = v10;
              if ( v10 == -1 )
                break;
              --v8;
              v12 = 48 * v10 - 0x58000000000LL;
              v13 = *(_QWORD *)(v12 + 40);
              v14 = (v13 >> 36) & 3;
              v15 = v13 >> 58;
              if ( (_DWORD)v15 != v3 || (_DWORD)v14 != v7 && !v9 )
              {
                if ( MiFreeZeroPagesNeeded((__int64)P, v15, v14) )
                {
                  ++v8;
                }
                else
                {
                  v16 = MiSwapNumaStandbyPage(v11, v3, v7, 16LL, LockHandle.LockQueue.Next);
                  if ( v16 == v11 )
                  {
                    v8 = 0LL;
                  }
                  else
                  {
                    v11 = v16;
                    v12 = 48 * v16 - 0x58000000000LL;
                  }
                }
              }
              v17 = (unsigned __int8)MiLockPageInline(v12);
              *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
              MiInsertPageInFreeOrZeroedList(v11, 2uLL);
              _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v17);
            }
            while ( v8 );
            v5 = MmNumberOfChannels;
            v6 = v19;
          }
          ++v7;
        }
        while ( v7 < v5 );
        v4 = KeNumberNodes;
      }
      v6 += 1336;
      ++v3;
      v19 = v6;
    }
    while ( v3 < v4 );
  }
  KeAcquireInStackQueuedSpinLock(&qword_1402FEBE0, &LockHandle);
  P[647] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  MiDereferencePartition(P);
}
