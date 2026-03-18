/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x1C00DA008
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C00D9824 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C000D380 (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C00DA25C (rimReclaimHoldingFrame.c)
 */

_QWORD *__fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = rimFindHoldingFrame(a1, a2);
  if ( result )
    return (_QWORD *)rimReclaimHoldingFrame(v4, v3, result);
  return result;
}
