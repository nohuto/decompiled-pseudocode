/*
 * XREFs of RIMFindAndAbandonHoldingFrame @ 0x1C00C856C
 * Callers:
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     RIMFindHoldingFrame @ 0x1C007806C (RIMFindHoldingFrame.c)
 *     RIMAbandonHoldingFrame @ 0x1C00C84D4 (RIMAbandonHoldingFrame.c)
 */

_QWORD *__fastcall RIMFindAndAbandonHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = RIMFindHoldingFrame(a1, a2);
  if ( result )
    return (_QWORD *)RIMAbandonHoldingFrame(v4, v3, (__int64)result);
  return result;
}
