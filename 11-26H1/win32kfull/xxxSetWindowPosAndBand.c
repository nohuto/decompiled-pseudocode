/*
 * XREFs of xxxSetWindowPosAndBand @ 0x140049010
 * Callers:
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x140049970 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x140179454 (InternalBeginDeferWindowPos.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1401B8CFC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1402CAD94 (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall xxxSetWindowPosAndBand(
        struct tagWND *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v11; // rax
  struct tagSMWP *v12; // rax
  _BOOL8 result; // rax

  if ( (a7 & 0x80u) != 0 && *((struct tagTHREADINFO **)a1 + 2) == PtiCurrent((__int64)a1) && IsWindowGhosted(a1) )
    xxxHandleHealthyWindow(a1);
  v11 = InternalBeginDeferWindowPos(1LL);
  result = 0;
  if ( v11 )
  {
    v12 = (struct tagSMWP *)_DeferWindowPos(v11, a1, a2, a3, a4, a5, a6, a7, 0);
    if ( v12 )
    {
      if ( (unsigned int)xxxEndDeferWindowPosEx(v12, a7 & 0x4000) )
        return 1;
    }
  }
  return result;
}
