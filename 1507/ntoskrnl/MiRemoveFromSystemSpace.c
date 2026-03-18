/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1400FA0D0
 * Callers:
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSystemViewCompareVa @ 0x1400FA3C4 (MiSystemViewCompareVa.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v5; // r12
  _QWORD *v8; // rbp
  volatile signed __int32 *v9; // rsi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v16; // ebx
  signed __int32 v17; // eax
  _QWORD *v18; // rbx
  int v19; // eax
  void *v20; // r12
  unsigned __int64 v21; // r14
  volatile signed __int64 *v22; // rdi
  __int16 v23; // ax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26[21]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v27; // [rsp+E0h] [rbp+8h]
  __int64 v28; // [rsp+E8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v8 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (_UNKNOWN *)a1 == &unk_14034EA70 )
  {
    v9 = dword_14034FF40;
  }
  else
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v9 = (volatile signed __int32 *)(v5 + 2968);
  }
  v27 = v5;
  --CurrentThread->SpecialApcDisable;
  v10 = *(unsigned __int64 **)(a1 + 8);
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL, a4);
  v14 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset(v9, 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire(v9);
    while ( 1 )
    {
      v17 = *v9;
      if ( (*v9 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v17 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v9, v17 | 0x40000000, v17);
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
  }
  v18 = *(_QWORD **)(a1 + 16);
  if ( !v18 )
    goto LABEL_43;
  do
  {
    v19 = MiSystemViewCompareVa(a2, v18, v12);
    if ( v19 < 0 )
    {
      v18 = (_QWORD *)*v18;
    }
    else
    {
      if ( v19 <= 0 )
        break;
      v18 = (_QWORD *)v18[1];
    }
  }
  while ( v18 );
  if ( !v18 )
LABEL_43:
    KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode((unsigned __int64 *)(a1 + 16), (__int64)v18);
  MiUnlockWorkingSetExclusive((__int64)v9, CurrentIrql);
  v20 = (void *)v18[7];
  v21 = v18[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v28 = v18[6] & 1LL;
  v26[0] = v21;
  MiManageSubsectionView((__int64 *)v26, v18 + 8, 4);
  v22 = *(volatile signed __int64 **)(a1 + 8);
  if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v22);
  KeAbPostRelease((ULONG_PTR)v22);
  v23 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v23;
  if ( !v23 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v20 )
    ObfDereferenceObjectWithTag(v20, 0x746C6644u);
  if ( v28 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v21 + 92));
  v24 = v18[4] >> 12;
  if ( a3 == 1 )
    MiRemoveMappedPtes((__int64)v18, (unsigned int *)v9);
  v25 = *((unsigned int *)v18 + 23);
  if ( (_DWORD)v25 != 0x7FFFF )
    MiDereferencePerSessionProtos(v21, v25);
  if ( (_UNKNOWN *)a1 == &unk_14034EA70 )
  {
    MiReleasePtes((__int64)&unk_14034F598, v8, v24);
    MiChargeWsles((__int64)v9, -v24, 0);
  }
  else
  {
    MiReleasePtes(v27 + 7824, v8, v24);
  }
  ExFreePoolWithTag(v18, 0);
}
