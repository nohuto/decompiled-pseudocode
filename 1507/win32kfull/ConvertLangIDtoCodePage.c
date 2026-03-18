/*
 * XREFs of ConvertLangIDtoCodePage @ 0x1C0244C9C
 * Callers:
 *     bComputeIFISIZE @ 0x1C0158AD0 (bComputeIFISIZE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertLangIDtoCodePage(__int16 a1)
{
  unsigned __int16 v1; // dx

  v1 = 0;
  switch ( a1 )
  {
    case 1028:
      return 950;
    case 2052:
      return 936;
    case 3076:
      return 950;
    case 4100:
      return 936;
    case 5124:
      return 950;
  }
  return v1;
}
