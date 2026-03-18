/*
 * XREFs of SepIsNgenImage @ 0x1405092B4
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14050B8C8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 */

char __fastcall SepIsNgenImage(unsigned __int16 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  unsigned __int16 v3; // dx
  unsigned int v5; // edi
  unsigned __int16 v6; // ax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = qword_14036C8F8;
  if ( !qword_14036C8F8 )
    return 0;
  v2 = *(_DWORD *)qword_14036C8F8;
  if ( !*(_DWORD *)qword_14036C8F8 )
    return 0;
  v3 = *a1;
  if ( *a1 < *(_WORD *)(qword_14036C8F8 + 4) )
    return 0;
  if ( v3 > *(_WORD *)(qword_14036C8F8 + 6) )
    return 0;
  String1.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + 8LL);
  v5 = 0;
  v6 = a1[1] - 8;
  String1.Length = v3 - 8;
  String1.MaximumLength = v6;
  if ( !v2 )
    return 0;
  while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(16LL * v5 + v1 + 8), 1u) )
  {
    if ( ++v5 >= v2 )
      return 0;
  }
  return 1;
}
