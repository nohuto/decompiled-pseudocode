/*
 * XREFs of ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C023C340
 * Callers:
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C2E4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NNDeleteAdjustIndex(unsigned int *a1, int a2)
{
  int v2; // eax

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = -1;
  }
  else if ( v2 > a2 )
  {
    *a1 = v2 - 1;
  }
}
