/*
 * XREFs of MiInitializeFileExtents @ 0x140230AFC
 * Callers:
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiExtendExtentSubsection @ 0x14021E4DC (MiExtendExtentSubsection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MiEnableFileExtents @ 0x140230720 (MiEnableFileExtents.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1406AA2A0 (MiAllocateFileExtents.c)
 *     MiReleaseFileExtentWaiters @ 0x1406AA4D8 (MiReleaseFileExtentWaiters.c)
 */

__int64 __fastcall MiInitializeFileExtents(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int64 v4; // r12
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx
  int v7; // esi
  char *v8; // rsi
  int v9; // ebp
  __int64 v10; // rdi
  unsigned int v11; // edi
  signed __int32 v12; // eax
  unsigned int v13; // edi
  signed __int32 v14; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  if ( a1[1] )
    return 0LL;
  v4 = a2;
  v5 = (volatile signed __int32 *)(*a1 + 72LL);
  while ( 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    else
      *v5 = 0;
    __writecr8(v4);
    v7 = MiAllocateFileExtents(a1, &P);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
    }
    else
    {
      v11 = 0;
      if ( _interlockedbittestandset(v5, 0x1Fu) )
        v11 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
      while ( 1 )
      {
        v12 = *v5;
        if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v12 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v5, v12 | 0x40000000, v12);
        if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v11);
      }
    }
    if ( v7 < 0 )
      break;
    v8 = (char *)P;
    LOBYTE(v6) = a2;
    v9 = MiEnableFileExtents(a1, v6, (__int64)P);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    v10 = *(_QWORD *)v8;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
    else
      *v5 = 0;
    __writecr8(v4);
    if ( v10 )
      MiReleaseFileExtentWaiters(v10);
    MiDeleteFileExtents(v8, 0, 0, 6);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5);
    }
    else
    {
      v13 = 0;
      if ( _interlockedbittestandset(v5, 0x1Fu) )
        v13 = ExpWaitForSpinLockExclusiveAndAcquire(v5);
      while ( 1 )
      {
        v14 = *v5;
        if ( (*v5 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v14 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v5, v14 | 0x40000000, v14);
        if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v13);
      }
    }
    if ( v9 != -1073741791 )
      return (unsigned int)v9;
    if ( a1[1] )
      return 0LL;
  }
  return (unsigned int)v7;
}
