/*
 * XREFs of NormalizationList__InsertTail @ 0x1401FFF64
 * Callers:
 *     RtlpGetNormalization @ 0x14064D1C8 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

_UNKNOWN ***__fastcall NormalizationList__InsertTail(__int64 a1)
{
  _UNKNOWN ***result; // rax

  result = (_UNKNOWN ***)off_1402D3DA8;
  *(_QWORD *)a1 = &NormalizationListHead;
  *(_QWORD *)(a1 + 8) = result;
  if ( *result != &NormalizationListHead )
    __fastfail(3u);
  *result = (_UNKNOWN **)a1;
  off_1402D3DA8 = (_UNKNOWN **)a1;
  return result;
}
