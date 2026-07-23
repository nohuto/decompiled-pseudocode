/*
 * XREFs of RtlIpv6AddressToStringW @ 0x14012FFB0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x140248ED4 (RtlIpv6AddressToStringExW.c)
 *     AdtpBuildIPv6Strings @ 0x14070C120 (AdtpBuildIPv6Strings.c)
 * Callees:
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv6AddressToStringW(const struct in6_addr *Addr, PWSTR S)
{
  int v2; // r14d
  PWSTR v3; // rbp
  wchar_t *v4; // rdi
  int v6; // r8d
  int v7; // r9d
  int v8; // r11d
  __int64 v9; // r10
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // eax
  __int16 v16; // cx
  __int16 v17; // dx
  const char *v18; // r9
  int v19; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    v16 = *((_WORD *)Addr + 4);
    if ( !v16 )
    {
      v17 = *((_WORD *)Addr + 5);
      if ( ((v17 + 1) & 0xFFFE) == 0 )
      {
        v18 = &File;
        if ( v17 )
          v18 = "ffff:";
        v19 = swprintf_s(
                v4,
                v3 - v4,
                L"::%hs%u.%u.%u.%u",
                v18,
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &v4[v19];
      }
    }
    if ( v16 == -1 && !*((_WORD *)Addr + 5) )
    {
      v19 = swprintf_s(
              v4,
              v3 - v4,
              L"::ffff:0:%u.%u.%u.%u",
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v4[v19];
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v9 = 0LL;
  v10 = 1;
  do
  {
    if ( *((_WORD *)Addr + v9) )
    {
      v8 = v10;
    }
    else if ( v10 - v8 > v6 - v7 )
    {
      v7 = v8;
      v6 = v10;
    }
    ++v10;
    ++v9;
  }
  while ( v9 < v2 );
  if ( v6 - v7 <= 1 )
  {
    v6 = 0;
    v7 = 0;
  }
  v11 = 0LL;
  v12 = v6;
  v13 = v7;
  do
  {
    if ( v11 >= v12 || v13 > v11 )
    {
      if ( v11 && v11 != v12 )
        v4 += swprintf_s(v4, v3 - v4, L":");
      v14 = swprintf_s(v4, v3 - v4, L"%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v11), 8));
    }
    else
    {
      v14 = swprintf_s(v4, v3 - v4, L"::");
      v11 = v12 - 1;
    }
    ++v11;
    v4 += v14;
  }
  while ( v11 < v2 );
  if ( v2 < 8 )
    v4 += swprintf_s(
            v4,
            v3 - v4,
            L":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v4;
}
