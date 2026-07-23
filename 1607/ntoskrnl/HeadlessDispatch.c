/*
 * XREFs of HeadlessDispatch @ 0x14013CB10
 * Callers:
 *     BgkDisplayStringEx @ 0x1401C3C3C (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1401C3FAC (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1401C418C (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1401C41D8 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1401D4DC8 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1401D5410 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x140553320 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
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
