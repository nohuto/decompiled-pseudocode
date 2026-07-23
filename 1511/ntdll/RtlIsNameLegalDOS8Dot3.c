/*
 * XREFs of RtlIsNameLegalDOS8Dot3 @ 0x1800E5940
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800DA850 (RtlUpcaseUnicodeStringToCountedOemString.c)
 */

BOOLEAN __stdcall RtlIsNameLegalDOS8Dot3(PUNICODE_STRING Name, POEM_STRING OemName, PBOOLEAN NameContainsSpaces)
{
  POEM_STRING v4; // rbx
  char v5; // bp
  BOOLEAN v6; // si
  char *v8; // rcx
  unsigned int Length; // r10d
  unsigned int v10; // r8d
  char *Buffer; // r11
  unsigned __int8 v12; // r9
  int v13; // eax
  int v14; // [rsp+20h] [rbp-68h] BYREF
  char *v15; // [rsp+28h] [rbp-60h]
  char v16; // [rsp+30h] [rbp-58h] BYREF

  v4 = OemName;
  v5 = 0;
  v6 = 0;
  if ( Name->Length > 0x18u )
    return 0;
  if ( !OemName )
  {
    v14 = 786432;
    v15 = &v16;
    v4 = (POEM_STRING)&v14;
  }
  if ( RtlUpcaseUnicodeStringToCountedOemString(v4, Name, 0) < 0 )
    return 0;
  if ( v4->Length != 1 || *v4->Buffer != 46 )
  {
    if ( v4->Length != 2 || (v8 = v4->Buffer, *v8 != 46) || v8[1] != 46 )
    {
      Length = v4->Length;
      v10 = 0;
      if ( !v4->Length )
        goto LABEL_36;
      Buffer = v4->Buffer;
      do
      {
        v12 = Buffer[v10];
        if ( NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v12] )
        {
          if ( !v5 && v10 >= 7 || v10 == Length - 1 )
            return 0;
          ++v10;
        }
        else
        {
          if ( v12 < 0x80u )
          {
            v13 = RtlFatIllegalTable[(unsigned __int64)v12 >> 5];
            if ( _bittest(&v13, v12 % 32) )
              return 0;
          }
          if ( v12 == 32 )
            v6 = 1;
          if ( v12 == 46 )
          {
            if ( v5 || !v10 || Buffer[v10 - 1] == 32 || Length - v10 - 1 > 3 )
              return 0;
            v5 = 1;
          }
          if ( v10 >= 8 && !v5 )
            return 0;
        }
        ++v10;
      }
      while ( v10 < Length );
      if ( v12 != 32 && v12 != 46 )
      {
LABEL_36:
        if ( NameContainsSpaces )
          *NameContainsSpaces = v6;
        return 1;
      }
      return 0;
    }
  }
  if ( NameContainsSpaces )
    *NameContainsSpaces = 0;
  return 1;
}
