/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1400D2AE4
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfMinimumPerfReached @ 0x1400A8C74 (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x1400AB84C (PpmParkMaximumCoresParked.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14020CD0C (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 v3; // dx
  _QWORD *v4; // r9
  __int64 v5; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]
  ULONG v8; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckMakeupCount )
  {
    if ( PpmParkMaximumCoresParked() && PpmPerfMinimumPerfReached() )
    {
      v6[1] = qword_1402F8878;
      v6[0] = &PpmCheckRegistered;
      v7 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v6) )
      {
        v1 = *(_QWORD **)(KeGetPrcb(v8) + 24168);
        if ( v1 )
        {
          v1[1] = v1[3];
          *v1 = v1[4];
        }
      }
      v2 = PpmParkNumNodes;
      v3 = 0;
      if ( PpmParkNumNodes )
      {
        v4 = PpmParkNodes;
        do
        {
          v5 = v3++;
          v4[15 * v5 + 11] = v4[15 * v5 + 10];
        }
        while ( v3 < v2 );
      }
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 3;
    }
  }
  return 1;
}
