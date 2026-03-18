/*
 * XREFs of IsValidMonitor @ 0x1C0091744
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0091108 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00913BC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
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
