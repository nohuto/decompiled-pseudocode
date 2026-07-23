/*
 * XREFs of RtlIpv4StringToAddressW @ 0x1400A7970
 * Callers:
 *     RtlIpv4StringToAddressExW @ 0x1400A7908 (RtlIpv4StringToAddressExW.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     iswctype @ 0x140150120 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressW(PCWSTR S, BOOLEAN Strict, LPCWSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v6; // rdi
  int v7; // r15d
  char v8; // r13
  unsigned int v9; // r12d
  WCHAR v10; // r14
  unsigned int v11; // ecx
  __int64 v12; // rdi
  int v14; // edi
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  BOOLEAN v21; // [rsp+20h] [rbp-30h]
  unsigned int v23; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-1Ch]
  unsigned int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26; // [rsp+3Ch] [rbp-14h] BYREF

  v21 = Strict;
  v6 = &v23;
  while ( 2 )
  {
    v7 = 10;
    v8 = 0;
    v9 = 0;
    if ( *S == 48 )
    {
      if ( *++S < 0x80u && (v16 = iswctype(*S, 4u), Strict = v21, v16) )
      {
        v7 = 8;
      }
      else if ( ((*S - 88) & 0xFFDF) != 0 )
      {
        v8 = 1;
      }
      else
      {
        v7 = 16;
        ++S;
      }
    }
    if ( Strict && v7 != 10 )
    {
LABEL_19:
      *Terminator = S;
      return -1073741811;
    }
    v10 = *S;
    if ( !*S )
      goto LABEL_15;
    while ( v10 < 0x80u && iswctype(v10, 4u) && v10 - 48 < v7 )
    {
      v11 = v9 * v7 + v10 - 48;
LABEL_10:
      if ( v11 < v9 )
        goto LABEL_19;
      v8 = 1;
      ++S;
      v9 = v11;
      v10 = *S;
      if ( !*S )
      {
        Strict = v21;
        goto LABEL_15;
      }
    }
    if ( v7 == 16 && v10 < 0x80u && iswctype(v10, 0x80u) )
    {
      v11 = v10 + 16 * v9 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10;
      goto LABEL_10;
    }
    Strict = v21;
LABEL_15:
    if ( *S == 46 )
    {
      if ( v6 >= &v26 )
        goto LABEL_19;
      *v6 = v9;
      ++S;
      ++v6;
      if ( !v8 )
        goto LABEL_19;
      continue;
    }
    break;
  }
  if ( !v8 )
    goto LABEL_19;
  *v6 = v9;
  v12 = ((char *)v6 - (char *)&v23 + 4) >> 2;
  if ( Strict )
  {
    if ( (_DWORD)v12 != 4 )
      goto LABEL_19;
  }
  v14 = v12 - 1;
  if ( v14 )
  {
    v17 = v14 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        if ( v18 != 1 || v23 > 0xFF || v24 > 0xFF || v25 > 0xFF || v26 > 0xFF )
          goto LABEL_19;
        v19 = (unsigned __int8)v26;
        v20 = ((unsigned __int8)v25 | (((v23 << 8) | (unsigned __int8)v24) << 8)) << 8;
      }
      else
      {
        if ( v23 > 0xFF || v24 > 0xFF || v25 > 0xFFFF )
          goto LABEL_19;
        v19 = (unsigned __int16)v25;
        v20 = ((v23 << 8) | (unsigned __int8)v24) << 16;
      }
    }
    else
    {
      if ( v23 > 0xFF || v24 > 0xFFFFFF )
        goto LABEL_19;
      v20 = v23 << 24;
      v19 = v24 & 0xFFFFFF;
    }
    v15 = v19 | v20;
  }
  else
  {
    v15 = v23;
  }
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v15);
  return 0;
}
