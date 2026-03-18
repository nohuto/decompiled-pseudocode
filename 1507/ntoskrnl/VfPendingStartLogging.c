/*
 * XREFs of VfPendingStartLogging @ 0x14074292C
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x14074031C (IovpCompleteRequest1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall VfPendingStartLogging(__int64 a1)
{
  _QWORD *result; // rax

  if ( !VfForcedPendingLog )
    return 0LL;
  result = (_QWORD *)(VfForcedPendingLog
                    + ((unsigned __int64)(_InterlockedIncrement(&VfForcedPendingIrps) & (unsigned int)(VfForcedPendingLogLength - 1)) << 9));
  *result = a1;
  result[1] = KeGetCurrentThread();
  result[2] = 0LL;
  return result;
}
