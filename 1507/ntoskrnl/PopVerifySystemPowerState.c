/*
 * XREFs of PopVerifySystemPowerState @ 0x140580970
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14014800C (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x1405654E8 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x1405659A0 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x140599A44 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x1406B784C (PdcPoVerifyPowerState.c)
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
            goto LABEL_10;
        }
        else
        {
          if ( v2 == 5 )
          {
            if ( byte_14032E526 && byte_14032E528 )
              goto LABEL_10;
            v2 = 4;
          }
          if ( v2 == 4 )
          {
            if ( HIBYTE(word_14032E524) )
              goto LABEL_10;
            v2 = 3;
          }
          if ( v2 == 3 )
          {
            if ( (_BYTE)word_14032E524 )
              goto LABEL_10;
            v2 = 2;
          }
          if ( v2 == 2 )
          {
            if ( byte_14032E523 )
              goto LABEL_10;
            v2 = 1;
          }
          if ( v2 != 1 || a2 != 1 )
            goto LABEL_10;
          v3 = 0;
          v2 = 2;
        }
        if ( v2 == 2 )
        {
          if ( byte_14032E523 )
            goto LABEL_10;
          v2 = 3;
        }
        if ( v2 == 3 )
        {
          if ( (_BYTE)word_14032E524 )
            goto LABEL_10;
          v2 = 4;
        }
        if ( v2 == 4 )
        {
          if ( HIBYTE(word_14032E524) )
            goto LABEL_10;
          v2 = 5;
        }
        if ( v2 == 5 && (!v3 || !byte_14032E526 || !byte_14032E528) )
          v2 = 1;
      }
LABEL_10:
      *a1 = v2;
    }
  }
}
