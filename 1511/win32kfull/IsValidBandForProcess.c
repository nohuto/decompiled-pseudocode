/*
 * XREFs of IsValidBandForProcess @ 0x1C0086DF0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     _DeferWindowPosAndBand @ 0x1C0074600 (_DeferWindowPosAndBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edx

  v6 = IsImmersiveBroker(a1);
  v7 = 0;
  if ( v6 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 776) & 0x30) == 0x10 )
  {
    if ( a2 == 1 )
      return gfEnableModernOnDesktop;
    return a2 == 4 || a2 == 6 || a2 > 7 && (a2 == 15 || a2 == 13 || a2 <= 11 || a2 > 16 && a2 <= 18);
  }
  if ( a2 == 1 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 776) & 2) == 0 && (!a3 || *(_DWORD *)(a3 + 304) != 2) )
    return 0LL;
  LOBYTE(v7) = a2 == 2;
  return v7;
}
