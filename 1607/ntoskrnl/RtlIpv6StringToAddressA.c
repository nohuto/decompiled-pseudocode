/*
 * XREFs of RtlIpv6StringToAddressA @ 0x140145014
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x140214958 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x14014E218 (__isascii.c)
 *     isdigit @ 0x14014E224 (isdigit.c)
 *     isxdigit @ 0x14014E2C4 (isxdigit.c)
 *     strtol @ 0x14014FDA8 (strtol.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  PCSTR v3; // r13
  struct in6_addr *v4; // rbp
  int v5; // r15d
  const char *v6; // rax
  CHAR v7; // bl
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r14d
  unsigned int v12; // edx
  int v13; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // [rsp+20h] [rbp-58h]
  char *Str; // [rsp+28h] [rbp-50h]
  char v19; // [rsp+80h] [rbp+8h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v3 = S;
  v4 = Addr;
  v5 = 0;
  Str = 0LL;
  v6 = 0LL;
  v19 = 0;
  v7 = *S;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( *S )
  {
    v13 = 0;
    v17 = 0;
    while ( v5 != 1 )
    {
      if ( v7 == 58 )
      {
        if ( v9 || v8 || v3[1] != 58 )
          goto LABEL_32;
        v8 = 2;
        v11 = 1;
        v22 = v12 + 1;
        ++v3;
        *((_WORD *)v4 + v12) = 0;
        v5 = 2;
        v17 = v13 + 2;
LABEL_42:
        v6 = Str;
        goto LABEL_24;
      }
      if ( v8 > 7 )
        goto LABEL_32;
      if ( _isascii(v7) && isdigit(v7) )
      {
        v6 = v3;
        v19 = 0;
        v5 = 1;
        Str = (char *)v3;
        v10 = 1;
LABEL_7:
        v12 = v22;
LABEL_8:
        v13 = v17;
        goto LABEL_9;
      }
      if ( !_isascii(v7) || !isxdigit(v7) )
        goto LABEL_31;
      v12 = v22;
      if ( v9 )
        goto LABEL_32;
      v13 = v17;
      v5 = 1;
      v6 = v3;
      v19 = 1;
      Str = (char *)v3;
      v10 = 1;
LABEL_9:
      v4 = Addr;
      v7 = *++v3;
      if ( !*v3 )
        goto LABEL_33;
    }
    if ( _isascii(v7) && isdigit(v7) )
    {
      v6 = Str;
      ++v10;
      goto LABEL_7;
    }
    if ( _isascii(v7) && isxdigit(v7) )
    {
      v12 = v22;
      ++v10;
      v6 = Str;
      if ( v9 )
      {
        v4 = Addr;
        goto LABEL_33;
      }
      v19 = 1;
      goto LABEL_8;
    }
    if ( v7 == 58 )
    {
      if ( v9 || v8 > 6 )
        goto LABEL_60;
      v4 = Addr;
      if ( v3[1] != 58 )
      {
        ++v8;
        v5 = 0;
        goto LABEL_42;
      }
      v6 = Str;
      if ( v11 )
        goto LABEL_61;
      v11 = v8 + 1;
      v8 += 2;
      ++v3;
      v5 = 2;
    }
    else
    {
      if ( v7 != 46 || v19 || v9 > 2 )
      {
LABEL_60:
        v4 = Addr;
LABEL_31:
        v12 = v22;
LABEL_32:
        v6 = Str;
        goto LABEL_33;
      }
      v4 = Addr;
      v6 = Str;
      if ( v8 > 6 )
      {
LABEL_61:
        v12 = v22;
        goto LABEL_33;
      }
      ++v9;
      v5 = 0;
    }
LABEL_24:
    if ( !v6 )
      goto LABEL_7;
    if ( v9 )
    {
      if ( v10 > 3 )
        return -1073741811;
      v15 = strtol(v6, 0LL, 10);
      if ( v15 > 0xFF )
        return -1073741811;
      v13 = v17;
      v12 = v22;
      *((_BYTE *)v4 + v9 + v17 - 1) = v15;
    }
    else
    {
      if ( v10 > 4 )
        return -1073741811;
      *((_WORD *)v4 + v22) = __ROR2__(strtol(v6, 0LL, 16), 8);
      v12 = v22 + 1;
      v13 = v17 + 2;
      ++v22;
      v17 += 2;
    }
    v6 = Str;
    goto LABEL_9;
  }
LABEL_33:
  *Terminator = v3;
  if ( v9 )
  {
    if ( v9 != 3 )
      return -1073741811;
    ++v8;
  }
  if ( !v11 && v8 != 7 )
    return -1073741811;
  if ( v5 == 1 )
  {
    if ( v9 )
    {
      if ( v10 <= 3 )
      {
        v16 = strtol(v6, 0LL, 10);
        if ( v16 <= 0xFF )
        {
          *((_BYTE *)v4 + 2 * v22 + v9) = v16;
          goto LABEL_38;
        }
      }
    }
    else if ( v10 <= 4 )
    {
      *((_WORD *)v4 + v22) = __ROR2__(strtol(v6, 0LL, 16), 8);
      goto LABEL_38;
    }
    return -1073741811;
  }
  if ( v5 != 2 )
    return -1073741811;
  *((_WORD *)v4 + v12) = 0;
LABEL_38:
  if ( v11 )
  {
    memmove((char *)v4 + 2 * (v11 - v8) + 16, (char *)v4 + 2 * v11, 2LL * (v8 - v11));
    memset((char *)v4 + 2 * v11, 0, 2LL * (8 - v8));
  }
  return 0;
}
