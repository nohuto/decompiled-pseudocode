/*
 * XREFs of AuthzBasepMemberOf @ 0x1402354B0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInToken @ 0x1400C2444 (SepSidInToken.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     AuthzBasepGetNextValue @ 0x14023533C (AuthzBasepGetNextValue.c)
 */

__int64 __fastcall AuthzBasepMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v10; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  bool v14; // al
  _BYTE v16[24]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-A0h]
  void *Src; // [rsp+50h] [rbp-98h]
  _BYTE v19[80]; // [rsp+60h] [rbp-88h] BYREF

  v10 = a5 != 0;
  *a6 = 0;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, (__int64)v16);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = v17;
    if ( v17 >= 0x44 )
      v13 = 68LL;
    memmove(v19, Src, v13);
    v14 = SepSidInToken(a2, 0LL, v19, a3, a4, 0);
    if ( a5 )
    {
      v10 &= v14;
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 |= v14;
      if ( v10 )
        goto LABEL_12;
    }
  }
  v12 = 0;
LABEL_12:
  if ( v12 >= 0 )
    *a6 = v10;
  return (unsigned int)v12;
}
