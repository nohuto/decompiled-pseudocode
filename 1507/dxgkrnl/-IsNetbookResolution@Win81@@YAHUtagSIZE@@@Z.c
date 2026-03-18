/*
 * XREFs of ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C01649CC
 * Callers:
 *     ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C01647EC (-HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z.c)
 *     ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C0164968 (-IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Win81::IsNetbookResolution(Win81 *this, struct tagSIZE a2)
{
  return this == (Win81 *)0x25800000400LL;
}
