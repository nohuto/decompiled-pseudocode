/*
 * XREFs of BvgaAcquireDisplayOwnership @ 0x1401C3ED8
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x1401C4088 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *BvgaAcquireDisplayOwnership())(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = BvgaResetDisplayParameters;
  if ( BvgaResetDisplayParameters && BvgaDisplayState == 2 )
    result = (__int64 (__fastcall *)(_QWORD))BvgaResetDisplayParameters(80LL);
  BvgaDisplayState = 0;
  return result;
}
