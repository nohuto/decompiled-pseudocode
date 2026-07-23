/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x1404A7DCC
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404A7F54 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PCUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  POEM_STRING v4; // rbx
  char v5; // bp
  BOOLEAN v6; // si
  unsigned __int16 Length; // cx
  unsigned int v8; // r8d
  char *v9; // r11
  unsigned __int8 v10; // r9
  int v11; // eax
  char *Buffer; // rdx
  int v14; // [rsp+20h] [rbp-68h] BYREF
  char *v15; // [rsp+28h] [rbp-60h]
  char v16; // [rsp+30h] [rbp-58h] BYREF

  v4 = OemName;
  v5 = 0;
  v6 = 0;
  if ( Name->Length <= 0x18u )
  {
    if ( !OemName )
    {
      v14 = 786432;
      v15 = &v16;
      v4 = (POEM_STRING)&v14;
    }
    if ( RtlUpcaseUnicodeStringToCountedOemString(v4, Name, 0) >= 0 )
    {
      Length = v4->Length;
      if ( v4->Length == 1 && *v4->Buffer == 46
        || Length == 2 && (Buffer = v4->Buffer, *Buffer == 46) && Buffer[1] == 46 )
      {
        if ( NameContainsSpaces )
          *NameContainsSpaces = 0;
        return 1;
      }
      v8 = 0;
      if ( !Length )
        goto LABEL_19;
      v9 = v4->Buffer;
      do
      {
        v10 = v9[v8];
        if ( (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v10] )
        {
          if ( !v5 && v8 >= 7 || v8 == Length - 1 )
            return 0;
          ++v8;
        }
        else
        {
          if ( v10 < 0x80u )
          {
            v11 = RtlFatIllegalTable[(unsigned __int64)v10 >> 5];
            if ( _bittest(&v11, v10 % 32) )
              return 0;
          }
          if ( v10 == 32 )
            v6 = 1;
          if ( v10 == 46 )
          {
            if ( v5 || !v8 || v9[v8 - 1] == 32 || Length - v8 - 1 > 3 )
              return 0;
            v5 = 1;
          }
          if ( v8 >= 8 && !v5 )
            return 0;
        }
        ++v8;
      }
      while ( v8 < Length );
      if ( v10 != 32 && v10 != 46 )
      {
LABEL_19:
        if ( NameContainsSpaces )
          *NameContainsSpaces = v6;
        return 1;
      }
    }
  }
  return 0;
}
