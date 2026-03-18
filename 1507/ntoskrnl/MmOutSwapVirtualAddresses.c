/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x14022CC40
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140259E80 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiEnumerateLeafPtes @ 0x1400DCA4C (MiEnumerateLeafPtes.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400DCDD0 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400DCE20 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400DCE70 (MiFindBestOutswapPagefile.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14040A338 (MiReserveWorkingSetSwapSpace.c)
 *     EtwTraceWorkingSetSwap @ 0x1404FAFD8 (EtwTraceWorkingSetSwap.c)
 *     MiFreeReservationRuns @ 0x1404FB058 (MiFreeReservationRuns.c)
 *     MiValidateMemoryRangeEntries @ 0x1404FBB44 (MiValidateMemoryRangeEntries.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406A93C8 (MiExtendWorkingSetSwapPagefile.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int16 v7; // cx
  __int16 *v9; // rsi
  volatile signed __int64 *v11; // r12
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  int v19; // edi
  struct _KPROCESS *v20; // r14
  __int16 v21; // ax
  _QWORD *WorkingSetSwapSupport; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdi
  volatile signed __int32 *v26; // r14
  unsigned __int64 *v27; // rbx
  int *Address; // rax
  unsigned __int64 v29; // rcx
  unsigned __int8 CurrentIrql; // si
  unsigned int v31; // esi
  signed __int32 v32; // eax
  __int64 v33; // rsi
  unsigned __int8 v36; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  int *v38; // [rsp+48h] [rbp-B8h]
  __int16 *v39; // [rsp+50h] [rbp-B0h]
  unsigned int v40; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v41; // [rsp+60h] [rbp-A0h]
  _QWORD *v42; // [rsp+68h] [rbp-98h]
  _QWORD *v43; // [rsp+70h] [rbp-90h]
  unsigned __int64 v44; // [rsp+78h] [rbp-88h]
  _QWORD v45[18]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+130h] [rbp+30h]

  CurrentThread = KeGetCurrentThread();
  v7 = WORD2(Process[1].SecurePid);
  v42 = a4;
  v39 = MiPartitionIdToPointer(v7);
  v9 = v39;
  LODWORD(v38) = MiFindBestOutswapPagefile();
  if ( (_DWORD)v38 == 16 )
    return 3221225799LL;
  LODWORD(v46) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v37);
  memset(v45, 0, sizeof(v45));
  --CurrentThread->SpecialApcDisable;
  v11 = (volatile signed __int64 *)(v9 + 508);
  v41 = (volatile signed __int64 *)(v9 + 508);
  v13 = KeAbPreAcquire((ULONG_PTR)(v9 + 508), 0LL, 0LL, v12);
  v16 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9 + 254, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v9 + 127, v13, (ULONG_PTR)(v9 + 508), v15);
  if ( v16 )
    *(_BYTE *)(v16 + 26) |= 1u;
  v17 = v40;
  v18 = v37;
  while ( 1 )
  {
    v19 = MiReserveWorkingSetSwapSpace(v39, &v45[4], v14, (unsigned int)v38, v17, v18);
    if ( v19 >= 0 )
      break;
    if ( v17 < 0x10 )
    {
      LODWORD(v38) = v17;
      v19 = MiExtendWorkingSetSwapPagefile(v39, v18, v17);
      if ( v19 >= 0 )
        continue;
    }
    goto LABEL_11;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v18);
  v43 = WorkingSetSwapSupport;
  v25 = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
  {
    v19 = -1073741670;
LABEL_11:
    v20 = Process;
    goto LABEL_12;
  }
  v45[0] = WorkingSetSwapSupport;
  v26 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  v45[2] = (char *)Process + 1272;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process, v23, v24);
  if ( a2 < &a2[2 * a3] )
  {
    v27 = &a2[2 * a3];
    do
    {
      Address = (int *)MiLocateAddress(*a2);
      v38 = Address;
      if ( Address )
      {
        if ( (Address[12] & 0x8007) == 0x8000 )
        {
          v29 = (unsigned int)Address[7] | ((unsigned __int64)*((unsigned __int8 *)Address + 33) << 32);
          v44 = *a2 - 1 + a2[1];
          if ( v29 >= v44 >> 12 )
          {
            CurrentIrql = KeGetCurrentIrql();
            v36 = CurrentIrql;
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26);
            }
            else
            {
              v31 = 0;
              if ( _interlockedbittestandset(v26, 0x1Fu) )
                v31 = ExpWaitForSpinLockExclusiveAndAcquire(v26);
              while ( 1 )
              {
                v32 = *v26;
                if ( (*v26 & 0xBFFFFFFF) == 0x80000000 )
                  break;
                if ( (v32 & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v26, v32 | 0x40000000, v32);
                if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v31);
              }
              CurrentIrql = v36;
            }
            LOBYTE(v45[3]) = CurrentIrql;
            if ( v38[12] >= 0 )
            {
              MiEnumerateLeafPtes(
                *a2,
                v44,
                (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                (__int64)v45);
              CurrentIrql = v45[3];
            }
            MiUnlockWorkingSetExclusive((__int64)v26, CurrentIrql);
          }
        }
      }
      a2 += 2;
    }
    while ( a2 < v27 );
    v18 = v37;
    v25 = v43;
    v11 = v41;
  }
  v20 = Process;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
  if ( v25[2] < v18 )
  {
    v33 = MiReAllocateWorkingSetSwapSupport((__int64)v25);
    if ( v33 )
    {
      ExFreePoolWithTag(v25, 0);
      v25 = (_QWORD *)v33;
    }
  }
  v37 = v25[3];
  *v42 = v25;
  v19 = 0;
LABEL_12:
  MiFreeReservationRuns(v39, &v45[4]);
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v21 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v46 = v37;
  v47 = v45[15];
  v48 = v45[16];
  v49 = v45[17];
  v50 = v19;
  EtwTraceWorkingSetSwap(v20);
  return (unsigned int)v19;
}
