/*
 * XREFs of VmpFlushTb @ 0x14025B680
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     VmpProcessFlushEntire @ 0x14025BB10 (VmpProcessFlushEntire.c)
 *     VmpProcessInvalidateSlat @ 0x14025BB7C (VmpProcessInvalidateSlat.c)
 *     VmpProcessMemoryRangeCompareVpn @ 0x14025BBE0 (VmpProcessMemoryRangeCompareVpn.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall VmpFlushTb(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // r14
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 result; // rax
  unsigned int v8; // ebx
  signed __int32 v9; // eax
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  unsigned int v13; // ebx
  signed __int32 v14; // eax
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = -1LL;
  v4 = a3;
  if ( a2 )
  {
    v10 = 0LL;
    result = (unsigned __int64)&a3[a2];
    v19 = result;
    if ( (unsigned __int64)a3 >= result )
      return result;
    do
    {
      result = (unsigned __int64)MmHighestUserAddress;
      if ( *v4 <= (unsigned __int64)MmHighestUserAddress )
      {
        if ( v3 == -1 )
        {
          LOBYTE(v3) = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
          }
          else
          {
            v13 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
              v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
            while ( 1 )
            {
              v14 = *(_DWORD *)a1;
              if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
                break;
              if ( (v14 & 0x40000000) == 0 )
                _InterlockedCompareExchange((volatile signed __int32 *)a1, v14 | 0x40000000, v14);
              if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v13);
            }
          }
          v3 = (unsigned __int8)v3;
        }
        result = (*v4 & 0x7FFLL) + 1;
        if ( (*v4 & 0x800LL) != 0 )
          result <<= 9;
        v11 = *v4 >> 12;
        v12 = v11 + result - 1;
        while ( 1 )
        {
          v18 = v11;
          if ( v11 > v12 )
            break;
          if ( !v10 || v11 < v10[8] || v11 > v10[9] )
          {
            v10 = *(_QWORD **)(a1 + 24);
            v15 = 0LL;
            if ( v10 )
            {
              while ( 1 )
              {
                result = VmpProcessMemoryRangeCompareVpn(&v18, v10);
                if ( !(_DWORD)result )
                  break;
                if ( (result & 0x80000000) == 0LL )
                {
                  v10 = (_QWORD *)v10[1];
                }
                else
                {
                  v15 = v10;
                  v10 = (_QWORD *)*v10;
                }
                if ( !v10 )
                {
                  v11 = v18;
                  goto LABEL_42;
                }
              }
              v11 = v18;
            }
            else
            {
LABEL_42:
              v10 = v15;
            }
            if ( !v10 )
              break;
          }
          result = v10[8];
          if ( v11 < result )
          {
            if ( v12 < result )
              break;
            v11 = v10[8];
            v18 = v11;
          }
          v16 = v12;
          if ( v12 > v10[9] )
            v16 = v10[9];
          v17 = 1 - v11 + v16;
          result = VmpProcessInvalidateSlat(a1, v11 + v10[6] - v10[8], v17);
          v11 = v17 + v18;
        }
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v19 );
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
      while ( 1 )
      {
        v9 = *(_DWORD *)a1;
        if ( (*(_DWORD *)a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)a1, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
    v3 = CurrentIrql;
    result = VmpProcessFlushEntire(a1);
  }
  if ( v3 != -1 )
  {
    ++*(_QWORD *)(a1 + 40);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1, retaddr);
    else
      *(_DWORD *)a1 = 0;
    result = (unsigned __int8)v3;
    __writecr8((unsigned __int8)v3);
  }
  return result;
}
