/*
 * XREFs of RtlIpv6AddressToStringA @ 0x1401F9C84
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x1401F9EF8 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x14014975C (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
  __int16 v6; // cx
  __int16 v7; // dx
  const char *v8; // r9
  int v9; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // r11d
  __int64 v14; // r10
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // r12
  int v19; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    v6 = *((_WORD *)Addr + 4);
    if ( !v6 )
    {
      v7 = *((_WORD *)Addr + 5);
      if ( ((v7 + 1) & 0xFFFE) == 0 )
      {
        v8 = &File;
        if ( v7 )
          v8 = "ffff:";
        v9 = sprintf_s(
               v4,
               v3 - v4,
               "::%hs%u.%u.%u.%u",
               v8,
               *((unsigned __int8 *)Addr + 12),
               *((unsigned __int8 *)Addr + 13),
               *((unsigned __int8 *)Addr + 14),
               *((unsigned __int8 *)Addr + 15));
        return &v4[v9];
      }
    }
    if ( v6 == -1 && !*((_WORD *)Addr + 5) )
    {
      v9 = sprintf_s(
             v4,
             v3 - v4,
             "::ffff:0:%u.%u.%u.%u",
             *((unsigned __int8 *)Addr + 12),
             *((unsigned __int8 *)Addr + 13),
             *((unsigned __int8 *)Addr + 14),
             *((unsigned __int8 *)Addr + 15));
      return &v4[v9];
    }
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v14 = 0LL;
  v15 = 1;
  do
  {
    if ( *((_WORD *)Addr + v14) )
    {
      v13 = v15;
    }
    else if ( v15 - v13 > v11 - v12 )
    {
      v12 = v13;
      v11 = v15;
    }
    ++v15;
    ++v14;
  }
  while ( v14 < v2 );
  if ( v11 - v12 <= 1 )
  {
    v11 = 0;
    v12 = 0;
  }
  v16 = 0LL;
  v17 = v11;
  v18 = v12;
  do
  {
    if ( v18 > v16 || v16 >= v17 )
    {
      if ( v16 && v16 != v17 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v19 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v16), 8));
    }
    else
    {
      v19 = sprintf_s(v4, v3 - v4, "::");
      v16 = v17 - 1;
    }
    ++v16;
    v4 += v19;
  }
  while ( v16 < v2 );
  if ( v2 < 8 )
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
