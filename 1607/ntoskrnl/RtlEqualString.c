/*
 * XREFs of RtlEqualString @ 0x140096E20
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x1404A7B3C (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // r14
  char *v6; // rsi
  signed __int64 v7; // r14
  signed __int64 v9; // r14
  CHAR v10; // bp
  CHAR v11; // cl
  CHAR v12; // bl

  Length = String1->Length;
  if ( (_DWORD)Length == String2->Length )
  {
    Buffer = String1->Buffer;
    v5 = String2->Buffer;
    v6 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v9 = v5 - Buffer;
        while ( 1 )
        {
          v10 = *Buffer;
          v11 = Buffer[v9];
          if ( *Buffer != v11 )
          {
            v12 = RtlUpperChar(v11);
            if ( RtlUpperChar(v10) != v12 )
              break;
          }
          if ( ++Buffer >= v6 )
            return 1;
        }
        return 0;
      }
    }
    else if ( Buffer < v6 )
    {
      v7 = v5 - Buffer;
      while ( *Buffer == Buffer[v7] )
      {
        if ( ++Buffer >= v6 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
