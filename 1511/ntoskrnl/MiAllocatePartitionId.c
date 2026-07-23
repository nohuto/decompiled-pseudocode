/*
 * XREFs of MiAllocatePartitionId @ 0x140623F10
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  int v6; // esi
  _RTL_BITMAP *ClearBitsAndSet; // rdi
  unsigned __int64 v8; // r8
  __int64 *v9; // rcx
  PRTL_BITMAP v10; // rax
  unsigned int v11; // ebp
  _RTL_BITMAP *PoolWithTag; // rax
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // r14
  _QWORD *PteAddress; // rbp
  unsigned __int64 SizeOfBitMap; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402FEBE8, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FEBE8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FEBE8, v3, (ULONG_PTR)&qword_1402FEBE8);
  v6 = 0;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  ClearBitsAndSet = (_RTL_BITMAP *)RtlFindClearBitsAndSet(qword_1402FEC08, 1u, 0);
  if ( ClearBitsAndSet == (_RTL_BITMAP *)0xFFFFFFFFLL )
  {
    v9 = (__int64 *)qword_1402FEC28;
    v10 = qword_1402FEC08;
    if ( (__int64 *)qword_1402FEC28 == &qword_1402FEC20 )
      v11 = 512;
    else
      v11 = qword_1402FEC08->SizeOfBitMap + 512;
    if ( v11 <= qword_1402FEC08->SizeOfBitMap || v11 > 0x400 )
    {
      ClearBitsAndSet = 0LL;
    }
    else
    {
      PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                     NonPagedPoolNx,
                                     8 * (((v11 & 0x3F) != 0) + (v11 >> 6)) + 16,
                                     0x20206D4Du);
      ClearBitsAndSet = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_15:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
        KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        return 0LL;
      }
      PoolWithTag->SizeOfBitMap = v11;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      v9 = (__int64 *)qword_1402FEC28;
      v10 = qword_1402FEC08;
    }
    if ( !ClearBitsAndSet )
      goto LABEL_15;
    if ( v9 == &qword_1402FEC20 )
    {
      v14 = MiReservePtes((__int64)&qword_1402FF7B0, 2u, v8);
      if ( !v14 || (v15 = (__int64)(v14 << 25) >> 16) == 0 )
      {
LABEL_22:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
        KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        ExFreePoolWithTag(ClearBitsAndSet, 0);
        return 0LL;
      }
    }
    else
    {
      v15 = (unsigned __int64)&v9[v10->SizeOfBitMap];
    }
    PteAddress = (_QWORD *)MiGetPteAddress(v15);
    if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)PteAddress, (__int64)PteAddress, 33, 9u) )
    {
      if ( (__int64 *)qword_1402FEC28 == &qword_1402FEC20 )
        MiReleasePtes((__int64)&qword_1402FF7B0, PteAddress, 1u);
      goto LABEL_22;
    }
    memset((void *)v15, 0, 0x1000uLL);
    if ( (__int64 *)qword_1402FEC28 == &qword_1402FEC20 )
    {
      *(_QWORD *)v15 = *(_QWORD *)qword_1402FEC28;
      qword_1402FEC28 = v15;
    }
    RtlClearAllBits(ClearBitsAndSet);
    SizeOfBitMap = qword_1402FEC08->SizeOfBitMap;
    LOBYTE(v6) = (SizeOfBitMap & 0x3F) != 0;
    memmove(ClearBitsAndSet->Buffer, qword_1402FEC08->Buffer, 8 * (v6 + (SizeOfBitMap >> 6)));
    if ( ClearBitsAndSet->SizeOfBitMap > 0x3FF )
      ClearBitsAndSet->Buffer[31] |= 0x80000000;
    if ( ClearBitsAndSet->SizeOfBitMap > 0x3FE )
      ClearBitsAndSet->Buffer[31] |= 0x40000000u;
    if ( qword_1402FEC08 != (PRTL_BITMAP)&dword_1402FEC10 )
      ExFreePoolWithTag(qword_1402FEC08, 0);
    qword_1402FEC08 = ClearBitsAndSet;
    LOWORD(ClearBitsAndSet) = RtlFindClearBitsAndSet(ClearBitsAndSet, 1u, 0);
  }
  *(_QWORD *)(qword_1402FEC28 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
  KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned __int16)ClearBitsAndSet;
}
