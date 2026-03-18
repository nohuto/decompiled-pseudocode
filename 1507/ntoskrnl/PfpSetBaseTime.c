/*
 * XREFs of PfpSetBaseTime @ 0x1405B692C
 * Callers:
 *     PfpParametersInitialize @ 0x1407DEF34 (PfpParametersInitialize.c)
 * Callees:
 *     PfpSetParameter @ 0x1405B69C4 (PfpSetParameter.c)
 *     PfpGetParameter @ 0x1405B7000 (PfpGetParameter.c)
 */

__int64 __fastcall PfpSetBaseTime(HANDLE KeyHandle, _DWORD *a2)
{
  __int64 v4; // r8
  int Parameter; // ecx
  int v7; // [rsp+48h] [rbp+10h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = MEMORY[0xFFFFF78000000014] - 126227808000000000LL;
  if ( MEMORY[0xFFFFF78000000014] - 126227808000000000LL < 0 )
    v4 = 0LL;
  v7 = (v4 / 10000) >> 10;
  Parameter = PfpSetParameter(KeyHandle, 4u);
  if ( Parameter < 0 )
  {
    LODWORD(v8) = 4;
    Parameter = PfpGetParameter(KeyHandle, (__int64)&v8);
    if ( Parameter < 0 )
      *a2 = 0;
  }
  *a2 = v7;
  return (unsigned int)Parameter;
}
