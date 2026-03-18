/*
 * XREFs of MiChargeControlAreaPartition @ 0x14008AF80
 * Callers:
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiGetCrossPartitionCharges @ 0x14021D2F4 (MiGetCrossPartitionCharges.c)
 *     MiReturnCrossPartitionCharges @ 0x14021D8F0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiChargeControlAreaPartition(__int64 *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __int16 *v6; // rbx
  unsigned __int16 v7; // ax
  __int16 *v8; // rax
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax

  CurrentThread = KeGetCurrentThread();
  v3 = *a1;
  v4 = *((_WORD *)a1 + 30) & 0x3FF;
  if ( v4 == 1023 )
    v6 = MiSystemPartition;
  else
    v6 = *(__int16 **)(qword_14034F0E8 + 8LL * v4);
  v7 = *(_WORD *)(a2 + 1452);
  if ( v7 == 1023 )
    v8 = MiSystemPartition;
  else
    v8 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
  if ( v6 == v8 )
    return 0LL;
  if ( v6 != MiSystemPartition )
    return 3221225539LL;
  --CurrentThread->SpecialApcDisable;
  v10 = (volatile signed __int64 *)(v3 + 40);
  v11 = KeAbPreAcquire(v3 + 40, 0LL, 0LL, (__int64)MiSystemPartition);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v3 + 40, v11, v3 + 40);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( (*((_DWORD *)a1 + 15) & 0xFFFFFC00) == 0 )
  {
    v13 = *(unsigned int *)(v3 + 8);
    if ( !(unsigned int)MiGetCrossPartitionCharges(&unk_14034E8B8, (unsigned int)v13) )
    {
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      v15 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v14);
      }
      return 3221225773LL;
    }
    if ( !(unsigned int)MiChargeCommit(v6, v13, 0LL) )
    {
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      v18 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v17);
      }
      MiReturnCrossPartitionCharges(&unk_14034E8B8, v13);
      return 3221225773LL;
    }
    if ( !(unsigned int)MiChargeResident(v6, v13, 0LL, v16) )
    {
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      v20 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v20;
      if ( !v20
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v19);
      }
      MiReturnCommit(v6, v13);
      MiReturnCrossPartitionCharges(&unk_14034E8B8, v13);
      return 3221225495LL;
    }
    _InterlockedExchangeAdd64(&qword_14034FA30, v13);
  }
  if ( (*((_DWORD *)a1 + 15) & 0xFFFFFC00) != 0xFFFFFC00 )
    *((_DWORD *)a1 + 15) = *((_DWORD *)a1 + 15) & 0x3FF ^ ((*((_DWORD *)a1 + 15) & 0xFFFFFC00) + 1024);
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v21);
  return 0LL;
}
