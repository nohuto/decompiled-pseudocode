/*
 * XREFs of HeadlessDispatch @ 0x14015F390
 * Callers:
 *     BgkDisplayStringEx @ 0x1401F1188 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1401F15D4 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x1401F17CC (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x1401F1818 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140202990 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x140202FDC (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x140595AB8 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall HeadlessDispatch(unsigned int a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !*(_QWORD *)(HeadlessGlobals + 8) )
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
