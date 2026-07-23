/*
 * XREFs of RtlIpv6StringToAddressExA @ 0x140214958
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressA @ 0x140145014 (RtlIpv6StringToAddressA.c)
 *     __isascii @ 0x14014E218 (__isascii.c)
 *     isdigit @ 0x14014E224 (isdigit.c)
 *     islower @ 0x14014E244 (islower.c)
 *     isxdigit @ 0x14014E2C4 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExA(
        PCSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  PULONG v5; // r14
  unsigned __int16 v6; // si
  unsigned int v7; // r12d
  char v8; // r15
  PCSTR v9; // rbx
  int v10; // edi
  unsigned __int16 v11; // r14
  CHAR v12; // bp
  __int16 v13; // ax
  __int16 v14; // si
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int16 v18; // cx
  NTSTATUS result; // eax
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
  v9 = Terminator;
  if ( *Terminator == 37 )
  {
    v9 = Terminator + 1;
    v10 = Terminator[1];
    if ( !_isascii(v10) || !isdigit(v10) )
      return -1073741811;
    while ( (_BYTE)v10 && (_BYTE)v10 != 93 )
    {
      if ( !_isascii((char)v10) || !isdigit((char)v10) || (char)v10 + 2 * (5 * (unsigned __int64)v7 - 24) > 0xFFFFFFFF )
        return -1073741811;
      v7 = (char)v10 + 10 * v7 - 48;
      LOBYTE(v10) = *++v9;
    }
  }
  if ( *v9 == 93 )
  {
    if ( !v8 )
      return -1073741811;
    ++v9;
    v8 = 0;
    if ( *v9 == 58 )
    {
      ++v9;
      v11 = 10;
      if ( *v9 == 48 )
      {
        ++v9;
        v11 = 8;
        if ( ((*v9 - 88) & 0xDF) == 0 )
        {
          v11 = 16;
          ++v9;
        }
      }
      while ( 1 )
      {
        v12 = *v9;
        if ( !*v9 )
          break;
        if ( _isascii(v12) && isdigit(v12) && v12 - 48 < v11 )
        {
          if ( v12 + v11 * (unsigned int)v6 - 48 > 0xFFFF )
            return -1073741811;
          v13 = v12;
          v14 = v6 * v11 - 48;
        }
        else
        {
          if ( v11 != 16 || !_isascii(v12) || !isxdigit(v12) )
            return -1073741811;
          if ( !_isascii(v12) || (v15 = islower(v12), v16 = 97, !v15) )
            v16 = 65;
          if ( v12 + 16 * (unsigned int)v6 - v16 + 10 > 0xFFFF )
            return -1073741811;
          v14 = 16 * v6;
          if ( !_isascii(v12) || (v17 = islower(v12), v18 = 97, !v17) )
            v18 = 65;
          v13 = v12 - v18 + 10;
        }
        v6 = v13 + v14;
        ++v9;
      }
      v5 = v21;
    }
  }
  if ( !*v9 && !v8 )
  {
    *Port = __ROR2__(v6, 8);
    result = 0;
    *v5 = v7;
    return result;
  }
  return -1073741811;
}
