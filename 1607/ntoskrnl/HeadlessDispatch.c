/*
 * XREFs of HeadlessDispatch @ 0x14013C5A0
 * Callers:
 *     BgkDisplayStringEx @ 0x1401C3D58 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1401C40C8 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1401C42A8 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1401C42F4 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1401D4F9C (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1401D516C (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1401D55E4 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x140552DE0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
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
