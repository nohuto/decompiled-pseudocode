/*
 * XREFs of sub_1400D19B4 @ 0x1400D19B4
 * Callers:
 *     sub_1400D197C @ 0x1400D197C (sub_1400D197C.c)
 *     RtlUnicodeStringCopy @ 0x140233C18 (RtlUnicodeStringCopy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400D19B4(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r8
  __int64 result; // rax
  unsigned __int16 v3; // dx

  v1 = *a1;
  result = 0LL;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  v3 = a1[1];
  if ( (v3 & 1) != 0 || v1 > v3 || v3 == 0xFFFF || !*((_QWORD *)a1 + 1) && (v1 || v3) )
    return 3221225485LL;
  return result;
}
