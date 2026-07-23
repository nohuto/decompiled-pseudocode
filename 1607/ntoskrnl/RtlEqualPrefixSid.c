/*
 * XREFs of RtlEqualPrefixSid @ 0x1404AF0F4
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x140420940 (RtlpCopyEffectiveAce.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __stdcall RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r8
  int v5; // r9d
  int v6; // eax
  int v7; // r9d
  bool v8; // zf
  _DWORD *v9; // r9
  signed __int64 v10; // rdx

  if ( *(_BYTE *)Sid1 != *(_BYTE *)Sid2 )
    return 0;
  if ( *((_BYTE *)Sid1 + 2) != *((_BYTE *)Sid2 + 2) )
    return 0;
  if ( *((_BYTE *)Sid1 + 3) != *((_BYTE *)Sid2 + 3) )
    return 0;
  if ( *((_BYTE *)Sid1 + 4) != *((_BYTE *)Sid2 + 4) )
    return 0;
  if ( *((_BYTE *)Sid1 + 5) != *((_BYTE *)Sid2 + 5) )
    return 0;
  if ( *((_BYTE *)Sid1 + 6) != *((_BYTE *)Sid2 + 6) )
    return 0;
  if ( *((_BYTE *)Sid1 + 7) != *((_BYTE *)Sid2 + 7) )
    return 0;
  v3 = *((_BYTE *)Sid1 + 1);
  if ( v3 != *((_BYTE *)Sid2 + 1) )
    return 0;
  v4 = 0LL;
  if ( v3 )
  {
    if ( v3 != 11 )
      goto LABEL_12;
    v7 = *(_DWORD *)((char *)Sid1 + 2);
    if ( !v7 )
      v7 = *((unsigned __int16 *)Sid1 + 3) - 2816;
    v8 = v7 == 0;
    v5 = 5;
    if ( !v8 )
LABEL_12:
      v5 = 1;
    v6 = v3 - v5;
    if ( v6 > 0 )
    {
      v9 = (char *)Sid1 + 8;
      v10 = (_BYTE *)Sid2 - (_BYTE *)Sid1;
      while ( *v9 == *(_DWORD *)((char *)v9 + v10) )
      {
        ++v4;
        ++v9;
        if ( v4 >= v6 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
