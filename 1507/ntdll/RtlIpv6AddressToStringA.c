/*
 * XREFs of RtlIpv6AddressToStringA @ 0x18000FDD0
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x1800DF740 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x18008F260 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
  const char *v6; // r9
  int v7; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // r11d
  __int64 v12; // r10
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r12
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
      v6 = (const char *)&Flags;
      if ( *((_WORD *)Addr + 5) )
        v6 = "ffff:";
      v7 = sprintf_s(
             S,
             0x2EuLL,
             "::%hs%u.%u.%u.%u",
             v6,
             *((unsigned __int8 *)Addr + 12),
             *((unsigned __int8 *)Addr + 13),
             *((unsigned __int8 *)Addr + 14),
             *((unsigned __int8 *)Addr + 15));
      return &v4[v7];
    }
    if ( *((_WORD *)Addr + 4) == 0xFFFF && !*((_WORD *)Addr + 5) )
    {
      v7 = sprintf_s(
             S,
             0x2EuLL,
             "::ffff:0:%u.%u.%u.%u",
             *((unsigned __int8 *)Addr + 12),
             *((unsigned __int8 *)Addr + 13),
             *((unsigned __int8 *)Addr + 14),
             *((unsigned __int8 *)Addr + 15));
      return &v4[v7];
    }
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 )
  {
    if ( *((_WORD *)Addr + 5) == 0xFE5E )
      v2 = 6;
    v18 = v2;
  }
  v12 = 0LL;
  v13 = 1;
  do
  {
    if ( *((_WORD *)Addr + v12) )
    {
      v11 = v13;
    }
    else if ( v13 - v11 > v9 - v10 )
    {
      v10 = v11;
      v9 = v13;
    }
    ++v13;
    ++v12;
  }
  while ( v12 < v2 );
  if ( v9 - v10 <= 1 )
  {
    v9 = 0;
    v10 = 0;
  }
  v14 = 0LL;
  v15 = v9;
  v16 = v10;
  do
  {
    if ( v14 >= v15 || v16 > v14 )
    {
      if ( v14 && v14 != v15 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v17 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v14), 8));
    }
    else
    {
      v17 = sprintf_s(v4, v3 - v4, "::");
      v14 = v15 - 1;
    }
    ++v14;
    v4 += v17;
  }
  while ( v14 < v2 );
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
