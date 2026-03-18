/*
 * XREFs of GreDwmUseDeviceBitmaps @ 0x1401C3580
 * Callers:
 *     ?GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z @ 0x1401C306C (-GrepCreateBitmapFromDxSurface@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@IIKKHPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401C32E0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     IsDwmActive @ 0x14001C660 (IsDwmActive.c)
 */

__int64 __fastcall GreDwmUseDeviceBitmaps(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = 0;
  if ( IsDwmActive(a1) )
    return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 88LL);
  return v1;
}
