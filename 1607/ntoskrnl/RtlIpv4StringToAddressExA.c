/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x140214780
 * Callers:
 *     <none>
 * Callees:
 *     __isascii @ 0x14014E218 (__isascii.c)
 *     isdigit @ 0x14014E224 (isdigit.c)
 *     islower @ 0x14014E244 (islower.c)
 *     isxdigit @ 0x14014E2C4 (isxdigit.c)
 *     RtlIpv4StringToAddressA @ 0x140214518 (RtlIpv4StringToAddressA.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressExA(
        PCSTR AddressString,
        BOOLEAN Strict,
        struct in_addr *Address,
        PUSHORT Port)
{
  unsigned __int16 v5; // di
  PCSTR v6; // rbx
  unsigned __int16 v7; // r14
  CHAR v8; // bp
  char v9; // r15
  int v10; // eax
  int v11; // ecx
  __int16 v12; // di
  int v13; // eax
  __int16 v14; // cx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 != 58 )
  {
    if ( !*v16 )
    {
      v5 = 0;
      goto LABEL_32;
    }
    return -1073741811;
  }
  v5 = 0;
  v6 = v16 + 1;
  v7 = 10;
  if ( v16[1] == 48 )
  {
    v6 = v16 + 2;
    v7 = 8;
    if ( ((v16[2] - 88) & 0xDF) == 0 )
    {
      v7 = 16;
      v6 = v16 + 3;
    }
  }
  v8 = *v6;
  v9 = 1;
  if ( *v6 )
  {
    v9 = 0;
    do
    {
      ++v6;
      if ( _isascii(v8) && isdigit(v8) && (unsigned __int16)(v8 - 48) < v7 )
      {
        if ( v5 * (unsigned int)v7 + v8 - 48 > 0xFFFF )
          return -1073741811;
        v5 = v8 + v5 * v7 - 48;
      }
      else
      {
        if ( v7 != 16 || !_isascii(v8) || !isxdigit(v8) )
          return -1073741811;
        if ( !_isascii(v8) || (v10 = islower(v8), v11 = 97, !v10) )
          v11 = 65;
        if ( v8 + 16 * (unsigned int)v5 - v11 + 10 > 0xFFFF )
          return -1073741811;
        v12 = 16 * v5;
        if ( !_isascii(v8) || (v13 = islower(v8), v14 = 97, !v13) )
          v14 = 65;
        v5 = v8 - v14 + 10 + v12;
      }
      v8 = *v6;
    }
    while ( *v6 );
  }
  if ( v9 )
    return -1073741811;
LABEL_32:
  *Port = __ROR2__(v5, 8);
  return 0;
}
