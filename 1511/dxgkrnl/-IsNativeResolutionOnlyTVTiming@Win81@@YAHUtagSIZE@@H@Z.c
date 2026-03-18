/*
 * XREFs of ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C0168E98
 * Callers:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C0168D1C (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z.c)
 * Callees:
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C0168EFC (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::IsNativeResolutionOnlyTVTiming(Win81 *this, struct tagSIZE a2)
{
  int IsNetbookResolution; // eax
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ecx

  if ( SHIDWORD(this) >= 768 )
    return a2.cx && this == (Win81 *)0x43800000780LL;
  IsNetbookResolution = Win81::IsNetbookResolution(this, a2);
  v5 = 0;
  if ( !IsNetbookResolution && (v3 != 800 || v4 != 600) )
    return 1;
  return v5;
}
