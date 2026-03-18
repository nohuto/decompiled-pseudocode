/*
 * XREFs of NormalizationList__InsertTail @ 0x140219320
 * Callers:
 *     RtlpGetNormalization @ 0x14068C59C (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _QWORD *result; // rax

  result = off_1402F4B58;
  if ( *off_1402F4B58 != (_UNKNOWN *)&NormalizationListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  off_1402F4B58 = (_UNKNOWN **)a1;
  return result;
}
