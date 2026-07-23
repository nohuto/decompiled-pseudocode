/*
 * XREFs of KiIsKernelStackSwappable @ 0x1401DA794
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1401D2DD0 (KeTryToFreezeThreadStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsKernelStackSwappable(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x20) != 0 )
    return *(_BYTE *)(a1 + 195) < 25;
  return v1;
}
