/*
 * XREFs of sub_140008E98 @ 0x140008E98
 * Callers:
 *     sub_140008E1C @ 0x140008E1C (sub_140008E1C.c)
 * Callees:
 *     sub_140008D78 @ 0x140008D78 (sub_140008D78.c)
 */

void __fastcall sub_140008E98(PCUNICODE_STRING String2)
{
  __int64 v1; // rbx
  _QWORD *v3; // rdi
  LONG v4; // eax

  v1 = qword_1400201D0;
  while ( (__int64 *)v1 != &qword_1400201D0 )
  {
    v3 = (_QWORD *)v1;
    v4 = RtlCompareUnicodeString((PCUNICODE_STRING)(v1 + 16), String2, 1u);
    v1 = *(_QWORD *)v1;
    if ( !v4 )
      sub_140008D78(v3);
  }
}
