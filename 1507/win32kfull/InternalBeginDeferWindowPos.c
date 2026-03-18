/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C008537C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0045678 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00847E8 (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C00F7CEC (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     AllocateCvr @ 0x1C0085650 (AllocateCvr.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall InternalBeginDeferWindowPos(unsigned int a1)
{
  void *v2; // rbx
  __int64 v4; // rax

  if ( (gdwPUDFlags & 0x40000000) == 0 && (signed int)a1 <= *((_DWORD *)&gSMWP + 8) )
  {
    gdwPUDFlags |= 0x40000000u;
    v2 = gSMWP;
    memset(gSMWP, 0, 0x20uLL);
    return v2;
  }
  v4 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v2 = (void *)v4;
  if ( v4 )
  {
    if ( (unsigned int)AllocateCvr(v4, a1) )
      return v2;
    Win32FreePool(v2);
  }
  return 0LL;
}
