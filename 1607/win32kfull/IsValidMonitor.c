/*
 * XREFs of IsValidMonitor @ 0x1C00ACDA8
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidMonitor(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(gpDispInfo + 96LL); result; result = *(_QWORD *)(result + 16) )
  {
    if ( result == a1 )
      return 1LL;
  }
  return result;
}
