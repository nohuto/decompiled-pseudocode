/*
 * XREFs of RtlEqualString @ 0x1401115A0
 * Callers:
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 * Callees:
 *     RtlUpperChar @ 0x140529258 (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rbx
  char *v5; // r14
  char *v6; // rsi
  signed __int64 v7; // r14
  signed __int64 v9; // r14
  CHAR v10; // bp
  CHAR v11; // cl
  CHAR v12; // di

  Length = String1->Length;
  if ( (_DWORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  v6 = &Buffer[Length];
  if ( CaseInSensitive )
  {
    if ( Buffer >= v6 )
    {
      return 1;
    }
    else
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
  else if ( Buffer >= v6 )
  {
    return 1;
  }
  else
  {
    v7 = v5 - Buffer;
    while ( *Buffer == Buffer[v7] )
    {
      if ( ++Buffer >= v6 )
        return 1;
    }
    return 0;
  }
}
