/*
 * XREFs of MiInsertPageInList @ 0x140069150
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x14001E510 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiPfnShareCountIsZero @ 0x140066260 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 *     MiCreateDecayPfn @ 0x140096EF0 (MiCreateDecayPfn.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     MiActOnPte @ 0x1400B9B18 (MiActOnPte.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401E2170 (MmMarkPhysicalMemoryAsBad.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5A88 (MmEnableModifiedWriteOfSection.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertDecayClusterTimer @ 0x1400991F0 (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x1401137B8 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

void __fastcall MiInsertPageInList(__int64 a1, unsigned int a2)
{
  char v3; // r8
  unsigned __int16 v4; // ax
  int *v5; // rsi
  int *v6; // rbx
  unsigned __int64 v7; // rcx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 *v16; // rbx
  _QWORD *v17; // rdx
  unsigned __int16 v18; // cx
  char v19; // al
  __int64 v20; // rcx
  _BOOL8 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  int *v29; // r9
  _QWORD *v30; // r9
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  signed __int32 v35[8]; // [rsp+0h] [rbp-78h] BYREF
  _BOOL8 v36; // [rsp+20h] [rbp-58h]
  int *v37; // [rsp+28h] [rbp-50h]
  unsigned __int64 v38; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF
  int v41; // [rsp+A0h] [rbp+28h]
  char v42; // [rsp+A8h] [rbp+30h]
  __int64 v43; // [rsp+B0h] [rbp+38h]
  __int64 v44; // [rsp+B8h] [rbp+40h]

  v42 = a2;
  memset(&v39, 0, sizeof(v39));
  v3 = a2;
  v4 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v4 == 1023 )
    v5 = MiSystemPartition;
  else
    v5 = *(int **)(qword_140327038 + 8LL * v4);
  if ( (a2 & 4) != 0 )
  {
    v6 = v5 + 480;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = v5 + 1808;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    v6 = v5 + 1824;
  }
  else
  {
    v6 = v5 + 928;
    if ( (a2 & 0x100) == 0 )
      v6 = v5 + 912;
  }
  v41 = v6[2];
  v44 = (a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v35, 0);
  v7 = (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v36 = 0LL;
  *(_QWORD *)(a1 + 24) ^= v7;
  v43 = 0LL;
  switch ( v41 )
  {
    case 2:
      v8 = *(_BYTE *)(a1 + 35);
      if ( (v8 & 0x40) != 0 )
      {
        MiRestoreTransitionPte(a1, 0LL, a2, 0LL);
        MiInsertPageInList(a1, 32LL);
        return;
      }
      v9 = *(_QWORD *)(a1 + 40);
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v9 & 0x10000000000000LL) == 0 )
          goto LABEL_17;
      }
      else if ( (v9 & 0x10000000000000LL) == 0 )
      {
LABEL_17:
        if ( (v8 & 8) != 0 )
          v10 = 5LL;
        else
          v10 = v8 & 7;
        v6 = &v5[8 * v10 + 496 + 2 * v10];
        v37 = v6;
        if ( (v8 & 8) != 0 )
        {
LABEL_39:
          if ( v42 >= 0 )
          {
            v39.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 8);
            v39.LockQueue.Next = 0LL;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v39, v6 + 8);
            }
            else
            {
              v15 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&v39);
              if ( v15 )
                KxWaitForLockOwnerShip((__int64)&v39, v15);
            }
          }
          break;
        }
        if ( (v9 & 0x200000000000000LL) != 0 )
          _InterlockedIncrement64(&qword_140327380);
        else
          _InterlockedIncrement64((volatile signed __int64 *)v5 + 560);
        v11 = 1;
        v12 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 808);
        v38 = v12;
        if ( v12 <= 0x420 )
        {
          switch ( v12 )
          {
            case 0xA0uLL:
LABEL_35:
              v13 = 8LL * v11;
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v5 + 544, &LockHandle);
              KeSetEvent((PRKEVENT)&v5[v13 + 1090], 0, 0);
              ++v5[v13 + 1096];
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
              v12 = v38;
              v6 = v37;
              break;
            case 0x420uLL:
              v11 = 2;
              goto LABEL_35;
            case 0x22uLL:
              v11 = 0;
              goto LABEL_35;
          }
        }
        v14 = v12 - 1;
        if ( v14 == *((_QWORD *)v5 + 557) || v14 == *((_QWORD *)v5 + 558) )
          MiUpdateAvailableEvents(v5);
        goto LABEL_39;
      }
      if ( (v9 & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_140327380);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 560);
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
      return;
    case 3:
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_140327380);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 560);
      goto LABEL_54;
    case 4:
      v43 = *(_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_140327380);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 560);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v6 + 4, &v39);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
      if ( (*(_DWORD *)(v43 + 56) & 8) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v39);
        v3 = v42;
        v43 = 0LL;
        v41 = 3;
LABEL_54:
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 904);
        if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
        {
          v22 = *(unsigned int *)(*((_QWORD *)v5 + 781) + 24LL);
          v39.LockQueue.Next = 0LL;
          v6 = &v5[8 * v22 + 752 + 2 * v22];
          v39.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 8);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v39, v6 + 8);
          }
          else
          {
            v23 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&v39);
            if ( v23 )
              KxWaitForLockOwnerShip((__int64)&v39, v23);
          }
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((((char *)v6 - (char *)v5 - 3008) / 40) << 58);
        }
        else
        {
          if ( v3 >= 0 )
          {
            v16 = (unsigned __int64 *)(v6 + 8);
            v39.LockQueue.Next = 0LL;
            v39.LockQueue.Lock = v16;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&v39, v16);
            }
            else
            {
              v17 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v16, (__int64)&v39);
              if ( v17 )
                KxWaitForLockOwnerShip((__int64)&v39, v17);
            }
          }
          v18 = *(_QWORD *)(a1 + 16);
          v19 = (unsigned __int8)v18 >> 1;
          v20 = v18 >> 12;
          if ( (v19 & 1) != 0 || (_DWORD)v20 == v5[265] )
            v6 = &v5[8 * v20 + 592 + 2 * v20];
          else
            v6 = v5 + 576;
          v21 = *(_QWORD *)v6 == 0LL;
          ++*((_QWORD *)v5 + 918);
          v36 = v21;
        }
        CurrentThread = KeGetCurrentThread();
        ++LODWORD(CurrentThread->ApcState.Process[2].Affinity.Bitmap[4]);
        if ( *((_QWORD *)v5 + 808) < 0x420uLL )
        {
          v38 = *((_QWORD *)v5 + 918);
          if ( v38 >= 0x10 )
            MiWakeModifiedPageWriter(v5, -1LL);
          if ( *((_QWORD *)v5 + 904) - v38 >= 0x10 )
            KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
        }
      }
      break;
    default:
      if ( (a2 & 0x100) != 0 )
      {
        v25 = (KSPIN_LOCK *)(v5 + 936);
      }
      else
      {
        MiClearPfnImageVerified(a1, 0xCu);
        v25 = (KSPIN_LOCK *)(v5 + 920);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v25, &v39);
      *(_QWORD *)(a1 + 8) = -4LL;
      break;
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    MiInsertDecayClusterTimer(a1);
  else
    ++*(_QWORD *)v6;
  v26 = *((_QWORD *)v6 + 3);
  if ( v26 == 0xFFFFFFFFFLL )
    *((_QWORD *)v6 + 2) = v44;
  else
    *(_QWORD *)(48 * v26 - 0x58000000000LL) ^= (v44 ^ *(_QWORD *)(48 * v26 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ v41) & 7;
  *((_QWORD *)v6 + 3) = v44;
  v27 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) ^= (v26 ^ v27) & 0xFFFFFFFFFLL;
  if ( v41 == 2 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    v28 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
    if ( v28 == 1023 )
      v29 = MiSystemPartition;
    else
      v29 = *(int **)(qword_140327038 + 8LL * v28);
    v30 = (_QWORD *)(*((_QWORD *)v29 + 6)
                   + 24
                   * ((*(_BYTE *)(a1 + 35) & 7)
                    + 91LL * (*(_QWORD *)(a1 + 40) >> 58)
                    + 8 * ((*(_QWORD *)(a1 + 40) >> 36) & 3LL)));
    ++v30[155];
    v31 = v30[157];
    if ( v31 == 0xFFFFFFFFFLL )
    {
      v30[156] = v44;
    }
    else
    {
      v32 = 48 * v31 - 0x58000000000LL;
      v33 = (*(_QWORD *)v32 ^ (v44 << 28)) & 0xFFFFFFFFFLL;
      *(_BYTE *)(v32 + 39) = v44;
      *(_QWORD *)v32 = (v44 << 28) ^ v33;
    }
    *(_WORD *)(a1 + 36) = v31;
    *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
    v34 = (*(_QWORD *)(a1 + 24) ^ (v31 << 20)) & 0xFFFFF000000000LL;
    *(_BYTE *)(a1 + 39) = -1;
    *(_QWORD *)(a1 + 24) ^= v34;
    v30[157] = v44;
  }
  if ( v43 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v43 + 72));
  if ( v42 >= 0 )
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v39);
  if ( v36 )
    KeSetEvent((PRKEVENT)v5 + 33, 0, 0);
}
