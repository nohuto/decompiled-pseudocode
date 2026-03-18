/*
 * XREFs of AuthzBasepDeviceMemberOf @ 0x140234E98
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14009FBFC (AuthzBasepEvaluateAceCondition.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1400611F0 (SepSidInTokenSidHash.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     AuthzBasepGetNextValue @ 0x140235510 (AuthzBasepGetNextValue.c)
 */

__int64 __fastcall AuthzBasepDeviceMemberOf(__int64 a1, __int64 a2, char a3, char a4, char a5, _BYTE *a6)
{
  char v10; // di
  int NextValue; // eax
  int v12; // ebx
  size_t v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE v17[24]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-A0h]
  void *Src; // [rsp+50h] [rbp-98h]
  _BYTE v20[80]; // [rsp+60h] [rbp-88h] BYREF

  v10 = a5 != 0;
  *a6 = 0;
  while ( 1 )
  {
    NextValue = AuthzBasepGetNextValue(a1, v17);
    v12 = NextValue;
    if ( NextValue == -2147483622 )
      break;
    if ( NextValue < 0 )
      return (unsigned int)v12;
    v13 = v18;
    if ( v18 >= 0x44 )
      v13 = 68LL;
    memmove(v20, Src, v13);
    v14 = *(_QWORD *)(a2 + 1096);
    if ( v14 )
    {
      v15 = v14 + 304;
      if ( !a4 )
        v15 = v14 + 32;
      LOBYTE(v14) = SepSidInTokenSidHash(v15, 0LL, v20, a3, a4, 0);
    }
    if ( a5 )
    {
      v10 &= v14;
      if ( !v10 )
        goto LABEL_16;
    }
    else
    {
      v10 |= v14;
      if ( v10 )
        goto LABEL_16;
    }
  }
  v12 = 0;
LABEL_16:
  if ( v12 >= 0 )
    *a6 = v10;
  return (unsigned int)v12;
}
