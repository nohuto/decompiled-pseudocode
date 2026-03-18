/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x140101210
 * Callers:
 *     KiScanInterruptObjectList @ 0x140183B70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140183D40 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140183E70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140183FA0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140101404 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v2; // r9
  unsigned __int64 v5; // r10
  unsigned int v6; // eax
  int v7; // r8d
  unsigned __int64 v9; // rax
  char v10; // si
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *IsrDpcStats; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  volatile signed __int32 *v15; // rcx
  volatile signed __int64 *v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 240);
  if ( !v2
    || !*(_BYTE *)(v2 + 16)
    || (v5 = *(_QWORD *)v2,
        v6 = KiProcessorIndexToNumberMappingTable[KeGetCurrentPrcb()->Number],
        v7 = *(unsigned __int16 *)(v2 + 8),
        ((unsigned int)(*(_QWORD *)v2 >> (v6 & 0x3F)) & (v6 >> 6 == v7)) != 0) )
  {
    if ( *(_BYTE *)(a1 + 93) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      IsrDpcStats = CurrentPrcb->IsrDpcStats;
      *(_BYTE *)(a1 + 224) = 1;
      CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
      v13 = __rdtsc();
      *(_QWORD *)(a1 + 184) = v13;
      v14 = v13;
      if ( a2 )
      {
        v15 = *(volatile signed __int32 **)(a1 + 72);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v15);
        }
        else if ( _interlockedbittestandset64(v15, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v15);
        }
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
      if ( a2 )
      {
        v16 = *(volatile signed __int64 **)(a1 + 72);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v16, retaddr);
        else
          _InterlockedAnd64(v16, 0LL);
      }
      v17 = __rdtsc();
      *(_QWORD *)(a1 + 176) += v17 - *(_QWORD *)(a1 + 184);
      if ( IsrDpcStats != (_QWORD *)1 )
      {
        v18 = v17 - v14;
        if ( *((_BYTE *)IsrDpcStats + 48) )
          IsrDpcStats[1] += v18;
        else
          IsrDpcStats[4] += v18;
      }
      CurrentPrcb->IsrDpcStats = IsrDpcStats;
      *(_BYTE *)(a1 + 224) = 0;
      if ( !v10 )
        return 0;
      ++*(_QWORD *)(a1 + 192);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    }
    return v10 != 0;
  }
  if ( v5 )
  {
    _BitScanForward64(&v9, v5);
    KiIntRedirectQueueRequestOnProcessor((unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)(v9 + (v7 << 6))]);
  }
  else
  {
    KiIntRedirectQueueRequestOnProcessor(0xFFFFFFFFuLL);
  }
  return 2;
}
