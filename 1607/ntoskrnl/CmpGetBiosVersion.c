/*
 * XREFs of CmpGetBiosVersion @ 0x1407AD364
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 */

char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE *v4; // r9
  unsigned __int64 v5; // rdx
  _BYTE *v6; // rbx
  char *p_Str; // rsi
  char *v8; // rbx
  unsigned __int16 i; // cx
  char v10; // al
  char *v11; // rbx
  __int16 v12; // di
  char **v13; // rax
  __int64 v14; // r9
  unsigned __int16 j; // dx
  char v16; // r8
  __int64 v17; // rcx
  char result; // al
  char Str; // [rsp+9Fh] [rbp-39h] BYREF

  if ( a1 )
  {
    v4 = (_BYTE *)(a1 + 1);
    BiosBegin = a1;
    v5 = a2 + a1 - 2;
    Start = a1 + 1;
    End = v5;
  }
  else
  {
    v4 = (_BYTE *)Start;
    v5 = End;
  }
  do
  {
LABEL_3:
    v6 = 0LL;
    if ( (unsigned __int64)v4 > v5 )
      return 0;
    while ( *v4 != 46 || (unsigned __int8)(v4[1] - 48) > 9u || (unsigned __int8)(*(v4 - 1) - 48) > 9u )
    {
      Start = (__int64)++v4;
      if ( (unsigned __int64)v4 > v5 )
        goto LABEL_10;
    }
    v6 = v4;
LABEL_10:
    if ( (unsigned __int64)v4 > v5 )
      return 0;
    v4 += 2;
    Str = 0;
    Start = (__int64)v4;
    p_Str = &Str;
    v8 = v6 - 1;
    for ( i = 0; i < 0x78u; ++i )
    {
      if ( (unsigned __int64)v8 < BiosBegin )
        break;
      v10 = *v8;
      if ( *v8 <= 31 )
        break;
      if ( v10 == 36 )
        break;
      --p_Str;
      --v8;
      *p_Str = v10;
    }
    v11 = v8 + 1;
    v12 = 0;
  }
  while ( !SearchStrings[0] );
  v13 = SearchStrings;
  while ( !strstr(p_Str, *v13) )
  {
    v13 = &SearchStrings[(unsigned __int16)++v12];
    if ( !*v13 )
    {
      v4 = (_BYTE *)Start;
      v5 = End;
      goto LABEL_3;
    }
  }
  for ( ; v11; ++v11 )
  {
    if ( *v11 != 32 )
      break;
  }
  v14 = End;
  for ( j = 0; j < 0x7Fu; ++j )
  {
    if ( !v11 )
      break;
    if ( (unsigned __int64)v11 > v14 + 1 )
      break;
    v16 = *v11;
    if ( *v11 <= 31 )
      break;
    if ( v16 == 36 )
      break;
    v17 = j;
    ++v11;
    *(_BYTE *)(v17 + a3) = v16;
  }
  result = 1;
  *(_BYTE *)(j + a3) = 0;
  return result;
}
