/*
 * XREFs of MiImageUnused @ 0x1401202EC
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

int __fastcall MiImageUnused(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // rax
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // rdi
  unsigned int v9; // esi
  signed __int32 v10; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_QWORD **)(a1 + 96);
  *(_DWORD *)a3 = -1;
  if ( *v5 )
  {
    if ( a2 == 1 )
    {
      CurrentIrql = 17;
    }
    else
    {
      v8 = (volatile signed __int32 *)(a1 + 72);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 72);
      }
      else
      {
        v9 = 0;
        if ( _interlockedbittestandset(v8, 0x1Fu) )
          v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 72));
        while ( 1 )
        {
          v10 = *v8;
          if ( (*v8 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v10 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v8, v10 | 0x40000000, v10);
          if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v9);
        }
      }
    }
    LODWORD(v5) = *(_DWORD *)(a1 + 88);
    if ( (_DWORD)v5 != -1 )
    {
      v7 = *(_DWORD *)(a1 + 92);
      *(_DWORD *)a3 = (_DWORD)v5;
      *(_DWORD *)(a3 + 4) = (unsigned __int16)v7;
      *(_DWORD *)(a3 + 8) = (v7 >> 29) & 3;
      LODWORD(v5) = *(_DWORD *)(a1 + 56);
      if ( ((unsigned int)v5 & 0x10000000) != 0 )
      {
        LODWORD(v5) = (unsigned int)v5 & 0xEFFFFFFF;
        *(_DWORD *)(a1 + 56) = (_DWORD)v5;
        *(_BYTE *)(a3 + 13) = (v7 & 0x2000000) != 0;
        *(_BYTE *)(a3 + 12) = 1;
      }
      *(_DWORD *)(a1 + 88) = -1;
    }
    *(_DWORD *)(a1 + 92) &= ~0x80000000;
    if ( CurrentIrql != 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 72, retaddr);
      else
        *(_DWORD *)(a1 + 72) = 0;
      LODWORD(v5) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return (int)v5;
}
