/*
 * XREFs of RtlIpv6AddressToStringA @ 0x18007D8D0
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x1800EE0B0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x1800A1E20 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
  int v6; // r8d
  int v7; // r9d
  int v8; // r11d
  __int64 v9; // r10
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r12
  int v14; // eax
  const char *v16; // r9
  int v17; // eax
  int v18; // [rsp+70h] [rbp+8h]

  v2 = 8;
  v3 = S + 46;
  v18 = 8;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    if ( !*((_WORD *)Addr + 4) && ((*((_WORD *)Addr + 5) + 1) & 0xFFFE) == 0 )
    {
      v16 = (const char *)&Flags;
      if ( *((_WORD *)Addr + 5) )
        v16 = "ffff:";
      v17 = sprintf_s(
              S,
              0x2EuLL,
              "::%hs%u.%u.%u.%u",
              v16,
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v4[v17];
    }
    if ( *((_WORD *)Addr + 4) == 0xFFFF && !*((_WORD *)Addr + 5) )
    {
      v17 = sprintf_s(
              S,
              0x2EuLL,
              "::ffff:0:%u.%u.%u.%u",
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v4[v17];
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 )
  {
    if ( *((_WORD *)Addr + 5) == 0xFE5E )
      v2 = 6;
    v18 = v2;
  }
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
        v4 += sprintf_s(v4, v3 - v4, ":");
      v14 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v11), 8));
    }
    else
    {
      v14 = sprintf_s(v4, v3 - v4, "::");
      v11 = v12 - 1;
    }
    ++v11;
    v4 += v14;
  }
  while ( v11 < v2 );
  if ( v18 < 8 )
    v4 += sprintf_s(
            v4,
            v3 - v4,
            ":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v4;
}
