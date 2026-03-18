/*
 * XREFs of PopVerifyPowerActionPolicy @ 0x140509A08
 * Callers:
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopVerifySystemPowerPolicy @ 0x14053E494 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyActionPolicy @ 0x140637AD4 (PdcPoVerifyActionPolicy.c)
 * Callees:
 *     PopFilterCapabilities @ 0x140457EB8 (PopFilterCapabilities.c)
 */

char __fastcall PopVerifyPowerActionPolicy(int *a1)
{
  char v1; // di
  int v3; // eax
  bool v4; // r8
  int v5; // edx
  int v6; // r9d
  _BYTE v8[22]; // [rsp+20h] [rbp-58h] BYREF
  char v9; // [rsp+36h] [rbp-42h]

  v1 = 0;
  if ( a1 )
  {
    v3 = a1[1];
    if ( (v3 & 0xFFFFFF0) == 0 )
    {
      if ( v3 < 0 )
        a1[1] = v3 & 0xFFFFFFF8 | 4;
      PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v8);
      v4 = 0;
      v5 = v8[3] != 0;
      if ( v8[4] )
        ++v5;
      if ( v8[5] )
        ++v5;
      if ( v8[8] && v8[6] )
      {
        if ( v9 == 2 )
        {
          v4 = 1;
        }
        else if ( v9 == 1 )
        {
          v4 = (a1[1] & 8) != 0;
        }
      }
      while ( 1 )
      {
        v6 = *a1;
        switch ( *a1 )
        {
          case 1:
            *a1 = 2;
            break;
          case 2:
            break;
          case 3:
            if ( v4 )
              goto LABEL_15;
            if ( v5 )
              goto LABEL_27;
            goto LABEL_22;
          case 6:
            if ( !v8[7] )
              *a1 = 4;
            goto LABEL_15;
          default:
            if ( *a1 == 8 && v8[20] )
            {
LABEL_27:
              *a1 = 2;
              goto LABEL_15;
            }
            goto LABEL_15;
        }
        if ( !v5 )
        {
          if ( v4 )
          {
            *a1 = 3;
            goto LABEL_15;
          }
LABEL_22:
          *a1 = 0;
          v1 = 1;
        }
LABEL_15:
        if ( v6 == *a1 )
          return v1;
      }
    }
  }
  return 0;
}
