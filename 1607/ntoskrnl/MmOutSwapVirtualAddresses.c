/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1401F76C4
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x140221F48 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiLockWsSwapExclusive @ 0x1400B1F04 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1400B2758 (MiUnlockWsSwapExclusive.c)
 *     MiFindBestOutswapPagefile @ 0x1400B4CE8 (MiFindBestOutswapPagefile.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400B52A8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400B52F8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiFreeReservationRuns @ 0x1404D3824 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D56A8 (EtwTraceWorkingSetSwap.c)
 *     MiValidateMemoryRangeEntries @ 0x1404D71B8 (MiValidateMemoryRangeEntries.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406633A8 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x1406634AC (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int16 v6; // cx
  int *v9; // r15
  unsigned int BestOutswapPagefile; // ebx
  __int64 v12; // r8
  unsigned int v13; // edi
  unsigned __int64 v14; // r14
  int v15; // ebx
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v17; // rdi
  unsigned __int64 *v18; // r12
  unsigned __int64 Address; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rcx
  LONG *SharedVm; // rbx
  KIRQL v23; // al
  __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  struct _KTHREAD *v27; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  int *v29; // [rsp+48h] [rbp-B8h]
  _QWORD *v30; // [rsp+50h] [rbp-B0h]
  _QWORD v31[18]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int v36; // [rsp+110h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v6 = WORD2(Process[1].InstrumentationCallback);
  v27 = CurrentThread;
  v30 = a4;
  v29 = MiPartitionIdToPointer(v6);
  v9 = v29;
  BestOutswapPagefile = MiFindBestOutswapPagefile((__int64)v29, (unsigned int *)&v26);
  if ( BestOutswapPagefile == 16 )
    return 3221225799LL;
  LODWORD(v32) = 2;
  EtwTraceWorkingSetSwap(Process);
  MiValidateMemoryRangeEntries(a2, a3, &v28);
  memset(v31, 0, sizeof(v31));
  MiLockWsSwapExclusive((__int64)CurrentThread, (__int64)v9);
  v13 = v26;
  v14 = v28;
  while ( 1 )
  {
    v15 = MiReserveWorkingSetSwapSpace(v9, &v31[4], v12, BestOutswapPagefile, v13, v14);
    if ( v15 >= 0 )
      break;
    if ( v13 >= 0x10 )
      goto LABEL_23;
    v15 = MiExtendWorkingSetSwapPagefile(v9, v14, v13);
    if ( v15 < 0 )
      goto LABEL_23;
    BestOutswapPagefile = v13;
  }
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(v14);
  v17 = WorkingSetSwapSupport;
  if ( WorkingSetSwapSupport )
  {
    v31[0] = WorkingSetSwapSupport;
    v31[2] = (char *)Process + 1280;
    LOCK_ADDRESS_SPACE_SHARED((__int64)v27, (__int64)Process);
    v18 = &a2[2 * a3];
    if ( a2 < v18 )
    {
      do
      {
        Address = MiLocateAddress(*a2);
        v20 = Address;
        if ( Address )
        {
          if ( (*(_DWORD *)(Address + 48) & 0x8007) == 0x8000 )
          {
            v21 = *(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32);
            v26 = *a2 - 1 + a2[1];
            if ( v21 >= v26 >> 12 )
            {
              SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
              v23 = ExAcquireSpinLockExclusive(SharedVm);
              SharedVm[1] = 0;
              LOBYTE(v24) = v23;
              LOBYTE(v31[3]) = v23;
              if ( (*(_DWORD *)(v20 + 48) & 0x80000) == 0 )
              {
                MiEnumerateLeafPtes(
                  *a2,
                  v26,
                  (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                  (__int64)v31,
                  0);
                LOBYTE(v24) = v31[3];
              }
              MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v24);
            }
          }
        }
        a2 += 2;
      }
      while ( a2 < v18 );
      v14 = v28;
      v9 = v29;
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)v27, (__int64)Process);
    if ( v17[2] < v14 )
    {
      v25 = MiReAllocateWorkingSetSwapSupport((__int64)v17);
      if ( v25 )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = (_QWORD *)v25;
      }
    }
    v15 = 0;
    v14 = v17[3];
    *v30 = v17;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_23:
  MiFreeReservationRuns(v9, &v31[4]);
  MiUnlockWsSwapExclusive((__int64)v27, (__int64)v9);
  v33 = v31[15];
  v34 = v31[16];
  v35 = v31[17];
  v36 = v15;
  v32 = v14;
  EtwTraceWorkingSetSwap(Process);
  return (unsigned int)v15;
}
