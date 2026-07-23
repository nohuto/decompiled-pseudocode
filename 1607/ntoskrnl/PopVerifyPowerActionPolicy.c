/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x140540EF4
 * Callers:
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopVerifySystemPowerPolicy @ 0x14056E7A8 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyActionPolicy @ 0x14066FE60 (PdcPoVerifyActionPolicy.c)
 * Callees:
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v1; // di
  int v4; // eax
  bool v5; // r9
  int v6; // r8d
  int v7; // r10d
  _BYTE v8[22]; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+36h] [rbp-42h]

  v1 = 0;
  if ( !a1 )
    return 0;
  v4 = a1[1];
  if ( (v4 & 0xFFFFFE0) != 0 )
    return 0;
  if ( v4 < 0 )
    a1[1] = v4 & 0xFFFFFFF8 | 4;
  if ( (int)PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v8) < 0 )
    return 1;
  v5 = 0;
  v6 = v8[3] != 0;
  if ( v8[4] )
    ++v6;
  if ( v8[5] )
    ++v6;
  if ( v8[6] && v8[8] )
  {
    if ( v9 == 2 )
    {
      v5 = 1;
    }
    else if ( v9 == 1 )
    {
      v5 = (a1[1] & 8) != 0;
    }
  }
  do
  {
    v7 = *a1;
    if ( *a1 == 1 )
    {
      *a1 = 2;
    }
    else if ( *a1 != 2 )
    {
      if ( *a1 == 3 )
      {
        if ( v5 )
          continue;
        if ( v6 )
          goto LABEL_24;
LABEL_29:
        *a1 = 0;
        v1 = 1;
        continue;
      }
      if ( *a1 == 6 )
      {
        if ( !v8[7] )
          *a1 = 4;
      }
      else if ( *a1 == 8 && v8[20] )
      {
LABEL_24:
        *a1 = 2;
        continue;
      }
      continue;
    }
    if ( !v6 )
    {
      if ( !v5 )
        goto LABEL_29;
      *a1 = 3;
    }
  }
  while ( v7 != *a1 );
  return v1;
}
