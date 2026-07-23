/*
 * XREFs of VfPendingStartLogging @ 0x14070D268
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     IovpCompleteRequest1 @ 0x14070B0E0 (IovpCompleteRequest1.c)
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
