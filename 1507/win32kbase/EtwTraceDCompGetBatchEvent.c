/*
 * XREFs of EtwTraceDCompGetBatchEvent @ 0x1C00234E0
 * Callers:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0022DB0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDCompGetBatchEvent(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_p(a1, &DCompGetBatchEvent, &W32kControlGuid, a1);
  return result;
}
