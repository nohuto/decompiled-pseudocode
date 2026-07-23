/*
 * XREFs of RtlPrefixString @ 0x180073A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180073B70 (RtlUpperChar.c)
 */

BOOLEAN __cdecl RtlPrefixString(PSTRING String1, PSTRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // r14
  char *v6; // rsi
  signed __int64 v7; // r14
  CHAR v8; // cl
  CHAR v10; // bl
  signed __int64 v11; // r14

  Length = String1->Length;
  Buffer = String1->Buffer;
  v5 = String2->Buffer;
  if ( String2->Length >= (unsigned int)Length )
  {
    v6 = &Buffer[Length];
    if ( CaseInSensitive )
    {
      if ( Buffer < v6 )
      {
        v7 = v5 - Buffer;
        while ( 1 )
        {
          v8 = Buffer[v7];
          if ( *Buffer != v8 )
          {
            v10 = RtlUpperChar(v8);
            if ( RtlUpperChar(*Buffer) != v10 )
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
      v11 = v5 - Buffer;
      while ( *Buffer == Buffer[v11] )
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
