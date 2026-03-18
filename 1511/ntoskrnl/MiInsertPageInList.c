/*
 * XREFs of MiInsertPageInList @ 0x14003DC20
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiCreateDecayPfn @ 0x140011C44 (MiCreateDecayPfn.c)
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     MiReservePageFileSpaceForPage @ 0x140036B60 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiBuildReservationCluster @ 0x140109354 (MiBuildReservationCluster.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1401D2094 (MmMarkPhysicalMemoryAsBad.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x1400E11BC (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __fastcall MiInsertPageInList(__int64 a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned __int16 v4; // ax
  int *v5; // rdi
  int *v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int8 v8; // al
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r10
  unsigned __int64 v21; // r8
  unsigned __int16 v22; // ax
  int *v23; // r11
  _QWORD *v24; // r10
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rcx
  unsigned __int64 *v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  int *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  KSPIN_LOCK *v42; // rcx
  signed __int32 v43[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+50h] [rbp-28h] BYREF
  int v49; // [rsp+A0h] [rbp+28h]
  __int64 v51; // [rsp+B0h] [rbp+38h]
  int *v52; // [rsp+B8h] [rbp+40h]
  unsigned __int64 v53; // [rsp+B8h] [rbp+40h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v4 = ((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF;
  if ( v4 == 1023 )
    v5 = &MiSystemPartition;
  else
    v5 = *(int **)(qword_1402FEC28 + 8LL * v4);
  v52 = v5;
  if ( (a2 & 4) != 0 )
  {
    v6 = v5 + 448;
  }
  else if ( (a2 & 8) != 0 )
  {
    v6 = v5 + 1504;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    v6 = v5 + 1520;
  }
  else
  {
    v6 = v5 + 896;
    if ( (a2 & 0x100) == 0 )
      v6 = v5 + 880;
  }
  v49 = v6[2];
  v44 = (a1 + 0x58000000000LL) / 48;
  _InterlockedOr(v43, 0);
  v7 = (*(_QWORD *)(a1 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v45 = 0LL;
  *(_QWORD *)(a1 + 24) ^= v7;
  v51 = 0LL;
  switch ( v49 )
  {
    case 2:
      v8 = *(_BYTE *)(a1 + 35);
      if ( (v8 & 0x40) != 0 )
      {
        MiRestoreTransitionPte(a1, 0LL);
        MiInsertPageInList(a1, 32LL, v33, v34);
        return;
      }
      v9 = *(_QWORD *)(a1 + 40);
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        if ( (v9 & 0x10000000000000LL) == 0 )
        {
LABEL_9:
          v10 = v8;
          LOBYTE(v10) = (v8 & 8) != 0;
          if ( (v8 & 8) != 0 )
            v11 = 5LL;
          else
            v11 = *(_BYTE *)(a1 + 35) & 7;
          v6 = &v5[8 * v11 + 464 + 2 * v11];
          if ( (_BYTE)v10 )
          {
LABEL_17:
            if ( (v3 & 0x80u) == 0LL )
            {
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 8);
              LockHandle.LockQueue.Next = 0LL;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented(&LockHandle);
              }
              else if ( _InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&LockHandle) )
              {
                KxWaitForLockOwnerShip(&LockHandle);
              }
            }
            break;
          }
          if ( (v9 & 0x200000000000000LL) != 0 )
            _InterlockedIncrement64(&qword_1402FEF40);
          else
            _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
          v12 = 1;
          v13 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 736);
          v46 = v13;
          if ( v13 > 0x420 )
          {
LABEL_15:
            v14 = v13 - 1;
            if ( v14 == *((_QWORD *)v5 + 541) || v14 == *((_QWORD *)v5 + 542) )
            {
              MiUpdateAvailableEvents(v5, v10, v3);
              LOBYTE(v3) = a2;
            }
            goto LABEL_17;
          }
          if ( v13 != 160 )
          {
            if ( v13 == 1056 )
            {
              v12 = 2;
            }
            else
            {
              if ( v13 != 34 )
                goto LABEL_15;
              v12 = 0;
            }
          }
          v35 = &v5[8 * v12];
          KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v52 + 528, &v48);
          KeSetEvent((PRKEVENT)(v35 + 1058), 0, 0);
          ++v35[1064];
          KxReleaseQueuedSpinLock(&v48, v36, v37, v38);
          v3 = a2;
          v13 = v46;
          v5 = v52;
          goto LABEL_15;
        }
      }
      else if ( (v9 & 0x10000000000000LL) == 0 )
      {
        goto LABEL_9;
      }
      if ( (v9 & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_1402FEF40);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
      return;
    case 3:
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_1402FEF40);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      goto LABEL_43;
    case 4:
      v51 = *(_QWORD *)(*(__int64 *)(a1 + 16) >> 16);
      if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64(&qword_1402FEF40);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 544);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v6 + 4, &LockHandle);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v51 + 72));
      if ( (*(_DWORD *)(v51 + 56) & 8) == 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v51 + 72));
        KxReleaseQueuedSpinLock(&LockHandle, v39, v40, v41);
        LOBYTE(v3) = a2;
        v51 = 0LL;
        v49 = 3;
LABEL_43:
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 752);
        if ( (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
        {
          v31 = *(unsigned int *)(*((_QWORD *)v5 + 702) + 24LL) + 72LL;
          LockHandle.LockQueue.Next = 0LL;
          v6 = &v5[10 * v31];
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 8);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&LockHandle);
          }
          else if ( _InterlockedExchange64((volatile __int64 *)v6 + 4, (__int64)&LockHandle) )
          {
            KxWaitForLockOwnerShip(&LockHandle);
          }
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((((char *)v6 - (char *)v5 - 2880) / 40) << 58);
        }
        else
        {
          if ( (v3 & 0x80u) == 0LL )
          {
            v32 = (unsigned __int64 *)(v6 + 8);
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = v32;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented(&LockHandle);
            }
            else if ( _InterlockedExchange64((volatile __int64 *)v32, (__int64)&LockHandle) )
            {
              KxWaitForLockOwnerShip(&LockHandle);
            }
          }
          v27 = *(_QWORD *)(a1 + 16);
          v28 = v27 >> 12;
          v29 = (v27 >> 1) & 0xF;
          if ( (v28 & 1) != 0 || (_DWORD)v29 == v5[269] )
            v6 = &v5[10 * (unsigned int)v29 + 560];
          else
            v6 = v5 + 544;
          if ( !*(_QWORD *)v6 )
            LODWORD(v45) = 1;
          ++*((_QWORD *)v5 + 766);
        }
        CurrentThread = KeGetCurrentThread();
        ++LODWORD(CurrentThread->ApcState.Process[2].Affinity.Bitmap[2]);
        if ( *((_QWORD *)v5 + 736) < 0x420uLL )
        {
          v53 = *((_QWORD *)v5 + 766);
          if ( v53 >= 0x10 )
            MiWakeModifiedPageWriter(v5, -1LL);
          if ( *((_QWORD *)v5 + 752) - v53 >= 0x10 )
            KeSetEvent((PRKEVENT)(v5 + 178), 0, 0);
        }
      }
      break;
    default:
      if ( (a2 & 0x100) != 0 )
      {
        v42 = (KSPIN_LOCK *)(v5 + 904);
      }
      else
      {
        MiClearPfnImageVerified(a1, 12LL);
        v42 = (KSPIN_LOCK *)(v5 + 888);
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v42, &LockHandle);
      *(_QWORD *)(a1 + 8) = -4LL;
      break;
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    MiInsertDecayClusterTimer(a1);
  else
    ++*(_QWORD *)v6;
  v15 = *((_QWORD *)v6 + 3);
  v16 = 0xFFFFFFFFFLL;
  v17 = v44;
  if ( v15 == 0xFFFFFFFFFLL )
    *((_QWORD *)v6 + 2) = v44;
  else
    *(_QWORD *)(48 * v15 - 0x58000000000LL) ^= (v44 ^ *(_QWORD *)(48 * v15 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ v49) & 7;
  *((_QWORD *)v6 + 3) = v17;
  v18 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 24) ^= (v15 ^ v18) & 0xFFFFFFFFFLL;
  if ( v49 == 2 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 40);
    v20 = *(_BYTE *)(a1 + 35) & 7;
    v21 = v19 >> 58;
    v22 = (HIDWORD(v19) >> 8) & 0x3FF;
    if ( v22 == 1023 )
      v23 = &MiSystemPartition;
    else
      v23 = *(int **)(qword_1402FEC28 + 8LL * v22);
    v15 = 3 * (v20 + 8 * ((*(_QWORD *)(a1 + 40) >> 36) & 3LL));
    v24 = (_QWORD *)(*((_QWORD *)v23 + 5)
                   + 1336LL * (unsigned int)v21
                   + 24 * (v20 + 8 * ((*(_QWORD *)(a1 + 40) >> 36) & 3LL)));
    ++v24[50];
    v25 = v24[52];
    if ( v25 == 0xFFFFFFFFFLL )
    {
      v24[51] = v17;
    }
    else
    {
      v15 = 48 * v25 - 0x58000000000LL;
      v26 = (*(_QWORD *)v15 ^ (v17 << 28)) & 0xFFFFFFFFFLL;
      *(_BYTE *)(v15 + 39) = v17;
      *(_QWORD *)v15 = (v17 << 28) ^ v26;
    }
    *(_WORD *)(a1 + 36) = v25;
    *(_QWORD *)a1 |= 0xFFFFFFF000000000uLL;
    v16 = (*(_QWORD *)(a1 + 24) ^ (v25 << 20)) & 0xFFFFF000000000LL;
    *(_BYTE *)(a1 + 39) = -1;
    *(_QWORD *)(a1 + 24) ^= v16;
    v24[52] = v17;
  }
  if ( v51 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v51 + 72));
  if ( (a2 & 0x80u) == 0 )
    KxReleaseQueuedSpinLock(&LockHandle, v15, v16, v17);
  if ( (_DWORD)v45 )
    KeSetEvent((PRKEVENT)(v5 + 200), 0, 0);
}
