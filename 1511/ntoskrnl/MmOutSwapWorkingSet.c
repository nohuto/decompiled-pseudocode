/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400F56B4
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1403EC57C (PspChangeProcessExecutionState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiEnumerateLeafPtes @ 0x14005E200 (MiEnumerateLeafPtes.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     SmStoreExistsForProcess @ 0x140092678 (SmStoreExistsForProcess.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiGetKernelStackSwapSupport @ 0x1400F55A8 (MiGetKernelStackSwapSupport.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400F5CA8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400F5CF8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400F5D48 (MiFindBestOutswapPagefile.c)
 *     MiUnlockWsSwapExclusive @ 0x1400F5E18 (MiUnlockWsSwapExclusive.c)
 *     MiLockWsSwapExclusive @ 0x1400F5E60 (MiLockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiFreeWorkingSetSwapContext @ 0x1403B5964 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404D0560 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 *     SmStoreSetProcessVaRanges @ 0x1404D066C (SmStoreSetProcessVaRanges.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14062ACF8 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14062ADF8 (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v2; // r15
  void **v5; // rsi
  char v6; // bl
  unsigned __int64 v7; // r14
  unsigned __int16 SignalState; // cx
  int *v9; // rdi
  unsigned int BestOutswapPagefile; // r12d
  PVOID *PoolWithTag; // rax
  PVOID *v12; // rsi
  KIRQL v13; // dl
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int64 v19; // r14
  struct _KTHREAD *v20; // r12
  _QWORD *v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rcx
  int v29; // edi
  volatile LONG *v30; // r12
  KIRQL v31; // al
  int *v32; // r15
  __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  int *v37; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+48h] [rbp-C0h]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A8h]
  _QWORD v42[18]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int v47; // [rsp+118h] [rbp+10h]

  v2 = &Process[1].IdealNode[12];
  LODWORD(v39) = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  v7 = 0LL;
  memset(v42, 0, sizeof(v42));
  SignalState = Process[2].Header.SignalState;
  LODWORD(v43) = a2 != 0;
  v37 = MiPartitionIdToPointer(SignalState);
  v9 = v37;
  if ( SmStoreExistsForProcess() )
  {
    LODWORD(v42[14]) = -1;
    v6 = 2;
    LODWORD(v43) = v43 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile(v37, &v36);
  if ( BestOutswapPagefile == 16 )
  {
    v29 = -1073741497;
    goto LABEL_41;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v29 = -1073741670;
    v5 = 0LL;
    goto LABEL_41;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  v6 |= 1u;
  MiLockWsSwapExclusive(CurrentThread, v9);
  SpinLock = v9 + 264;
  v13 = ExAcquireSpinLockExclusive(v9 + 264);
  v14 = *((_QWORD *)v2 + 29);
  if ( !v14 )
  {
    *((_QWORD *)v2 + 29) = 1LL;
    ExReleaseSpinLockExclusive(v9 + 264, v13);
    v16 = v36;
    while ( 1 )
    {
      v17 = *((_QWORD *)v2 + 14);
      v36 = v17;
      if ( !v17 )
      {
        v29 = -1073741779;
        v7 = 0LL;
        goto LABEL_34;
      }
      if ( LODWORD(v42[14]) == -1 )
        goto LABEL_9;
      v29 = MiReserveWorkingSetSwapSpace(v9, &v42[4], v15, BestOutswapPagefile, v16, v17);
      if ( v29 >= 0 )
        break;
      if ( v16 >= 0x10 )
        goto LABEL_61;
      BestOutswapPagefile = v16;
      v29 = MiExtendWorkingSetSwapPagefile(v37, v36, v16);
      if ( v29 < 0 )
        goto LABEL_61;
      v9 = v37;
    }
    v17 = v36;
LABEL_9:
    WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v17);
    *v12 = (PVOID)WorkingSetSwapSupport;
    if ( !WorkingSetSwapSupport )
      goto LABEL_60;
    v19 = 0LL;
    if ( !(_DWORD)v39 )
      goto LABEL_11;
    v19 = *((_QWORD *)v2 + 15) - *((_QWORD *)v2 + 16);
    if ( v19 > *((_QWORD *)v2 + 15) )
      v19 = *((_QWORD *)v2 + 15);
    if ( v19 && (v34 = MiAllocateWorkingSetSwapSupport(v19), (v12[1] = (PVOID)v34) == 0LL) )
    {
LABEL_60:
      v29 = -1073741670;
    }
    else
    {
LABEL_11:
      v20 = CurrentThread;
      v42[0] = *v12;
      v42[1] = v12[1];
      v42[2] = v2;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      {
        v21 = (_QWORD *)Process[2].Affinity.Bitmap[1];
        v22 = 0LL;
        while ( v21 )
        {
          v22 = (unsigned __int64)v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v22 )
        {
          if ( !MiVadMapsLargeImage(v22) && ((1 << (*(_BYTE *)(v22 + 48) & 7)) & 0x55) != 0 )
          {
            LOBYTE(v42[3]) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2);
            if ( !MiVadDeleted(v22) )
            {
              MiEnumerateLeafPtes(
                (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12,
                (*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12,
                (void (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                (__int64)v42);
              LOBYTE(v23) = v42[3];
            }
            MiUnlockWorkingSetExclusive((__int64)v2, v23, v24);
          }
          v25 = *(_QWORD **)(v22 + 8);
          v26 = v22;
          if ( v25 )
          {
            do
            {
              v22 = (unsigned __int64)v25;
              v25 = (_QWORD *)*v25;
            }
            while ( v25 );
          }
          else
          {
            while ( 1 )
            {
              v22 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v22 || *(_QWORD *)v22 == v26 )
                break;
              v26 = v22;
            }
          }
        }
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)v20, (__int64)Process);
        if ( *((_QWORD *)*v12 + 2) < v36 )
        {
          v27 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
          if ( v27 )
          {
            ExFreePoolWithTag(*v12, 0);
            *v12 = (PVOID)v27;
          }
        }
        v28 = v12[1];
        if ( v28 )
        {
          if ( v28[2] < v19 )
          {
            v35 = ((__int64 (*)(void))MiReAllocateWorkingSetSwapSupport)();
            if ( v35 )
            {
              ExFreePoolWithTag(v12[1], 0);
              v12[1] = (PVOID)v35;
            }
          }
        }
        v7 = *((_QWORD *)*v12 + 3);
        MiGetKernelStackSwapSupport((__int64)v12, (__int64)Process);
        if ( (v6 & 2) != 0 )
          P = (PVOID)MiReAllocateWorkingSetSwapSupport(*v12);
        v6 |= 4u;
        v29 = 0;
LABEL_34:
        v30 = SpinLock;
        v31 = ExAcquireSpinLockExclusive(SpinLock);
        if ( *((_QWORD *)v2 + 29) == 1LL )
        {
          if ( (v6 & 4) != 0 )
          {
            *((_QWORD *)v2 + 29) = v12;
            v12 = 0LL;
            v29 = 0;
          }
          else
          {
            *((_QWORD *)v2 + 29) = 0LL;
          }
        }
        else
        {
          v29 = -1073741558;
        }
        ExReleaseSpinLockExclusive(v30, v31);
        v32 = v37;
        MiFreeReservationRuns(v37, &v42[4]);
        goto LABEL_38;
      }
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)v20, (__int64)Process);
      v29 = -1073741558;
    }
LABEL_61:
    v7 = v36;
    goto LABEL_34;
  }
  if ( v14 == 1 )
  {
    v29 = -1073740682;
  }
  else
  {
    v29 = -1073741791;
    if ( v14 == 2 )
      v29 = -1073741558;
  }
  ExReleaseSpinLockExclusive(SpinLock, v13);
  v32 = v37;
LABEL_38:
  if ( v12 )
    MiFreeWorkingSetSwapContext(v32, v12);
  v5 = (void **)P;
LABEL_41:
  if ( (v6 & 1) != 0 )
    MiUnlockWsSwapExclusive(CurrentThread, v37);
  if ( v5 )
  {
    if ( (v6 & 4) != 0 )
      SmStoreSetProcessVaRanges(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  v44 = v42[15];
  v45 = v42[16];
  v46 = v42[17];
  v47 = v29;
  v43 = v7;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v29;
}
