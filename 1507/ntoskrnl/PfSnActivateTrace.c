/*
 * XREFs of PfSnActivateTrace @ 0x140126794
 * Callers:
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PfSnAddProcessTrace @ 0x140126878 (PfSnAddProcessTrace.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  unsigned __int64 v2; // rtt
  unsigned __int8 CurrentIrql; // si
  int v4; // ebx
  __int64 **v5; // rax
  __int64 *v6; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  _m_prefetchw(&stru_1403535F0);
  v2 = stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_1403535F0,
               (stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_1403535F0.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&stru_1403535F0) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&qword_140353640);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
    }
    v4 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v4 >= 0 )
    {
      v5 = (__int64 **)qword_140353638;
      v6 = (__int64 *)(a1 + 8);
      v6[1] = qword_140353638;
      *v6 = (__int64)&PfSnGlobals;
      if ( *v5 != &PfSnGlobals )
        __fastfail(3u);
      ++PfSnNumActiveTraces;
      *v5 = v6;
      v4 = 0;
      qword_140353638 = (__int64)v6;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
    else
      _InterlockedAnd64(&qword_140353640, 0LL);
    __writecr8(CurrentIrql);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v4;
}
