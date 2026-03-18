/*
 * XREFs of PopVerifySystemPowerState @ 0x14050A114
 * Callers:
 *     PopActionRetrieveInitialState @ 0x140119F98 (PopActionRetrieveInitialState.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x1404F71B8 (PopAdvanceSystemPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x14053E494 (PopVerifySystemPowerPolicy.c)
 *     PdcPoVerifyPowerState @ 0x140637AF4 (PdcPoVerifyPowerState.c)
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
            if ( byte_1402DDF66 && byte_1402DDF68 )
              goto LABEL_8;
            v2 = 4;
          }
          if ( v2 == 4 )
          {
            if ( HIBYTE(word_1402DDF64) )
              goto LABEL_8;
            v2 = 3;
          }
          if ( v2 == 3 )
          {
            if ( (_BYTE)word_1402DDF64 )
              goto LABEL_8;
            v2 = 2;
          }
          if ( v2 == 2 )
          {
            if ( byte_1402DDF63 )
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
          if ( byte_1402DDF63 )
            goto LABEL_8;
          v2 = 3;
        }
        if ( v2 == 3 )
        {
          if ( (_BYTE)word_1402DDF64 )
            goto LABEL_8;
          v2 = 4;
        }
        if ( v2 == 4 )
        {
          if ( HIBYTE(word_1402DDF64) )
            goto LABEL_8;
          v2 = 5;
        }
        if ( v2 == 5 && (!v3 || !byte_1402DDF66 || !byte_1402DDF68) )
          v2 = 1;
      }
LABEL_8:
      *a1 = v2;
    }
  }
}
