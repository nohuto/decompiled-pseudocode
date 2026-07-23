/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x18007CED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x18007CF80 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x180097050 (__isascii.c)
 *     isdigit @ 0x1800971A0 (isdigit.c)
 *     islower @ 0x180097200 (islower.c)
 *     isxdigit @ 0x1800972F0 (isxdigit.c)
 */

LONG __stdcall RtlIpv6StringToAddressExA(PCSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  PULONG v5; // r14
  unsigned __int16 v6; // si
  unsigned int v7; // r12d
  char v8; // r15
  LONG result; // eax
  PCSTR v10; // rbx
  int v11; // edi
  unsigned __int16 v12; // r14
  CHAR v13; // bp
  __int16 v14; // ax
  __int16 v15; // si
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int16 v19; // cx
  PCSTR Terminator; // [rsp+60h] [rbp+8h] BYREF
  PULONG v21; // [rsp+70h] [rbp+18h]

  v21 = ScopeId;
  v5 = ScopeId;
  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *AddressString == 91 )
  {
    v8 = 1;
    ++AddressString;
  }
  if ( RtlIpv6StringToAddressA(AddressString, &Terminator, Address) < 0 )
    return -1073741811;
  v10 = Terminator;
  if ( *Terminator == 37 )
  {
    v10 = Terminator + 1;
    v11 = Terminator[1];
    if ( !_isascii(v11) || !isdigit(v11) )
      return -1073741811;
    while ( (_BYTE)v11 && (_BYTE)v11 != 93 )
    {
      if ( !_isascii((char)v11) || !isdigit((char)v11) || (char)v11 + 2 * (5 * (unsigned __int64)v7 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v7 = (char)v11 + 10 * v7 - 48;
      LOBYTE(v11) = *++v10;
    }
  }
  if ( *v10 == 93 )
  {
    if ( !v8 )
      return -1073741811;
    ++v10;
    v8 = 0;
    if ( *v10 == 58 )
    {
      ++v10;
      v12 = 10;
      if ( *v10 == 48 )
      {
        ++v10;
        v12 = 8;
        if ( ((*v10 - 88) & 0xDF) == 0 )
        {
          v12 = 16;
          ++v10;
        }
      }
      while ( 1 )
      {
        v13 = *v10;
        if ( !*v10 )
          break;
        if ( _isascii(v13) && isdigit(v13) && v13 - 48 < v12 )
        {
          if ( v13 + v12 * (unsigned int)v6 - 48 > 0xFFFF )
            return -1073741811;
          v14 = v13;
          v15 = v6 * v12 - 48;
        }
        else
        {
          if ( v12 != 16 || !_isascii(v13) || !isxdigit(v13) )
            return -1073741811;
          if ( !_isascii(v13) || (v16 = islower(v13), v17 = 97, !v16) )
            v17 = 65;
          if ( v13 + 16 * (unsigned int)v6 - v17 + 10 > 0xFFFF )
            return -1073741811;
          v15 = 16 * v6;
          if ( !_isascii(v13) || (v18 = islower(v13), v19 = 97, !v18) )
            v19 = 65;
          v14 = v13 - v19 + 10;
        }
        v6 = v14 + v15;
        ++v10;
      }
      v5 = v21;
    }
  }
  if ( *v10 || v8 )
    return -1073741811;
  *Port = __ROR2__(v6, 8);
  result = 0;
  *v5 = v7;
  return result;
}
