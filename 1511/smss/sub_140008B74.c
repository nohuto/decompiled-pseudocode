/*
 * XREFs of sub_140008B74 @ 0x140008B74
 * Callers:
 *     sub_140008270 @ 0x140008270 (sub_140008270.c)
 * Callees:
 *     <none>
 */

const UNICODE_STRING *__fastcall sub_140008B74(const UNICODE_STRING **a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx

  v2 = *a1;
  if ( *a1 == (const UNICODE_STRING *)a1 )
    return 0LL;
  while ( RtlCompareUnicodeString(v2 + 1, a2, 1u) )
  {
    v2 = *(const UNICODE_STRING **)&v2->Length;
    if ( v2 == (const UNICODE_STRING *)a1 )
      return 0LL;
  }
  return v2;
}
