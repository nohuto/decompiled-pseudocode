/*
 * XREFs of MmOutSwapWorkingSet @ 0x1400B7638
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetWorkingSetSwapSupport @ 0x140075EDC (MiGetWorkingSetSwapSupport.c)
 *     MiLockWsSwapExclusive @ 0x1400B1F04 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1400B2758 (MiUnlockWsSwapExclusive.c)
 *     MiGetKernelStackSwapSupport @ 0x1400B40E8 (MiGetKernelStackSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400B4CE8 (MiFindBestOutswapPagefile.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400B52A8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400B52F8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 *     SmStoreExistsForProcess @ 0x1400C712C (SmStoreExistsForProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SmStoreSetProcessVaRanges @ 0x1403E4AD4 (SmStoreSetProcessVaRanges.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404D37C0 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x1404D3824 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406633A8 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406634AC (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapWorkingSet(PEPROCESS Process, int a2)
{
  unsigned __int16 *v2; // r13
  void **v5; // r14
  char v6; // bl
  unsigned __int64 v7; // rsi
  unsigned __int16 v8; // cx
  int *v9; // rdi
  unsigned int BestOutswapPagefile; // r15d
  PVOID PoolWithTag; // rax
  __int64 v12; // r14
  __int64 WorkingSetSwapSupport; // rax
  KIRQL v14; // dl
  __int64 v15; // rcx
  KIRQL v16; // dl
  __int64 v17; // r8
  unsigned int v18; // esi
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // r15
  struct _KTHREAD *v22; // rdi
  _QWORD *v23; // rax
  unsigned __int64 v24; // rsi
  LONG *SharedVm; // rdi
  KIRQL v26; // al
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // edi
  volatile LONG *v33; // r15
  KIRQL v34; // dl
  __int64 v35; // rcx
  LONG *v36; // rax
  int *v37; // r15
  _QWORD *v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // [rsp+38h] [rbp-D0h] BYREF
  int *v42; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+48h] [rbp-C0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+60h] [rbp-A8h]
  _QWORD v47[18]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  __int64 v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  int v52; // [rsp+118h] [rbp+10h]

  v2 = &Process[1].IdealNode[12];
  LODWORD(v45) = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  P = 0LL;
  v6 = 0;
  v7 = 0LL;
  memset(v47, 0, sizeof(v47));
  v8 = WORD2(Process[1].InstrumentationCallback);
  LODWORD(v48) = a2 != 0;
  v42 = MiPartitionIdToPointer(v8);
  v9 = v42;
  if ( (unsigned int)SmStoreExistsForProcess(Process) )
  {
    LODWORD(v47[14]) = -1;
    v6 = 2;
    LODWORD(v48) = v48 | 4;
  }
  EtwTraceWorkingSetSwap(Process);
  BestOutswapPagefile = MiFindBestOutswapPagefile((__int64)v42, (unsigned int *)&v41);
  if ( BestOutswapPagefile == 16 )
  {
    v32 = -1073741497;
    goto LABEL_39;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x43536D4Du);
  v12 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v32 = -1073741670;
    v5 = 0LL;
    goto LABEL_39;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  v6 |= 1u;
  MiLockWsSwapExclusive((__int64)CurrentThread, (__int64)v9);
  SpinLock = v9 + 262;
  ExAcquireSpinLockExclusive(v9 + 262);
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport((__int64)v2);
  if ( !WorkingSetSwapSupport )
  {
    *((_QWORD *)MiGetSharedVm(v15) + 3) = 1LL;
    ExReleaseSpinLockExclusive(v9 + 262, v16);
    v18 = v41;
    while ( 1 )
    {
      v19 = *((_QWORD *)v2 + 15);
      v41 = v19;
      if ( !v19 )
      {
        v32 = -1073741779;
        v7 = 0LL;
        goto LABEL_32;
      }
      if ( LODWORD(v47[14]) == -1 )
        goto LABEL_9;
      v32 = MiReserveWorkingSetSwapSpace(v9, &v47[4], v17, BestOutswapPagefile, v18, v19);
      if ( v32 >= 0 )
        break;
      if ( v18 >= 0x10 )
        goto LABEL_63;
      BestOutswapPagefile = v18;
      v32 = MiExtendWorkingSetSwapPagefile(v42, v41, v18);
      if ( v32 < 0 )
        goto LABEL_63;
      v9 = v42;
    }
    v19 = v41;
LABEL_9:
    v20 = MiAllocateWorkingSetSwapSupport(v19);
    *(_QWORD *)v12 = v20;
    if ( !v20 )
      goto LABEL_62;
    v21 = 0LL;
    if ( !(_DWORD)v45 )
      goto LABEL_11;
    v21 = *((_QWORD *)v2 + 16) - *((_QWORD *)v2 + 17);
    if ( v21 > *((_QWORD *)v2 + 16) )
      v21 = *((_QWORD *)v2 + 16);
    if ( v21 && (v39 = MiAllocateWorkingSetSwapSupport(v21), (*(_QWORD *)(v12 + 8) = v39) == 0LL) )
    {
LABEL_62:
      v32 = -1073741670;
    }
    else
    {
LABEL_11:
      v22 = CurrentThread;
      v47[0] = *(_QWORD *)v12;
      v47[1] = *(_QWORD *)(v12 + 8);
      v47[2] = v2;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Process);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      {
        v23 = (_QWORD *)Process[2].Affinity.Bitmap[3];
        v24 = 0LL;
        while ( v23 )
        {
          v24 = (unsigned __int64)v23;
          v23 = (_QWORD *)*v23;
        }
        if ( v24 )
        {
          do
          {
            if ( !MiVadMapsLargeImage(v24) && ((1 << (*(_BYTE *)(v24 + 48) & 7)) & 0x55) != 0 )
            {
              SharedVm = MiGetSharedVm((__int64)v2);
              v26 = ExAcquireSpinLockExclusive(SharedVm);
              SharedVm[1] = 0;
              LOBYTE(v27) = v26;
              LOBYTE(v47[3]) = v26;
              if ( (*(_DWORD *)(v24 + 48) & 0x80000) == 0 )
              {
                MiEnumerateLeafPtes(
                  *(_DWORD *)(v24 + 24) << 12,
                  *(_DWORD *)(v24 + 28) << 12,
                  (unsigned int)MiOutSwapWorkingSetCallback,
                  (unsigned int)v47,
                  0);
                LOBYTE(v27) = v47[3];
              }
              MiUnlockWorkingSetExclusive((__int64)v2, v27);
            }
            v28 = *(_QWORD **)(v24 + 8);
            v29 = v24;
            if ( v28 )
            {
              do
              {
                v24 = (unsigned __int64)v28;
                v28 = (_QWORD *)*v28;
              }
              while ( v28 );
            }
            else
            {
              while ( 1 )
              {
                v24 = *(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v24 || *(_QWORD *)v24 == v29 )
                  break;
                v29 = v24;
              }
            }
          }
          while ( v24 );
          v22 = CurrentThread;
        }
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)v22, (__int64)Process);
        if ( *(_QWORD *)(*(_QWORD *)v12 + 16LL) < v41 )
        {
          v30 = MiReAllocateWorkingSetSwapSupport(*(_QWORD *)v12);
          if ( v30 )
          {
            ExFreePoolWithTag(*(PVOID *)v12, 0);
            *(_QWORD *)v12 = v30;
          }
        }
        v31 = *(_QWORD *)(v12 + 8);
        if ( v31 )
        {
          if ( *(_QWORD *)(v31 + 16) < v21 )
          {
            v40 = MiReAllocateWorkingSetSwapSupport(v31);
            if ( v40 )
            {
              ExFreePoolWithTag(*(PVOID *)(v12 + 8), 0);
              *(_QWORD *)(v12 + 8) = v40;
            }
          }
        }
        v7 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
        MiGetKernelStackSwapSupport(v12, (__int64)Process);
        if ( (v6 & 2) != 0 )
          P = (PVOID)MiReAllocateWorkingSetSwapSupport(*(_QWORD *)v12);
        v6 |= 4u;
        v32 = 0;
LABEL_32:
        v33 = SpinLock;
        ExAcquireSpinLockExclusive(SpinLock);
        if ( MiGetWorkingSetSwapSupport((__int64)v2) == 1 )
        {
          v36 = MiGetSharedVm(v35);
          if ( (v6 & 4) != 0 )
          {
            *((_QWORD *)v36 + 3) = v12;
            v12 = 0LL;
            v32 = 0;
          }
          else
          {
            *((_QWORD *)v36 + 3) = 0LL;
          }
        }
        else
        {
          v32 = -1073741558;
        }
        ExReleaseSpinLockExclusive(v33, v34);
        v37 = v42;
        MiFreeReservationRuns(v42, &v47[4]);
        goto LABEL_36;
      }
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)v22, (__int64)Process);
      v32 = -1073741558;
    }
LABEL_63:
    v7 = v41;
    goto LABEL_32;
  }
  if ( WorkingSetSwapSupport == 1 )
  {
    v32 = -1073740682;
  }
  else
  {
    v32 = -1073741791;
    if ( WorkingSetSwapSupport == 2 )
      v32 = -1073741558;
  }
  ExReleaseSpinLockExclusive(SpinLock, v14);
  v37 = v42;
LABEL_36:
  if ( v12 )
    MiFreeWorkingSetSwapContext(v37, v12);
  v5 = (void **)P;
LABEL_39:
  if ( (v6 & 1) != 0 )
    MiUnlockWsSwapExclusive((__int64)CurrentThread, (__int64)v42);
  if ( v5 )
  {
    if ( (v6 & 4) != 0 )
      SmStoreSetProcessVaRanges(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  v49 = v47[15];
  v50 = v47[16];
  v51 = v47[17];
  v52 = v32;
  v48 = v7;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v32;
}
