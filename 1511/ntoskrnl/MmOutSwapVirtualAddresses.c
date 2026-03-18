/*
 * XREFs of MmOutSwapVirtualAddresses @ 0x1401E1508
 * Callers:
 *     SmPerformStoreSwapOperation @ 0x14020A930 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiEnumerateLeafPtes @ 0x14005E200 (MiEnumerateLeafPtes.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReAllocateWorkingSetSwapSupport @ 0x1400F5CA8 (MiReAllocateWorkingSetSwapSupport.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400F5CF8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindBestOutswapPagefile @ 0x1400F5D48 (MiFindBestOutswapPagefile.c)
 *     MiUnlockWsSwapExclusive @ 0x1400F5E18 (MiUnlockWsSwapExclusive.c)
 *     MiLockWsSwapExclusive @ 0x1400F5E60 (MiLockWsSwapExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1403CABE4 (MiValidateMemoryRangeEntries.c)
 *     MiFreeReservationRuns @ 0x1404D0560 (MiFreeReservationRuns.c)
 *     EtwTraceWorkingSetSwap @ 0x1404D05EC (EtwTraceWorkingSetSwap.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14062ACF8 (MiExtendWorkingSetSwapPagefile.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14062ADF8 (MiReserveWorkingSetSwapSpace.c)
 */

__int64 __fastcall MmOutSwapVirtualAddresses(PEPROCESS Process, unsigned __int64 *a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int16 SignalState; // cx
  int *v9; // r12
  unsigned int BestOutswapPagefile; // ebx
  __int64 v12; // r8
  unsigned int v13; // r14d
  unsigned __int64 v14; // rsi
  int v15; // ebx
  _QWORD *WorkingSetSwapSupport; // rax
  _QWORD *v17; // rbx
  unsigned __int64 *v18; // r15
  unsigned __int64 Address; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned int v26; // [rsp+30h] [rbp-D0h] BYREF
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
  SignalState = Process[2].Header.SignalState;
  v27 = CurrentThread;
  v30 = a4;
  v29 = MiPartitionIdToPointer(SignalState);
  v9 = v29;
  BestOutswapPagefile = MiFindBestOutswapPagefile((__int64)v29, &v26);
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
            v21 = *(unsigned int *)(Address + 28);
            v22 = (unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32;
            v28 = a2[1] - 1 + *a2;
            if ( (v21 | v22) >= v28 >> 12 )
            {
              LOBYTE(v31[3]) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
              if ( !MiVadDeleted(v20) )
              {
                MiEnumerateLeafPtes(
                  *a2,
                  v28,
                  (void (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiOutSwapWorkingSetCallback,
                  (__int64)v31);
                LOBYTE(v23) = v31[3];
              }
              MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v23, v24);
            }
          }
        }
        a2 += 2;
      }
      while ( a2 < v18 );
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
    v14 = v17[3];
    *v30 = v17;
    v15 = 0;
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
