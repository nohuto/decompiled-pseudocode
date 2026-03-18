/*
 * XREFs of IsValidBand @ 0x140208510
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBand(int a1)
{
  unsigned int v1; // r8d
  unsigned int i; // edx

  v1 = 0;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( dword_140360D20[i] == a1 )
      return 1;
  }
  return v1;
}
