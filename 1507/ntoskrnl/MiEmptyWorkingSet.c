/*
 * XREFs of MiEmptyWorkingSet @ 0x14007B85C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, unsigned __int64 a2, char a3)
{
  int *v3; // r12
  __int64 v5; // r15
  unsigned __int8 CurrentIrql; // si
  int v8; // r14d
  unsigned int v9; // edi
  signed __int32 v10; // eax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int8 v15; // bp
  unsigned int v16; // esi
  signed __int32 v17; // eax
  int v18; // [rsp+20h] [rbp-F8h] BYREF
  _DWORD v19[40]; // [rsp+30h] [rbp-E8h] BYREF

  v18 = 0;
  v3 = &v18;
  v19[0] = 0;
  v5 = *(_QWORD *)(a1 + 184);
  CurrentIrql = a2;
  if ( (_BYTE)a2 == 17 )
  {
    v8 = 1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v9 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v9 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
      while ( 1 )
      {
        v10 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v10 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v10 | 0x40000000, v10);
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v5 == 0xFFFFF58010804000uLL
    && (v3 = (int *)&KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase + 1, (*v3 & 0x20) != 0) )
  {
    if ( v8 == 1 )
    {
      LOBYTE(a2) = CurrentIrql;
      goto LABEL_45;
    }
    return 3221225738LL;
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 16);
    v12 = *(_QWORD *)(v5 + 8);
    if ( v12 <= v11 )
    {
      while ( 1 )
      {
        if ( (v12 & 0xF) == 0 && (*(_DWORD *)a1 & 0x40000000) != 0 || KeShouldYieldProcessor() )
        {
          if ( v19[0] )
          {
            MiFreeWsleList(a1, v19, 0LL);
            v19[0] = 0;
          }
          LOBYTE(a2) = CurrentIrql;
          MiUnlockWorkingSetExclusive(a1, a2);
          v15 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
          }
          else
          {
            v16 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
              v16 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
            while ( 1 )
            {
              v17 = *(_DWORD *)a1;
              if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v17 & 0x40000000) == 0 )
                _InterlockedCompareExchange((volatile signed __int32 *)a1, v17 | 0x40000000, v17);
              if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v16);
            }
          }
          CurrentIrql = v15;
          if ( (*v3 & 0x20) != 0 )
          {
            if ( v8 != 1 )
              return 3221225738LL;
            LOBYTE(a2) = v15;
LABEL_45:
            MiUnlockWorkingSetExclusive(a1, a2);
            return 3221225738LL;
          }
          v11 = *(_QWORD *)(v5 + 16);
          if ( v12 < *(_QWORD *)(v5 + 8) )
            v12 = *(_QWORD *)(v5 + 8);
          if ( v12 > v11 )
          {
LABEL_17:
            if ( v19[0] )
              MiFreeWsleList(a1, v19, 0LL);
            break;
          }
        }
        a2 = *(_QWORD *)(*(_QWORD *)(v5 + 496) + v12 * *(unsigned int *)(v5 + 64));
        if ( (a2 & 1) != 0 )
        {
          if ( (a2 & 0x800000000000LL) != 0 )
            a2 |= 0xFFFF000000000000uLL;
          else
            a2 &= 0xFFFFFFFFFFFFuLL;
          if ( (a3 & 2) == 0 || a2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            MiEmptyWorkingSetHelper(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v12, v19, v18);
        }
        if ( ++v12 > v11 )
          goto LABEL_17;
      }
    }
    MiRemoveWorkingSetPages(a1, a2);
    if ( v8 == 1 )
    {
      LOBYTE(v13) = CurrentIrql;
      MiUnlockWorkingSetExclusive(a1, v13);
    }
    return 0LL;
  }
}
