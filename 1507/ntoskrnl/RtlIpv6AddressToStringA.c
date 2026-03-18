/*
 * XREFs of RtlIpv6AddressToStringA @ 0x14015B60C
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x140248C8C (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x1401777DC (sprintf_s.c)
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
  USHORT v16; // cx
  USHORT v17; // dx
  const char *v18; // r9
  int v19; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr->u.Byte && !Addr->u.Word[2] && !Addr->u.Word[3] && Addr->u.Word[6] )
  {
    v16 = Addr->u.Word[4];
    if ( !v16 )
    {
      v17 = Addr->u.Word[5];
      if ( ((v17 + 1) & 0xFFFE) == 0 )
      {
        v18 = &File;
        if ( v17 )
          v18 = "ffff:";
        v19 = sprintf_s(
                v4,
                v3 - v4,
                "::%hs%u.%u.%u.%u",
                v18,
                Addr->u.Byte[12],
                Addr->u.Byte[13],
                Addr->u.Byte[14],
                Addr->u.Byte[15]);
        return &v4[v19];
      }
    }
    if ( v16 == 0xFFFF && !Addr->u.Word[5] )
    {
      v19 = sprintf_s(
              v4,
              v3 - v4,
              "::ffff:0:%u.%u.%u.%u",
              Addr->u.Byte[12],
              Addr->u.Byte[13],
              Addr->u.Byte[14],
              Addr->u.Byte[15]);
      return &v4[v19];
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (Addr->u.Word[4] & 0xFFFD) == 0 && Addr->u.Word[5] == 0xFE5E )
    v2 = 6;
  v9 = 0LL;
  v10 = 1;
  do
  {
    if ( Addr->u.Word[v9] )
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
      v14 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(Addr->u.Word[v11], 8));
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
  if ( v2 < 8 )
    v4 += sprintf_s(v4, v3 - v4, ":%u.%u.%u.%u", Addr->u.Byte[12], Addr->u.Byte[13], Addr->u.Byte[14], Addr->u.Byte[15]);
  return v4;
}
