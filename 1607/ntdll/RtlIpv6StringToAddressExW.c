/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x180055800
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180055600 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x180055A10 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x18009A240 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  unsigned __int16 v6; // si
  ULONG v7; // r15d
  char v8; // r14
  LONG result; // eax
  PCWSTR v10; // rbx
  unsigned __int16 v11; // bp
  wint_t i; // di
  __int16 v13; // si
  wint_t v14; // di
  PCWSTR Terminator; // [rsp+50h] [rbp+8h] BYREF

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
  if ( RtlIpv6StringToAddressW(AddressString, &Terminator, Address) < 0 )
    return -1073741811;
  v10 = Terminator;
  if ( *Terminator == 37 )
  {
    v10 = Terminator + 1;
    v14 = Terminator[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    while ( v14 && v14 != 93 )
    {
      if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v7 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v10;
      v7 = v14 + 2 * (5 * v7 - 24);
      v14 = *v10;
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
      v11 = 10;
      if ( *v10 == 48 )
      {
        ++v10;
        v11 = 8;
        if ( ((*v10 - 88) & 0xFFDF) == 0 )
        {
          v11 = 16;
          ++v10;
        }
      }
      for ( i = *v10; *v10; i = *v10 )
      {
        if ( i < 0x80u && iswctype(i, 4u) && i - 48 < v11 )
        {
          if ( i + v11 * (unsigned int)v6 - 48 > 0xFFFF )
            return -1073741811;
          v13 = v6 * v11 - 48;
        }
        else
        {
          if ( v11 != 16
            || i >= 0x80u
            || !iswctype(i, 0x80u)
            || i + 16 * v6 - (iswctype(i, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v13 = 16 * v6;
          i = i - (iswctype(i, 2u) != 0 ? 97 : 65) + 10;
        }
        ++v10;
        v6 = i + v13;
      }
    }
  }
  if ( *v10 || v8 )
    return -1073741811;
  *Port = __ROR2__(v6, 8);
  result = 0;
  *ScopeId = v7;
  return result;
}
