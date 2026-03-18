/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x1400F6730
 * Callers:
 *     KiScanInterruptObjectList @ 0x140154E30 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140155000 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140155130 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140155260 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1400F6900 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1400F6988 (KeFindFirstSetRightGroupAffinity.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  char v9; // di
  unsigned __int64 v10; // rax
  volatile signed __int32 *v12; // rcx
  volatile signed __int64 *v13; // rcx
  unsigned int v14; // ecx
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v16; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 16) )
    {
      v14 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      if ( ((unsigned int)(*(_QWORD *)v2 >> (v14 & 0x3F)) & (v14 >> 6 == *(unsigned __int16 *)(v2 + 8))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(v2);
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v9 != 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v7 = __rdtsc();
  *(_QWORD *)(a1 + 184) = v7;
  v8 = v7;
  if ( a2 )
  {
    v12 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v12);
    }
    else if ( _interlockedbittestandset64(v12, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v12, (unsigned __int64)HIDWORD(v7) << 32, v2);
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
  {
    v13 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v13, retaddr);
    else
      _InterlockedAnd64(v13, 0LL);
  }
  v10 = __rdtsc();
  *(_QWORD *)(a1 + 176) += v10 - *(_QWORD *)(a1 + 184);
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v16 = v10 - v8;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v16;
    else
      IsrDpcStats[4] += v16;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v9 )
  {
    ++*(_QWORD *)(a1 + 192);
    return v9 != 0;
  }
  return 0;
}
