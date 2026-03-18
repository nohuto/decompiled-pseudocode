/*
 * XREFs of MiInsertPageFileInList @ 0x1405B4BD0
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 * Callees:
 *     MiNumberWsSwapPagefiles @ 0x140012980 (MiNumberWsSwapPagefiles.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiUpdateReserveClusterInfo @ 0x1400DDB10 (MiUpdateReserveClusterInfo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x14016BCC8 (MiIncreaseCommitLimits.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 */

__int64 __fastcall MiInsertPageFileInList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  _QWORD **v8; // rax
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // r12d
  volatile signed __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // r15
  __int16 v17; // cx
  __int16 v18; // ax
  BOOLEAN v19; // r8
  __int16 v21; // ax
  __int16 v22; // ax
  __int64 v23; // [rsp+60h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 166) |= 1u;
  v6 = 2LL;
  v7 = *(_QWORD *)a1;
  v23 = v4;
  v8 = (_QWORD **)(a1 + 72);
  do
  {
    if ( *v8 )
      **v8 = 2575857425LL;
    ++v8;
    --v6;
  }
  while ( v6 );
  v9 = *(_QWORD *)(a1 + 216);
  CurrentThread = KeGetCurrentThread();
  v11 = 1;
  if ( (__int16 *)v9 == MiSystemPartition )
    v11 = 16;
  --CurrentThread->SpecialApcDisable;
  v12 = (volatile signed __int64 *)(v9 + 928);
  v13 = KeAbPreAcquire(v9 + 928, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 928), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v9 + 928), v13, v9 + 928, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = *(unsigned int *)(v9 + 5336);
  if ( (unsigned int)v16 >= v11 )
  {
LABEL_26:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 928));
    KeAbPostRelease(v9 + 928);
    v21 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225623LL;
  }
  v17 = *(_WORD *)(a1 + 164) & 0xFFF0 | v16 & 0xF;
  *(_WORD *)(a1 + 164) = v17;
  if ( (v17 & 0x50) != 0 )
  {
    if ( (v17 & 0x10) == 0 || !(unsigned int)MiNumberWsSwapPagefiles(v9) )
    {
      MiUpdatePageFileList(a1, 1);
      *(_QWORD *)(v9 + 8 * v16 + 5344) = a1;
      *(_DWORD *)(v9 + 5336) = v16 + 1;
LABEL_17:
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 928));
      KeAbPostRelease(v9 + 928);
      v18 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      MiUpdateReserveClusterInfo(v9, 0LL, 0);
      KeSetEvent((PRKEVENT)(v9 + 792), 0, v19);
      return 0LL;
    }
    goto LABEL_26;
  }
  if ( (unsigned int)MiIncreaseCommitLimits(v9, v7, v23, 0, a1) )
  {
    if ( (*(_BYTE *)(a1 + 164) & 0x20) == 0 && !*(_DWORD *)(v9 + 920) )
      *(_DWORD *)(v9 + 920) = 1;
    goto LABEL_17;
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 928));
  KeAbPostRelease(v9 + 928);
  v22 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v22;
  if ( !v22 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 3221225713LL;
}
