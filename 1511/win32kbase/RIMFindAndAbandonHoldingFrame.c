/*
 * XREFs of RIMFindAndAbandonHoldingFrame @ 0x1C00C946C
 * Callers:
 *     RIMAbortDeviceActivity @ 0x1C00C45E4 (RIMAbortDeviceActivity.c)
 *     RIMEndAllActiveContacts @ 0x1C00C4C1C (RIMEndAllActiveContacts.c)
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 * Callees:
 *     RIMFindHoldingFrame @ 0x1C007B830 (RIMFindHoldingFrame.c)
 *     RIMAbandonHoldingFrame @ 0x1C00C93D4 (RIMAbandonHoldingFrame.c)
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
