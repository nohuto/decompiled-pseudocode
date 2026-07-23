/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x1400A7908
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x1400A7970 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x140150120 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExW(
        PCWSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  wint_t *v6; // rbx
  unsigned __int16 v7; // di
  unsigned __int16 v8; // bp
  wint_t v9; // si
  bool v10; // zf
  bool v11; // r14
  __int16 v12; // di
  wint_t *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString
    || !Address
    || !Port
    || RtlIpv4StringToAddressW(AddressString, Strict, (LPCWSTR *)&v13, Address) < 0 )
  {
    return -1073741811;
  }
  if ( *v13 == 58 )
  {
    v6 = v13 + 1;
    v7 = 0;
    v8 = 10;
    if ( v13[1] == 48 )
    {
      v6 = v13 + 2;
      v8 = 8;
      if ( ((v13[2] - 88) & 0xFFDF) == 0 )
      {
        v8 = 16;
        v6 = v13 + 3;
      }
    }
    v9 = *v6;
    v10 = *v6 == 0;
    v11 = v10;
    while ( !v10 )
    {
      ++v6;
      if ( v9 < 0x80u && iswctype(v9, 4u) && (unsigned __int16)(v9 - 48) < v8 )
      {
        if ( v9 + v7 * (unsigned int)v8 - 48 > 0xFFFF )
          return -1073741811;
        v12 = v7 * v8 - 48;
      }
      else
      {
        if ( v8 != 16
          || v9 >= 0x80u
          || !iswctype(v9, 0x80u)
          || v9 + 16 * v7 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v12 = 16 * v7;
        v9 = v9 - (iswctype(v9, 2u) != 0 ? 97 : 65) + 10;
      }
      v7 = v9 + v12;
      v9 = *v6;
      v10 = *v6 == 0;
    }
    if ( v11 )
      return -1073741811;
  }
  else
  {
    if ( *v13 )
      return -1073741811;
    v7 = 0;
  }
  *Port = __ROR2__(v7, 8);
  return 0;
}
