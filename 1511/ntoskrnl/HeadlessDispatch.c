/*
 * XREFs of HeadlessDispatch @ 0x1401340E0
 * Callers:
 *     BgkDisplayStringEx @ 0x1401B627C (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1401B65F0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1401B67D0 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1401B681C (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1401C5E48 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1401C6494 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1405256A0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall HeadlessDispatch(unsigned int a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( a1 == 21 || a1 == 1 )
      return 3221225473LL;
    if ( a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch();
}
