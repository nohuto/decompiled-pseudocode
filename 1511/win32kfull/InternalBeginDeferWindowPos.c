/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C0075248
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C007606C (xxxSetWindowRgn.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0090E2C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01022D4 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C0149340 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D81F4 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     AllocateCvr @ 0x1C00757D0 (AllocateCvr.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
