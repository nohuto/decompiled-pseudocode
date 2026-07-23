/*
 * XREFs of PfSnActiveTraceGetNext @ 0x1400EAFA0
 * Callers:
 *     PfSnNameRemoveAll @ 0x1404F4BC4 (PfSnNameRemoveAll.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&qword_140328710);
  v3 = (__int64 *)&a1[1];
  if ( !a1 )
    v3 = &PfSnGlobals;
  while ( 1 )
  {
    v3 = (__int64 *)v3[1];
    if ( v3 == &PfSnGlobals )
      break;
    v4 = v3 - 1;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v3 + 44) )
      goto LABEL_5;
  }
  v4 = 0LL;
LABEL_5:
  KxReleaseSpinLock(&qword_140328710);
  __writecr8(CurrentIrql);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 45);
  return v4;
}
