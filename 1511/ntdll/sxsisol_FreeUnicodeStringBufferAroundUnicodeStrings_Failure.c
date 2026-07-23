/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure @ 0x180017D30
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 */

void *__fastcall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure(_QWORD *a1)
{
  unsigned __int16 **v2; // rdi
  _WORD *v3; // rax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_BYTE *)a1 + 80) )
  {
    v2 = (unsigned __int16 **)(a1 + 2);
    if ( a1 != (_QWORD *)-16LL && *v2 )
    {
      if ( *v2 != (unsigned __int16 *)a1[3] )
      {
        UnicodeString.Buffer = *v2;
        RtlFreeAnsiString(&UnicodeString);
      }
      *v2 = (unsigned __int16 *)a1[3];
      a1[4] = a1[5];
    }
    v3 = (_WORD *)a1[3];
    a1[1] = v3;
    if ( v3 )
      *v3 = 0;
    *((_WORD *)a1 + 1) = *((_WORD *)a1 + 20);
    *(_WORD *)a1 = 0;
  }
  return memset(a1, 0, 0x58uLL);
}
