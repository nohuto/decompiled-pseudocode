/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025E16C
 * Callers:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(char *a1)
{
  char *v2; // rdx

  memset(a1, 0, 0x20uLL);
  v2 = 0LL;
  if ( a1 )
    v2 = a1 - 16;
  PushThreadGuardedObject(
    a1,
    v2,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
