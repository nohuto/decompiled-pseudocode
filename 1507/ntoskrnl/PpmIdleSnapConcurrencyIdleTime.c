/*
 * XREFs of PpmIdleSnapConcurrencyIdleTime @ 0x140235158
 * Callers:
 *     PopAccumulateNonActivatedCpuTime @ 0x14023C8F0 (PopAccumulateNonActivatedCpuTime.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PpmIdleSnapConcurrencyIdleTime(__int64 a1, _QWORD *a2, __int64 *a3)
{
  LARGE_INTEGER PerformanceCounter; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // zf
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-8h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)a1);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)a1);
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( PerformanceCounter.QuadPart > v7 )
  {
    *(LARGE_INTEGER *)(a1 + 16) = PerformanceCounter;
    v8 = PerformanceCounter.QuadPart - v7;
    v9 = *(unsigned int *)(a1 + 12);
    *(_QWORD *)(a1 + 24) += v8;
    *(_QWORD *)(a1 + 8 * v9 + 32) += v8;
  }
  v10 = (BYTE6(PerfGlobalGroupMask) & 1) == 0;
  *a2 = *(_QWORD *)(a1 + 24);
  result = *(_QWORD *)(a1 + 32);
  *a3 = result;
  if ( v10 )
    _InterlockedAnd64((volatile signed __int64 *)a1, 0LL);
  else
    result = KiReleaseSpinLockInstrumented((volatile signed __int64 *)a1, retaddr);
  if ( (v12 & 0x200) != 0 )
    _enable();
  return result;
}
