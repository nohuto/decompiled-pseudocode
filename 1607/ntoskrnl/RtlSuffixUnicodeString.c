/*
 * XREFs of RtlSuffixUnicodeString @ 0x140685684
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 Length; // r9
  unsigned __int16 v5; // dx
  wchar_t *Buffer; // r8
  wchar_t *v9; // rcx
  unsigned __int64 v10; // rdx
  wchar_t *v11; // r11
  char *v12; // rdi
  wchar_t v13; // r9
  unsigned __int16 v14; // r10
  char *v15; // rdx

  Length = String1->Length;
  v5 = String2->Length;
  if ( v5 < String1->Length )
    return 0;
  Buffer = String1->Buffer;
  v9 = String2->Buffer;
  v10 = (unsigned __int64)(v5 - Length) >> 1;
  v11 = &Buffer[(unsigned __int64)Length >> 1];
  if ( CaseInSensitive )
  {
    if ( Buffer < v11 )
    {
      v12 = (char *)v9 + 2 * v10 - (_QWORD)Buffer;
      while ( 1 )
      {
        v13 = *Buffer;
        if ( *Buffer >= 0x61u )
        {
          if ( v13 > 0x7Au )
            v13 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v13 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v13 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v13 >> 8)]]];
          else
            v13 -= 32;
        }
        v14 = *(wchar_t *)((char *)Buffer + (_QWORD)v12);
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
            v14 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v14 & 0xF)
                                                                           + 2
                                                                           * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v14 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v14 >> 8)]]];
          else
            v14 -= 32;
        }
        if ( v13 != v14 )
          break;
        if ( ++Buffer >= v11 )
          return 1;
      }
      return 0;
    }
  }
  else if ( Buffer < v11 )
  {
    v15 = (char *)v9 + 2 * v10 - (_QWORD)Buffer;
    while ( *Buffer == *(wchar_t *)((char *)Buffer + (_QWORD)v15) )
    {
      if ( ++Buffer >= v11 )
        return 1;
    }
    return 0;
  }
  return 1;
}
