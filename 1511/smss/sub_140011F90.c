/*
 * XREFs of sub_140011F90 @ 0x140011F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 *     sub_1400047B4 @ 0x1400047B4 (sub_1400047B4.c)
 */

__int64 __fastcall sub_140011F90(__int64 a1, _BYTE *a2)
{
  unsigned int v3; // esi
  __int64 *v5; // rdi
  __int64 i; // rbx
  __int64 v7; // r8
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  String1.Length = *(_WORD *)(a1 + 48);
  String1.MaximumLength = String1.Length;
  String1.Buffer = (PWSTR)(a1 + 52);
  v3 = sub_1400047B4((__int64)a2, &v9);
  if ( !v9 )
    return 3221225473LL;
  v5 = &qword_140020130;
  if ( (*a2 & 8) == 0 )
    v5 = &qword_140020140;
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v5 )
      return 3221225524LL;
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(i + 16), 1u) )
      break;
  }
  return sub_140001E9C(i + 32, v3, v7, 72, 0LL);
}
