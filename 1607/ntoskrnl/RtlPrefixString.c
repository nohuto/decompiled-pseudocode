/*
 * XREFs of RtlPrefixString @ 0x1404A79A0
 * Callers:
 *     IopCheckDiskName @ 0x14013D11C (IopCheckDiskName.c)
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 * Callees:
 *     RtlUpperChar @ 0x1404A7B3C (RtlUpperChar.c)
 */

BOOLEAN __stdcall RtlPrefixString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  char *Buffer; // rdi
  char *v5; // r14
  char *v6; // rsi
  signed __int64 v7; // r14
  CHAR v8; // bp
  CHAR v9; // cl
  CHAR v11; // bl
  signed __int64 v12; // r14

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
          v8 = *Buffer;
          v9 = Buffer[v7];
          if ( *Buffer != v9 )
          {
            v11 = RtlUpperChar(v9);
            if ( RtlUpperChar(v8) != v11 )
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
      v12 = v5 - Buffer;
      while ( *Buffer == Buffer[v12] )
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
