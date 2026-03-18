/*
 * XREFs of PfSnActiveTraceGetNext @ 0x14002D7B4
 * Callers:
 *     PfSnNameRemoveAll @ 0x1403F1D78 (PfSnNameRemoveAll.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

__int64 *__fastcall PfSnActiveTraceGetNext(struct _EX_RUNDOWN_REF *a1)
{
  KIRQL v2; // bp
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
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
  KeReleaseSpinLock(&qword_1403058D0, v2);
  if ( a1 )
    ExReleaseRundownProtection_0(a1 + 45);
  return v4;
}
