/*
 * XREFs of MiDrainControlAreaWrites @ 0x140085020
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14008506C (MiPrepareSegmentForDeletion.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDrainControlAreaWrites(__int64 a1, unsigned __int8 CurrentIrql)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  __int16 v9; // [rsp+30h] [rbp-20h] BYREF
  char v10; // [rsp+32h] [rbp-1Eh]
  int v11; // [rsp+34h] [rbp-1Ch]
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h] BYREF

  result = (__int64)&retaddr;
  if ( *(_DWORD *)(a1 + 76) )
  {
    v5 = (volatile signed __int32 *)(a1 + 72);
    do
    {
      v11 = 0;
      v12[1] = v12;
      v12[0] = v12;
      v7 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 80) = &v7;
      v8 = 8;
      v9 = 263;
      v10 = 6;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
      else
        *v5 = 0;
      __writecr8(CurrentIrql);
      KeWaitForGate(&v9, 18LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        result = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
      }
      else
      {
        v6 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
          v6 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
        while ( 1 )
        {
          result = *(unsigned int *)v5;
          if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (result & 0x40000000) == 0 )
            _InterlockedCompareExchange(v5, result | 0x40000000, result);
          if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v6);
        }
      }
    }
    while ( *(_DWORD *)(a1 + 76) );
  }
  return result;
}
