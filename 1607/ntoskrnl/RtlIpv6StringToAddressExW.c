/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1400A6894
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x1400A6920 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x140150120 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  unsigned __int16 v6; // si
  ULONG v7; // r15d
  char v8; // r14
  NTSTATUS result; // eax
  PCWSTR v10; // rbx
  wint_t v11; // di
  unsigned __int16 v12; // bp
  wint_t i; // di
  __int16 v14; // si
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
    v11 = Terminator[1];
    if ( v11 >= 0x80u || !iswctype(v11, 4u) )
      return -1073741811;
    while ( v11 && v11 != 93 )
    {
      if ( v11 >= 0x80u || !iswctype(v11, 4u) || v11 + 2 * (5 * (unsigned __int64)v7 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v10;
      v7 = v11 + 2 * (5 * v7 - 24);
      v11 = *v10;
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
        if ( ((*v10 - 88) & 0xFFDF) == 0 )
        {
          v12 = 16;
          ++v10;
        }
      }
      for ( i = *v10; *v10; i = *v10 )
      {
        if ( i < 0x80u && iswctype(i, 4u) && i - 48 < v12 )
        {
          if ( i + v12 * (unsigned int)v6 - 48 > 0xFFFF )
            return -1073741811;
          v14 = v6 * v12 - 48;
        }
        else
        {
          if ( v12 != 16
            || i >= 0x80u
            || !iswctype(i, 0x80u)
            || i + 16 * v6 - (iswctype(i, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v14 = 16 * v6;
          i = i - (iswctype(i, 2u) != 0 ? 97 : 65) + 10;
        }
        ++v10;
        v6 = i + v14;
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
