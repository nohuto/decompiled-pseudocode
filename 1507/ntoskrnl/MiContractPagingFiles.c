/*
 * XREFs of MiContractPagingFiles @ 0x1400EE56C
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiOkToShrinkPageFiles @ 0x1400EE5E8 (MiOkToShrinkPageFiles.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  _QWORD *v6; // rdx
  unsigned __int8 CurrentIrql; // si
  unsigned int v8; // edi
  __int64 v9; // rax
  _QWORD *v10; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 5576), *(_QWORD *)(a1 + 5736));
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(a1 + 5336);
    v5 = 0;
    if ( v4 )
    {
      v3 = a1 + 5344;
      do
      {
        v6 = *(_QWORD **)v3;
        if ( (*(_BYTE *)(*(_QWORD *)v3 + 164LL) & 0x50) == 0 )
        {
          result = v6[2];
          if ( *v6 != result && v6[3] > 0x4000uLL )
            break;
        }
        ++v5;
        v3 += 8LL;
      }
      while ( v5 < v4 );
    }
    if ( v5 != v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
      }
      else
      {
        v8 = 0;
        if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
          v8 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
        while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (dword_14034E740 & 0x40000000) == 0 )
            _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
      }
      if ( *(_QWORD *)(a1 + 488) == -1LL )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
        else
          dword_14034E740 = 0;
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      else
      {
        *(_QWORD *)(a1 + 456) = 0LL;
        *(_QWORD *)(a1 + 488) = -1LL;
        v9 = a1 + 464;
        *(_QWORD *)(a1 + 480) = a1;
        *(_BYTE *)(a1 + 545) = 1;
        v10 = *(_QWORD **)(a1 + 1264);
        *(_QWORD *)(a1 + 464) = a1 + 1256;
        *(_QWORD *)(a1 + 472) = v10;
        if ( *v10 != a1 + 1256 )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(a1 + 1264) = v9;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
        else
          dword_14034E740 = 0;
        __writecr8(CurrentIrql);
        return KeReleaseSemaphoreEx(a1 + 1224, 0, 1, v3, 0);
      }
    }
  }
  return result;
}
