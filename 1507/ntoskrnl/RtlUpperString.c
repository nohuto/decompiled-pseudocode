/*
 * XREFs of RtlUpperString @ 0x140524900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // r11d
  unsigned __int16 MaximumLength; // ax
  char *Buffer; // r10
  char *v5; // r9
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14
  char v10; // al
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // bx

  Length = SourceString->Length;
  MaximumLength = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v5 = SourceString->Buffer;
  if ( (unsigned __int16)Length > MaximumLength )
    Length = MaximumLength;
  DestinationString->Length = Length;
  if ( Length )
  {
    v6 = NlsUnicodeToAnsiData;
    v7 = NlsAnsiToUnicodeData;
    v8 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
    v9 = NlsUnicodeToMbAnsiData;
    do
    {
      v10 = *v5;
      if ( *v5 > 122 )
      {
        if ( (_BYTE)NlsMbCodePageTag )
        {
          if ( !NlsLeadByteInfoTable[v10] )
          {
            v12 = *(_WORD *)(v7 + 2LL * (unsigned __int8)v10);
            if ( v12 >= 0x61u )
            {
              if ( v12 > 0x7Au )
                v12 += *(_WORD *)(v8
                                + 2LL
                                * ((v12 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(v8
                                                                     + 2LL
                                                                     * (((v12 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(v8 + 2 * ((unsigned __int64)v12 >> 8))))));
              else
                v12 -= 32;
            }
            if ( !HIBYTE(*(_WORD *)(v9 + 2LL * v12)) )
              v10 = *(_WORD *)(v9 + 2LL * v12);
          }
        }
        else
        {
          v11 = *(_WORD *)(v7 + 2LL * (unsigned __int8)v10);
          if ( v11 >= 0x61u )
          {
            if ( v11 > 0x7Au )
              v11 += *(_WORD *)(v8
                              + 2LL
                              * ((v11 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(v8
                                                                   + 2LL
                                                                   * (((v11 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(v8 + 2 * ((unsigned __int64)v11 >> 8))))));
            else
              v11 -= 32;
          }
          v10 = *(_BYTE *)(v11 + v6);
        }
      }
      else if ( v10 >= 97 )
      {
        v10 ^= 0x20u;
      }
      *Buffer = v10;
      ++v5;
      ++Buffer;
      --Length;
    }
    while ( Length );
  }
}
