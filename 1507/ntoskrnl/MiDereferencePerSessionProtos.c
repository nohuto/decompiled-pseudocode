/*
 * XREFs of MiDereferencePerSessionProtos @ 0x14021BF98
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiSectionDelete @ 0x1404B6100 (MiSectionDelete.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiLocateSessionProtosInSubsection @ 0x14021C63C (MiLocateSessionProtosInSubsection.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferencePerSessionProtos(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // r14
  _QWORD *v6; // r15
  _KPROCESS *v7; // rbx
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  _QWORD *v12; // rbp
  volatile signed __int32 *v13; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 SessionProtosInSubsection; // rax
  __int64 v16; // r15
  unsigned int v18; // r15d
  signed __int32 v19; // eax
  __int64 v20; // rdx
  __int16 v21; // ax
  _KPROCESS *v22; // rdi
  __int64 v23; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  v6 = a1;
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(v5 + 40);
  v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = v6 + 15;
  if ( v6 != (_QWORD *)-120LL )
  {
    do
    {
      if ( (*((_BYTE *)v12 + 34) & 2) != 0 )
      {
        v13 = (volatile signed __int32 *)(v6 + 9);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6 + 9);
        }
        else
        {
          v18 = 0;
          if ( _interlockedbittestandset(v13, 0x1Fu) )
            v18 = ExpWaitForSpinLockExclusiveAndAcquire(v13);
          while ( 1 )
          {
            v19 = *v13;
            if ( (*v13 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v19 & 0x40000000) == 0 )
              _InterlockedCompareExchange(v13, v19 | 0x40000000, v19);
            if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v18);
          }
        }
        SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v12, a2);
        v16 = SessionProtosInSubsection;
        if ( (*(_DWORD *)(SessionProtosInSubsection + 40))-- == 1 )
        {
          RtlAvlRemoveNode(v12 + 3, SessionProtosInSubsection);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
          else
            *v13 = 0;
          __writecr8(CurrentIrql);
          *(_DWORD *)(v16 + 40) = *((_DWORD *)v12 + 11);
          *(_QWORD *)(v16 + 24) = v12;
          *(_QWORD *)v16 = v7;
          v7 = (_KPROCESS *)v16;
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
          else
            *v13 = 0;
          __writecr8(CurrentIrql);
        }
        v6 = a1;
      }
      v12 = (_QWORD *)v12[2];
    }
    while ( v12 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v21 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  while ( 1 )
  {
    v22 = v7;
    if ( !v7 )
      break;
    v7 = *(_KPROCESS **)&v7->Header.Lock;
    v23 = MiDeletePerSessionProtos(v22, v20);
    MiReturnCommit((__int64)MiSystemPartition, v23);
    ExFreePoolWithTag(v22->ProfileListHead.Blink, 0);
    ExFreePoolWithTag(v22, 0);
  }
}
