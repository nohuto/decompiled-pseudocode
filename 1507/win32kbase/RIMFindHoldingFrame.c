/*
 * XREFs of RIMFindHoldingFrame @ 0x1C007806C
 * Callers:
 *     RIMFindAndRemoveHoldingFrame @ 0x1C0078018 (RIMFindAndRemoveHoldingFrame.c)
 *     RIMFindAndAbandonHoldingFrame @ 0x1C00C856C (RIMFindAndAbandonHoldingFrame.c)
 *     RIMGetCompleteFrameAndReleaseHoldingFrame @ 0x1C00C8588 (RIMGetCompleteFrameAndReleaseHoldingFrame.c)
 *     RIMStoreFrameNodes @ 0x1C00C8970 (RIMStoreFrameNodes.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RIMFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx

  v2 = (_QWORD *)(a1 + 680);
  v3 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 16);
  do
  {
    v6 = v3;
    if ( v3[2] == v5 )
      break;
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v3 == v2 )
    return 0LL;
  return v6;
}
