/*
 * XREFs of PopVerifySystemPowerState @ 0x140542C58
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1401263B0 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x1405347A0 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x14056E268 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x1405816AC (PdcPoVerifyPowerState.c)
 * Callees:
 *     <none>
 */

void __fastcall PopVerifySystemPowerState(int *a1, int a2)
{
  int v2; // r8d
  char v3; // al

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v2 - 2) <= 3 )
    {
      v3 = 1;
      if ( a2 >= 0 )
      {
        if ( a2 > 1 )
        {
          if ( a2 != 2 )
            goto LABEL_8;
        }
        else
        {
          if ( v2 == 5 )
          {
            if ( byte_140303F66 && byte_140303F68 )
              goto LABEL_8;
            v2 = 4;
          }
          if ( v2 == 4 )
          {
            if ( HIBYTE(word_140303F64) )
              goto LABEL_8;
            v2 = 3;
          }
          if ( v2 == 3 )
          {
            if ( (_BYTE)word_140303F64 )
              goto LABEL_8;
            v2 = 2;
          }
          if ( v2 == 2 )
          {
            if ( byte_140303F63 )
              goto LABEL_8;
            v2 = 1;
          }
          if ( v2 != 1 || a2 != 1 )
            goto LABEL_8;
          v3 = 0;
          v2 = 2;
        }
        if ( v2 == 2 )
        {
          if ( byte_140303F63 )
            goto LABEL_8;
          v2 = 3;
        }
        if ( v2 == 3 )
        {
          if ( (_BYTE)word_140303F64 )
            goto LABEL_8;
          v2 = 4;
        }
        if ( v2 == 4 )
        {
          if ( HIBYTE(word_140303F64) )
            goto LABEL_8;
          v2 = 5;
        }
        if ( v2 == 5 && (!v3 || !byte_140303F66 || !byte_140303F68) )
          v2 = 1;
      }
LABEL_8:
      *a1 = v2;
    }
  }
}
