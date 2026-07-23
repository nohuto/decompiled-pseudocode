/*
 * XREFs of RtlIpv4StringToAddressA @ 0x140214518
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x140214780 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __isascii @ 0x14014E218 (__isascii.c)
 *     isdigit @ 0x14014E224 (isdigit.c)
 *     islower @ 0x14014E244 (islower.c)
 *     isxdigit @ 0x14014E2C4 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rdi
  BOOLEAN v6; // r14
  unsigned int v8; // r13d
  char v9; // r12
  int v10; // r15d
  CHAR v11; // al
  int v12; // r14d
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  __int64 v19; // rdi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-1Ch]
  unsigned int v30; // [rsp+38h] [rbp-18h]
  unsigned int v31; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v28;
  v6 = Strict;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( v6 && v10 != 10 )
      goto LABEL_29;
    v11 = *S;
    if ( *S )
    {
      do
      {
        v12 = v11;
        if ( _isascii(v11) && isdigit(v12) && v12 - 48 < v10 )
        {
          v13 = v12 - 48;
          v14 = v8 * v10;
        }
        else
        {
          if ( v10 != 16 || !_isascii(v12) || !isxdigit(v12) )
            break;
          if ( !_isascii(v12) || (v15 = islower(v12), v16 = 97, !v15) )
            v16 = 65;
          v14 = 16 * v8 - v16;
          v13 = v12 + 10;
        }
        v17 = v14 + v13;
        if ( v17 < v8 )
          goto LABEL_29;
        ++S;
        v9 = 1;
        v8 = v17;
        v11 = *S;
      }
      while ( *S );
      v6 = Strict;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v31 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_29;
  }
  if ( !v9 )
    goto LABEL_29;
  *v4 = v8;
  v19 = ((char *)v4 - (char *)&v28 + 4) >> 2;
  if ( v6 )
  {
    if ( (_DWORD)v19 != 4 )
      goto LABEL_29;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v25 = v28;
    goto LABEL_51;
  }
  v21 = v20 - 1;
  if ( !v21 )
  {
    if ( v28 <= 0xFF && v29 <= 0xFFFFFF )
    {
      v24 = v28 << 24;
      v23 = v29 & 0xFFFFFF;
      goto LABEL_49;
    }
    goto LABEL_29;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    if ( v28 <= 0xFF && v29 <= 0xFF && v30 <= 0xFFFF )
    {
      v23 = (unsigned __int16)v30;
      v24 = ((v28 << 8) | (unsigned __int8)v29) << 16;
      goto LABEL_49;
    }
LABEL_29:
    *Terminator = S;
    return -1073741811;
  }
  if ( v22 != 1 || v28 > 0xFF || v29 > 0xFF || v30 > 0xFF || v31 > 0xFF )
    goto LABEL_29;
  v23 = (unsigned __int8)v31;
  v24 = ((unsigned __int8)v30 | (((v28 << 8) | (unsigned __int8)v29) << 8)) << 8;
LABEL_49:
  v25 = v23 | v24;
LABEL_51:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v25);
  return 0;
}
