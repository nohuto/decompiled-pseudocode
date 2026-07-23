/*
 * XREFs of RtlIpv6StringToAddressW @ 0x1400E8864
 * Callers:
 *     RtlIpv6StringToAddressExW @ 0x1400E87D8 (RtlIpv6StringToAddressExW.c)
 * Callees:
 *     wcstol @ 0x140146060 (wcstol.c)
 *     iswctype @ 0x140146784 (iswctype.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressW(PCWSTR S, PCWSTR *Terminator, struct in6_addr *Addr)
{
  wint_t v3; // bx
  const wchar_t *v4; // rax
  unsigned int v5; // edx
  PCWSTR v7; // r12
  int v8; // r14d
  char v9; // r8
  unsigned int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // r15d
  unsigned int v13; // ebp
  int v14; // r9d
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // [rsp+20h] [rbp-48h]
  const wchar_t *v21; // [rsp+28h] [rbp-40h]
  char v22; // [rsp+70h] [rbp+8h]
  unsigned int v24; // [rsp+88h] [rbp+20h]

  v3 = *S;
  v22 = 0;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0;
  v24 = 0;
  v7 = S;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *S )
  {
    v14 = 0;
    v20 = 0;
    do
    {
      if ( v8 )
      {
        if ( v8 != 1 )
          goto LABEL_17;
        if ( v3 < 0x80u )
        {
          if ( iswctype(v3, 4u) )
          {
            v14 = v20;
            ++v12;
            goto LABEL_23;
          }
          if ( iswctype(v3, 0x80u) )
          {
            v4 = v21;
            ++v12;
            if ( v11 )
              break;
            v9 = 1;
            v22 = 1;
LABEL_21:
            v14 = v20;
LABEL_24:
            v5 = v24;
            goto LABEL_25;
          }
          v5 = v24;
          v9 = v22;
          v14 = v20;
        }
        if ( v3 != 58 )
        {
          if ( v3 != 46 || v9 || v11 > 2 )
            goto LABEL_11;
          v4 = v21;
          if ( v10 > 6 )
            break;
          ++v11;
          v8 = 0;
          goto LABEL_38;
        }
        if ( v11 || v10 > 6 )
          goto LABEL_11;
        if ( v7[1] == 58 )
        {
          v4 = v21;
          if ( v13 )
            break;
          v13 = v10 + 1;
          v10 += 2;
          ++v7;
          v8 = 2;
          goto LABEL_38;
        }
        ++v10;
        v8 = 0;
      }
      else
      {
        if ( v3 != 58 )
        {
LABEL_17:
          if ( v10 > 7 || v3 >= 0x80u )
            goto LABEL_11;
          if ( iswctype(v3, 4u) )
          {
            v4 = v7;
            v22 = 0;
            v8 = 1;
            v21 = v7;
            v12 = 1;
            v9 = 0;
            goto LABEL_21;
          }
          if ( !iswctype(v3, 0x80u) || v11 )
            goto LABEL_11;
          v5 = v24;
          v8 = 1;
          v14 = v20;
          v9 = 1;
          v4 = v7;
          v22 = 1;
          v21 = v7;
          v12 = 1;
          goto LABEL_25;
        }
        if ( v11 || v10 || v7[1] != 58 )
        {
LABEL_11:
          v4 = v21;
          break;
        }
        v17 = v5;
        v13 = 1;
        v24 = ++v5;
        v10 = 2;
        *((_WORD *)Addr + v17) = 0;
        v14 += 2;
        v8 = 2;
        v20 = v14;
        ++v7;
      }
      v4 = v21;
LABEL_38:
      if ( !v4 )
        goto LABEL_25;
      if ( v11 )
      {
        if ( v12 > 3 )
          return -1073741811;
        v18 = wcstol(v4, 0LL, 10);
        if ( v18 > 0xFF )
          return -1073741811;
        v14 = v20;
        *((_BYTE *)Addr + v11 + v20 - 1) = v18;
LABEL_23:
        v9 = v22;
        v4 = v21;
        goto LABEL_24;
      }
      if ( v12 > 4 )
        return -1073741811;
      v16 = wcstol(v4, 0LL, 16);
      v9 = v22;
      v14 = v20 + 2;
      *((_WORD *)Addr + v24) = __ROR2__(v16, 8);
      v5 = v24 + 1;
      v4 = v21;
      ++v24;
      v20 += 2;
LABEL_25:
      v3 = *++v7;
    }
    while ( *v7 );
  }
  *Terminator = v7;
  if ( v11 )
  {
    if ( v11 != 3 )
      return -1073741811;
    ++v10;
  }
  if ( !v13 && v10 != 7 )
    return -1073741811;
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      *((_WORD *)Addr + v24) = 0;
      goto LABEL_66;
    }
    return -1073741811;
  }
  if ( v11 )
  {
    if ( v12 <= 3 )
    {
      v19 = wcstol(v4, 0LL, 10);
      if ( v19 <= 0xFF )
      {
        *((_BYTE *)Addr + 2 * v24 + v11) = v19;
        goto LABEL_66;
      }
    }
    return -1073741811;
  }
  if ( v12 > 4 )
    return -1073741811;
  *((_WORD *)Addr + v24) = __ROR2__(wcstol(v4, 0LL, 16), 8);
LABEL_66:
  if ( v13 )
  {
    memmove((char *)Addr + 2 * (v13 - v10) + 16, (char *)Addr + 2 * v13, 2LL * (v10 - v13));
    memset((char *)Addr + 2 * v13, 0, 2LL * (8 - v10));
  }
  return 0;
}
