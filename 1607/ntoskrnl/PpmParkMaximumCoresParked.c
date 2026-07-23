/*
 * XREFs of PpmParkMaximumCoresParked @ 0x1400AB84C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1400D2AE4 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  unsigned __int16 v0; // dx
  char i; // r8
  unsigned int v2; // r9d
  unsigned __int8 *v3; // rcx

  v0 = 0;
  for ( i = 1; v0 < (unsigned int)PpmParkNumNodes; ++v0 )
  {
    v2 = 0;
    v3 = (unsigned __int8 *)PpmParkNodes + 120 * v0 + 98;
    while ( v3[13] <= *v3 )
    {
      ++v2;
      ++v3;
      if ( v2 >= 2 )
        goto LABEL_5;
    }
    i = 0;
LABEL_5:
    ;
  }
  return i;
}
