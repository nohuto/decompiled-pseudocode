/*
 * XREFs of PfSnStartTraceTimer @ 0x1400FAD0C
 * Callers:
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 */

__int64 __fastcall PfSnStartTraceTimer(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  struct _EX_RUNDOWN_REF *v2; // rbx
  KSPIN_LOCK *p_Count; // rbp
  KIRQL v4; // r14
  unsigned int v5; // edi

  v1 = a1 + 45;
  v2 = a1;
  if ( ExAcquireRundownProtection(a1 + 45) )
  {
    p_Count = &v2[34].Count;
    v4 = KeAcquireSpinLockRaiseToDpc(&v2[34].Count);
    if ( (v2[35].Count & 2) != 0 )
    {
      v5 = -1073741431;
    }
    else if ( KeSetTimer((PKTIMER)&v2[17], (LARGE_INTEGER)v2[25].Count, (PKDPC)&v2[26]) )
    {
      v5 = -1073741595;
    }
    else
    {
      LODWORD(v2[35].Count) |= 1u;
      v2 = 0LL;
      v5 = 0;
    }
    KeReleaseSpinLock(p_Count, v4);
    if ( v2 )
      ExReleaseRundownProtection_0(v1);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
