/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400DC414
 * Callers:
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiEnumerateLeafPtes @ 0x1400DCA4C (MiEnumerateLeafPtes.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400DCDD0 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400DCE20 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400DCE70 (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1400DDB48 (MiGetKernelStackSwapSupport.c)
 *     SmStoreExistsForProcess @ 0x1400F0054 (SmStoreExistsForProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14040A338 (MiReserveWorkingSetSwapSpace.c)
 *     SmStoreSetProcessVaRanges @ 0x1404FAF38 (SmStoreSetProcessVaRanges.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1404FB058 (MiFreeReservationRuns.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404FB0F8 (MiFreeWorkingSetSwapContext.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406A93C8 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(char *Process, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  char *v4; // r15
  char v5; // bl
  unsigned __int64 v6; // r12
  unsigned __int16 v7; // cx
  __int16 *v8; // r14
  unsigned int BestOutswapPagefile; // r13d
  PVOID *PoolWithTag; // rax
  PVOID *v11; // r12
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rsi
  volatile signed __int32 *v16; // r15
  unsigned __int8 CurrentIrql; // r14
  unsigned int v18; // esi
  signed __int32 v19; // edx
  _QWORD *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r14d
  unsigned __int64 v23; // rax
  __int64 WorkingSetSwapSupport; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // r13
  PEPROCESS v28; // r14
  PVOID v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // r8d
  __int64 v35; // r14
  unsigned int v36; // r14d
  volatile signed __int32 *v37; // r8
  signed __int32 v38; // edx
  _QWORD *v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  _QWORD *v42; // rcx
  int v43; // esi
  unsigned __int8 v44; // r13
  unsigned int v45; // r14d
  signed __int32 v46; // eax
  __int64 v47; // rcx
  __int16 v48; // ax
  PVOID v49; // rdi
  __int64 v51; // rax
  __int64 v52; // rsi
  char *v53; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v54; // [rsp+40h] [rbp-C8h]
  __int16 *v55; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *v59; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  volatile signed __int32 *v61; // [rsp+78h] [rbp-90h]
  _QWORD v62[18]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v63; // [rsp+118h] [rbp+10h]
  __int64 v64; // [rsp+120h] [rbp+18h]
  __int64 v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  int v67; // [rsp+138h] [rbp+30h]
  void *retaddr; // [rsp+170h] [rbp+68h]

  CurrentThread = KeGetCurrentThread();
  LODWORD(v58) = a2;
  v4 = Process;
  v59 = CurrentThread;
  v53 = Process + 1272;
  P = 0LL;
  v54 = 0LL;
  v5 = 0;
  v6 = 0LL;
  memset(v62, 0, sizeof(v62));
  v7 = *((_WORD *)v4 + 726);
  LODWORD(v63) = a2 != 0;
  v55 = MiPartitionIdToPointer(v7);
  v8 = v55;
  if ( (unsigned int)SmStoreExistsForProcess(v4) )
  {
    LODWORD(v62[14]) = -1;
    v5 = 2;
    LODWORD(v63) = v63 | 4;
  }
  EtwTraceWorkingSetSwap((PEPROCESS)v4);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v55, &v57);
  if ( BestOutswapPagefile == 16 )
  {
    v43 = -1073741497;
  }
  else
  {
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v5 |= 1u;
      --CurrentThread->SpecialApcDisable;
      v13 = KeAbPreAcquire((ULONG_PTR)(v55 + 508), 0LL, 0LL, v12);
      v15 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v55 + 254, 0LL) )
        ExfAcquirePushLockExclusiveEx(v55 + 508, v13, v55 + 508);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      v16 = (volatile signed __int32 *)(v55 + 512);
      v61 = (volatile signed __int32 *)(v55 + 512);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v55 + 512);
      }
      else
      {
        v18 = 0;
        if ( _interlockedbittestandset(v16, 0x1Fu) )
          v18 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
        while ( 1 )
        {
          v19 = *v16;
          if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v19 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v16, v19 | 0x40000000, v19);
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
      }
      v20 = v53;
      v21 = *((_QWORD *)v53 + 29);
      if ( v21 )
      {
        if ( v21 == 1 )
        {
          v43 = -1073740682;
        }
        else
        {
          v43 = -1073741791;
          if ( v21 == 2 )
            v43 = -1073741558;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        else
          *v16 = 0;
        __writecr8(CurrentIrql);
        v8 = v55;
      }
      else
      {
        *((_QWORD *)v53 + 29) = 1LL;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        else
          *v16 = 0;
        __writecr8(CurrentIrql);
        v22 = v57;
        while ( 1 )
        {
          v23 = v20[14];
          v54 = v23;
          if ( !v23 )
          {
            v43 = -1073741779;
            goto LABEL_47;
          }
          if ( LODWORD(v62[14]) == -1 )
            goto LABEL_19;
          v43 = MiReserveWorkingSetSwapSpace(v55, &v62[4], v14, BestOutswapPagefile, v22, v23);
          if ( v43 >= 0 )
            break;
          if ( v22 >= 0x10 )
            goto LABEL_47;
          BestOutswapPagefile = v22;
          v43 = MiExtendWorkingSetSwapPagefile(v55, v54, v22);
          if ( v43 < 0 )
            goto LABEL_47;
          v20 = v53;
        }
        v20 = v53;
        v23 = v54;
LABEL_19:
        WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v23);
        *v11 = (PVOID)WorkingSetSwapSupport;
        if ( !WorkingSetSwapSupport )
          goto LABEL_98;
        v27 = 0LL;
        if ( !(_DWORD)v58 )
          goto LABEL_21;
        v27 = v20[15] - v20[16];
        if ( v27 > v20[15] )
          v27 = v20[15];
        if ( v27 && (v51 = MiAllocateWorkingSetSwapSupport(v27), (v11[1] = (PVOID)v51) == 0LL) )
        {
LABEL_98:
          v43 = -1073741670;
        }
        else
        {
LABEL_21:
          v28 = (PEPROCESS)Process;
          v62[0] = *v11;
          v29 = v11[1];
          v62[2] = v20;
          v30 = (__int64)v59;
          v62[1] = v29;
          LOCK_ADDRESS_SPACE_SHARED((__int64)v59, (__int64)Process, v25, v26);
          if ( (*((_DWORD *)Process + 193) & 0x20) != 0 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED(v30, (__int64)Process);
            v43 = -1073741558;
          }
          else
          {
            v31 = (_QWORD *)*((_QWORD *)Process + 193);
            v32 = 0LL;
            while ( v31 )
            {
              v32 = (unsigned __int64)v31;
              v31 = (_QWORD *)*v31;
            }
            if ( v32 )
            {
              v33 = (__int64)v53;
              while ( MiVadMapsLargeImage(v32) || ((1 << (*(_BYTE *)(v32 + 48) & 7)) & 0x55) == 0 )
              {
LABEL_36:
                v39 = *(_QWORD **)(v32 + 8);
                v40 = v32;
                if ( v39 )
                {
                  do
                  {
                    v32 = (unsigned __int64)v39;
                    v39 = (_QWORD *)*v39;
                  }
                  while ( v39 );
                }
                else
                {
                  while ( 1 )
                  {
                    v32 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                    if ( !v32 || *(_QWORD *)v32 == v40 )
                      break;
                    v40 = v32;
                  }
                }
                if ( !v32 )
                {
                  v16 = v61;
                  v28 = (PEPROCESS)Process;
                  goto LABEL_40;
                }
              }
              v35 = KeGetCurrentIrql();
              v58 = v35;
              __writecr8(2uLL);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v33);
              }
              else
              {
                v36 = v34;
                v37 = (volatile signed __int32 *)v53;
                if ( _interlockedbittestandset((volatile signed __int32 *)v53, 0x1Fu) )
                {
                  v36 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v53);
                  goto LABEL_74;
                }
                while ( 1 )
                {
                  v38 = *v37;
                  if ( (*v37 & 0xBFFFFFFF) == 0x80000000 )
                    break;
                  if ( (v38 & 0x40000000) == 0 )
                    _InterlockedCompareExchange(v37, v38 | 0x40000000, v38);
                  if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  {
                    _mm_pause();
                  }
                  else
                  {
                    HvlNotifyLongSpinWait(v36);
LABEL_74:
                    v37 = (volatile signed __int32 *)v53;
                  }
                }
                LOBYTE(v35) = v58;
                v33 = (__int64)v53;
              }
              LOBYTE(v62[3]) = v35;
              if ( *(int *)(v32 + 48) >= 0 )
              {
                MiEnumerateLeafPtes(
                  (*(unsigned int *)(v32 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 32) << 32)) << 12,
                  (*(unsigned int *)(v32 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32)) << 12,
                  MiOutSwapWorkingSetCallback,
                  v62);
                LOBYTE(v35) = v62[3];
              }
              MiUnlockWorkingSetExclusive(v33, v35);
              goto LABEL_36;
            }
LABEL_40:
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v59, (__int64)v28);
            if ( *((_QWORD *)*v11 + 2) < v54 )
            {
              v41 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
              if ( v41 )
              {
                ExFreePoolWithTag(*v11, 0);
                *v11 = (PVOID)v41;
              }
            }
            v42 = v11[1];
            if ( v42 )
            {
              if ( v42[2] < v27 )
              {
                v52 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
                if ( v52 )
                {
                  ExFreePoolWithTag(v11[1], 0);
                  v11[1] = (PVOID)v52;
                }
              }
            }
            v54 = *((_QWORD *)*v11 + 3);
            MiGetKernelStackSwapSupport(v11, v28);
            if ( (v5 & 2) != 0 )
              P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v11);
            v5 |= 4u;
            v43 = 0;
          }
        }
LABEL_47:
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
        }
        else
        {
          v45 = 0;
          if ( _interlockedbittestandset(v16, 0x1Fu) )
            v45 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
          while ( 1 )
          {
            v46 = *v16;
            if ( (*v16 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v46 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v16, v46 | 0x40000000, v46);
            if ( (++v45 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v45);
          }
        }
        if ( *((_QWORD *)v53 + 29) == 1LL )
        {
          if ( (v5 & 4) != 0 )
          {
            *((_QWORD *)v53 + 29) = v11;
            v43 = 0;
            v11 = 0LL;
          }
          else
          {
            *((_QWORD *)v53 + 29) = 0LL;
          }
        }
        else
        {
          v43 = -1073741558;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        else
          *v16 = 0;
        __writecr8(v44);
        v8 = v55;
        MiFreeReservationRuns(v55, &v62[4]);
      }
      if ( v11 )
        MiFreeWorkingSetSwapContext(v8, v11);
      v4 = Process;
    }
    else
    {
      v43 = -1073741670;
    }
    v6 = v54;
  }
  if ( (v5 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 127, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 508);
    KeAbPostRelease((ULONG_PTR)(v8 + 508));
    v47 = (__int64)v59;
    v48 = v59->SpecialApcDisable + 1;
    v59->SpecialApcDisable = v48;
    if ( !v48 && *(_QWORD *)(v47 + 152) != v47 + 152 )
      KiCheckForKernelApcDelivery(v47);
  }
  v49 = P;
  if ( P )
  {
    if ( (v5 & 4) != 0 )
      SmStoreSetProcessVaRanges(*(void **)P);
    ExFreePoolWithTag(v49, 0);
  }
  v64 = v62[15];
  v65 = v62[16];
  v66 = v62[17];
  v67 = v43;
  v63 = v6;
  EtwTraceWorkingSetSwap((PEPROCESS)v4);
  return (unsigned int)v43;
}
