/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x18007EAE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x18007EC10 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x180097050 (__isascii.c)
 *     isdigit @ 0x1800971A0 (isdigit.c)
 *     islower @ 0x180097200 (islower.c)
 *     isxdigit @ 0x1800972F0 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v6; // di
  PCSTR v7; // rbx
  unsigned __int16 v8; // r14
  CHAR v9; // bp
  char v10; // r15
  int v11; // eax
  int v12; // ecx
  __int16 v13; // di
  int v14; // eax
  __int16 v15; // cx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 == 58 )
  {
    v6 = 0;
    v7 = v16 + 1;
    v8 = 10;
    if ( v16[1] == 48 )
    {
      v7 = v16 + 2;
      v8 = 8;
      if ( ((v16[2] - 88) & 0xDF) == 0 )
      {
        v8 = 16;
        v7 = v16 + 3;
      }
    }
    v9 = *v7;
    v10 = 1;
    if ( *v7 )
    {
      v10 = 0;
      do
      {
        ++v7;
        if ( _isascii(v9) && isdigit(v9) && (unsigned __int16)(v9 - 48) < v8 )
        {
          if ( v6 * (unsigned int)v8 + v9 - 48 > 0xFFFF )
            return -1073741811;
          v6 = v9 + v6 * v8 - 48;
        }
        else
        {
          if ( v8 != 16 || !_isascii(v9) || !isxdigit(v9) )
            return -1073741811;
          if ( !_isascii(v9) || (v11 = islower(v9), v12 = 97, !v11) )
            v12 = 65;
          if ( v9 + 16 * (unsigned int)v6 - v12 + 10 > 0xFFFF )
            return -1073741811;
          v13 = 16 * v6;
          if ( !_isascii(v9) || (v14 = islower(v9), v15 = 97, !v14) )
            v15 = 65;
          v6 = v9 - v15 + 10 + v13;
        }
        v9 = *v7;
      }
      while ( *v7 );
    }
    if ( v10 )
      return -1073741811;
  }
  else
  {
    if ( *v16 )
      return -1073741811;
    v6 = 0;
  }
  *Port = __ROR2__(v6, 8);
  return 0;
}
