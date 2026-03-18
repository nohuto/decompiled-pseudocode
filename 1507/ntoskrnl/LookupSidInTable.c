/*
 * XREFs of LookupSidInTable @ 0x14070A2A8
 * Callers:
 *     LocalConvertAclToString @ 0x140708CD8 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x14070A0FC (LocalGetStringForSid.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 */

char *__fastcall LookupSidInTable(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // rbx
  PSID *v10; // rsi
  unsigned int v11; // edi

  v7 = 0LL;
  if ( !a2 )
    return 0LL;
  v10 = (PSID *)&unk_140316F30;
  v11 = 0;
  *a7 = 0LL;
  do
  {
    if ( RtlEqualSid(a2, *v10) )
      break;
    ++v11;
    v10 += 13;
  }
  while ( v11 < 0x3F );
  if ( v11 < 0x3F )
    return (char *)&unk_140316F20 + 104 * v11;
  return (char *)v7;
}
