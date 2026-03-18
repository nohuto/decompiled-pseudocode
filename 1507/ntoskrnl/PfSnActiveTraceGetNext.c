/*
 * XREFs of PfSnActiveTraceGetNext @ 0x140112EB8
 * Callers:
 *     PfSnNameRemoveAll @ 0x14052B72C (PfSnNameRemoveAll.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rcx
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rtt
  void *retaddr; // [rsp+38h] [rbp+0h]

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
  v3 = (__int64 *)&a1[1];
  if ( !a1 )
    v3 = &PfSnGlobals;
  while ( 1 )
  {
    v3 = (__int64 *)v3[1];
    if ( v3 == &PfSnGlobals )
      break;
    v4 = v3 - 1;
    v5 = (struct _EX_RUNDOWN_REF *)(v3 + 44);
    _m_prefetchw(v5);
    v6 = v5->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v5, v6 + 2, v6)
      || ExfAcquireRundownProtection(v5) )
    {
      goto LABEL_8;
    }
  }
  v4 = 0LL;
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
  else
    _InterlockedAnd64(&qword_140353640, 0LL);
  __writecr8(CurrentIrql);
  if ( a1 )
  {
    _m_prefetchw(&a1[45]);
    v7 = a1[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[45], v7 - 2, v7) )
      ExfReleaseRundownProtection(a1 + 45);
  }
  return v4;
}
