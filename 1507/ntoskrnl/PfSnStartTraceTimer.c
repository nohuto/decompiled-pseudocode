/*
 * XREFs of PfSnStartTraceTimer @ 0x140129BE4
 * Callers:
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PfSnStartTraceTimer(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  struct _EX_RUNDOWN_REF *v2; // rbx
  unsigned __int64 v3; // rtt
  volatile signed __int32 *v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edi
  unsigned __int64 v8; // rtt
  void *retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1;
  v2 = a1 + 45;
  _m_prefetchw(&a1[45]);
  v3 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v3 == _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v3 + 2, v3)
    || ExfAcquireRundownProtection(a1 + 45) )
  {
    v4 = (volatile signed __int32 *)&v1[34];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&v1[34]);
    }
    else if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v1[34]);
    }
    if ( (v1[35].Count & 2) != 0 )
    {
      v6 = -1073741431;
    }
    else if ( KiSetTimerEx((__int64)&v1[17], v1[25].Count, 0, 0, (__int64)&v1[26]) )
    {
      v6 = -1073741595;
    }
    else
    {
      LODWORD(v1[35].Count) |= 1u;
      v1 = 0LL;
      v6 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    __writecr8(CurrentIrql);
    if ( v1 )
    {
      _m_prefetchw(v2);
      v8 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v8 - 2, v8) )
        ExfReleaseRundownProtection(v2);
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v6;
}
