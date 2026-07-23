/*
 * XREFs of MiAllocatePartitionId @ 0x1406A3690
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePartitionId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rsi
  _RTL_BITMAP *ClearBitsAndSet; // rsi
  __int64 *v11; // rdx
  PRTL_BITMAP v12; // rcx
  unsigned int v13; // ebp
  _RTL_BITMAP *PoolWithTag; // rax
  __int16 v15; // cx
  __int64 *v17; // rax
  unsigned __int64 v18; // r14
  __int16 v19; // ax
  _QWORD *v20; // rbp
  __int16 v21; // ax
  __int16 v22; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14034F0A8, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034F0A8, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_14034F0A8, v6, (ULONG_PTR)&qword_14034F0A8, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  ClearBitsAndSet = (_RTL_BITMAP *)RtlFindClearBitsAndSet(qword_14034F0C8, 1u, 0);
  if ( ClearBitsAndSet == (_RTL_BITMAP *)0xFFFFFFFFLL )
  {
    v11 = (__int64 *)qword_14034F0E8;
    v12 = qword_14034F0C8;
    v13 = 512;
    if ( (__int64 *)qword_14034F0E8 != &qword_14034F0E0 )
      v13 = qword_14034F0C8->SizeOfBitMap + 512;
    if ( v13 <= qword_14034F0C8->SizeOfBitMap || v13 > 0x400 )
    {
      ClearBitsAndSet = 0LL;
    }
    else
    {
      PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                     PagedPool,
                                     8 * (((v13 & 0x3F) != 0) + (v13 >> 6)) + 16,
                                     0x20206D4Du);
      ClearBitsAndSet = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_14:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034F0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034F0A8);
        KeAbPostRelease((ULONG_PTR)&qword_14034F0A8);
        v15 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v15;
        if ( !v15
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        return 0LL;
      }
      PoolWithTag->SizeOfBitMap = v13;
      PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
      v11 = (__int64 *)qword_14034F0E8;
      v12 = qword_14034F0C8;
    }
    if ( !ClearBitsAndSet )
      goto LABEL_14;
    if ( v11 == &qword_14034F0E0 )
    {
      v17 = MiReservePtes((__int64)&qword_14034FC70, 2u, (unsigned __int64)&qword_14034F0E0);
      if ( !v17 || (v18 = (__int64)((_QWORD)v17 << 25) >> 16) == 0 )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034F0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034F0A8);
        KeAbPostRelease((ULONG_PTR)&qword_14034F0A8);
        v19 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v19;
        if ( v19 )
          goto LABEL_28;
        goto LABEL_26;
      }
    }
    else
    {
      v18 = (unsigned __int64)&v11[v12->SizeOfBitMap];
    }
    v20 = (_QWORD *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !(unsigned int)MiMakeZeroedPageTables((unsigned __int64)v20, (__int64)v20, 33, 9) )
    {
      if ( (__int64 *)qword_14034F0E8 == &qword_14034F0E0 )
        MiReleasePtes((__int64)&qword_14034FC70, v20, 1u);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034F0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034F0A8);
      KeAbPostRelease((ULONG_PTR)&qword_14034F0A8);
      v21 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v21;
      if ( v21 )
        goto LABEL_28;
LABEL_26:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        KiCheckForKernelApcDelivery();
LABEL_28:
      ExFreePoolWithTag(ClearBitsAndSet, 0);
      return 0LL;
    }
    memset((void *)v18, 0, 0x1000uLL);
    if ( (__int64 *)qword_14034F0E8 == &qword_14034F0E0 )
    {
      *(_QWORD *)v18 = *(_QWORD *)qword_14034F0E8;
      qword_14034F0E8 = v18;
    }
    RtlClearAllBits(ClearBitsAndSet);
    memmove(
      ClearBitsAndSet->Buffer,
      qword_14034F0C8->Buffer,
      8 * (((qword_14034F0C8->SizeOfBitMap & 0x3F) != 0) + ((unsigned __int64)qword_14034F0C8->SizeOfBitMap >> 6)));
    if ( ClearBitsAndSet->SizeOfBitMap > 0x3FF )
      ClearBitsAndSet->Buffer[31] |= 0x80000000;
    if ( ClearBitsAndSet->SizeOfBitMap > 0x3FE )
      ClearBitsAndSet->Buffer[31] |= 0x40000000u;
    if ( qword_14034F0C8 != (PRTL_BITMAP)&dword_14034F0D0 )
      ExFreePoolWithTag(qword_14034F0C8, 0);
    qword_14034F0C8 = ClearBitsAndSet;
    LOWORD(ClearBitsAndSet) = RtlFindClearBitsAndSet(ClearBitsAndSet, 1u, 0);
  }
  *(_QWORD *)(qword_14034F0E8 + 8LL * (unsigned __int16)ClearBitsAndSet) = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034F0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034F0A8);
  KeAbPostRelease((ULONG_PTR)&qword_14034F0A8);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned __int16)ClearBitsAndSet;
}
