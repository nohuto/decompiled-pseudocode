/*
 * XREFs of FsRtlDissectDbcs @ 0x14061ECEC
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1404B6294 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x14061F4F4 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlDissectDbcs(ANSI_STRING *Path, PANSI_STRING FirstName, PANSI_STRING RemainingName)
{
  unsigned int Length; // edx
  char *Buffer; // rsi
  __int64 v7; // rcx
  __int64 i; // rbx
  unsigned __int8 v9; // r10
  unsigned __int16 v10; // dx

  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  Length = Path->Length;
  if ( Path->Length )
  {
    Buffer = Path->Buffer;
    v7 = *Buffer == 92;
    for ( i = v7; (unsigned int)v7 < Length; v7 = (unsigned int)(v7 + 1) )
    {
      v9 = Buffer[v7];
      if ( v9 == 92 )
        break;
      if ( v9 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v9] )
        LODWORD(v7) = v7 + 1;
    }
    FirstName->Length = v7 - i;
    FirstName->MaximumLength = v7 - i;
    FirstName->Buffer = &Path->Buffer[i];
    if ( (unsigned int)v7 < Length )
    {
      v10 = Length - v7 - 1;
      RemainingName->Length = v10;
      RemainingName->MaximumLength = v10;
      RemainingName->Buffer = &Path->Buffer[(unsigned int)(v7 + 1)];
    }
  }
}
