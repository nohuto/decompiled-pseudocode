/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1C00A6808
 * Callers:
 *     xxxSetWindowRgn @ 0x1C00A592C (xxxSetWindowRgn.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00ABD4C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01252C8 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C014E1F0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     AllocateCvr @ 0x1C00A6890 (AllocateCvr.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void *__fastcall InternalBeginDeferWindowPos(unsigned int a1)
{
  void *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

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
    Win32FreePool(v2, v5, v6);
  }
  return 0LL;
}
