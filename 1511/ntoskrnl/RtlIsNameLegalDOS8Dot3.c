/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x14049DF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14049E0F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  char v3; // si
  BOOLEAN v4; // bp
  POEM_STRING v6; // rdi
  __int64 v7; // rbx
  unsigned __int16 Length; // cx
  char *v9; // r9
  unsigned __int8 v10; // dl
  int v11; // eax
  char *Buffer; // rax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  char *v15; // [rsp+28h] [rbp-50h]
  char v16; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v4 = 0;
  v6 = OemName;
  if ( Name->Length > 0x18u )
    return 0;
  v7 = 0LL;
  if ( !OemName )
  {
    v14 = 786432;
    v15 = &v16;
    v6 = (POEM_STRING)&v14;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v6, Name, 0) >= 0 )
  {
    Length = v6->Length;
    if ( v6->Length == 1 && *v6->Buffer == 46 || Length == 2 && (Buffer = v6->Buffer, *Buffer == 46) && Buffer[1] == 46 )
    {
      if ( NameContainsSpaces )
        *NameContainsSpaces = 0;
      return 1;
    }
    if ( !Length )
      goto LABEL_18;
    v9 = v6->Buffer;
    do
    {
      v10 = v9[v7];
      if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v10] )
      {
        if ( !v3 && (unsigned int)v7 >= 7 || (_DWORD)v7 == Length - 1 )
          return 0;
        LODWORD(v7) = v7 + 1;
      }
      else
      {
        if ( v10 < 0x80u )
        {
          v11 = RtlFatIllegalTable[(unsigned __int64)v10 >> 5];
          if ( _bittest(&v11, v10 & 0x1F) )
            return 0;
        }
        if ( v10 == 32 )
        {
          v4 = 1;
        }
        else if ( v10 == 46 )
        {
          if ( v3 || !(_DWORD)v7 || v9[(unsigned int)(v7 - 1)] == 32 || Length - (unsigned int)v7 - 1 > 3 )
            return 0;
          v3 = 1;
        }
        if ( (unsigned int)v7 >= 8 && !v3 )
          return 0;
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < Length );
    if ( v10 != 32 && v10 != 46 )
    {
LABEL_18:
      if ( NameContainsSpaces )
        *NameContainsSpaces = v4;
      return 1;
    }
  }
  return 0;
}
