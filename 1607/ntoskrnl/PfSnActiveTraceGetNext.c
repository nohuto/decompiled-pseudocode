/*
 * XREFs of PfSnActiveTraceGetNext @ 0x1400ED130
 * Callers:
 *     PfSnNameRemoveAll @ 0x1405117D4 (PfSnNameRemoveAll.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock(&qword_1403286D0);
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
  KxReleaseSpinLock(&qword_1403286D0);
  __writecr8(CurrentIrql);
  if ( a1 )
    ExReleaseRundownProtection(a1 + 45);
  return v4;
}
