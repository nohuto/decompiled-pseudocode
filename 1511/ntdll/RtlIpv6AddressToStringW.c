/*
 * XREFs of RtlIpv6AddressToStringW @ 0x180049480
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x180049330 (RtlIpv6AddressToStringExW.c)
 * Callees:
 *     swprintf_s @ 0x1800A0F20 (swprintf_s.c)
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
  const char *v16; // r9
  int v17; // eax
  int v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+28h] [rbp-40h]
  int v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+38h] [rbp-30h]
  int v28; // [rsp+70h] [rbp+8h]

  v2 = 8;
  v3 = S + 46;
  v28 = 8;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    if ( !*((_WORD *)Addr + 4) && ((*((_WORD *)Addr + 5) + 1) & 0xFFFE) == 0 )
    {
      v16 = (const char *)&Flags;
      if ( *((_WORD *)Addr + 5) )
        v16 = "ffff:";
      v27 = *((unsigned __int8 *)Addr + 15);
      v24 = *((unsigned __int8 *)Addr + 14);
      v21 = *((unsigned __int8 *)Addr + 13);
      v18 = *((unsigned __int8 *)Addr + 12);
      v17 = swprintf_s(S, 0x2EuLL, L"::%hs%u.%u.%u.%u", v16, v18, v21, v24, v27);
      return &v4[v17];
    }
    if ( *((_WORD *)Addr + 4) == 0xFFFF && !*((_WORD *)Addr + 5) )
    {
      v26 = *((unsigned __int8 *)Addr + 15);
      v23 = *((unsigned __int8 *)Addr + 14);
      v20 = *((unsigned __int8 *)Addr + 13);
      v17 = swprintf_s(S, 0x2EuLL, L"::ffff:0:%u.%u.%u.%u", *((unsigned __int8 *)Addr + 12), v20, v23, v26);
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
    v28 = v2;
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
  if ( v28 < 8 )
  {
    v25 = *((unsigned __int8 *)Addr + 15);
    v22 = *((unsigned __int8 *)Addr + 14);
    v19 = *((unsigned __int8 *)Addr + 13);
    v4 += swprintf_s(v4, v3 - v4, L":%u.%u.%u.%u", *((unsigned __int8 *)Addr + 12), v19, v22, v25);
  }
  return v4;
}
