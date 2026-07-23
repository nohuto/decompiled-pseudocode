/*
 * XREFs of BgpFwLibraryDisable @ 0x140728834
 * Callers:
 *     BgLibraryDisable @ 0x14072873C (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x1407259A0 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x140728928 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1407289F8 (BgpFoDestroy.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax
  __int64 v1; // rcx

  result = (unsigned int)dword_1402F9F90;
  if ( (dword_1402F9F90 & 2) != 0 )
  {
    if ( (dword_1402F9F90 & 0x1000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_1402FA048 )
    {
      BgpTxtDestroyRegion(qword_1402FA048);
      if ( BgpTextRegionSave == qword_1402FA048 )
        BgpTextRegionSave = 0LL;
      qword_1402FA048 = 0LL;
    }
    AnFwDisplayProgressIndicator(0);
    if ( qword_1402FA040 )
    {
      BgpTxtDestroyRegion(qword_1402FA040);
      if ( BgpAnimationRegionSave == qword_1402FA040 )
        BgpAnimationRegionSave = 0LL;
      qword_1402FA040 = 0LL;
    }
    if ( qword_1402FA028 )
    {
      BgpFoDestroy(qword_1402FA028);
      v1 = qword_1402FA028;
      if ( *(_QWORD *)qword_1402FA028 )
      {
        if ( (*(_DWORD *)(qword_1402FA028 + 12) & 1) == 0 )
        {
          BgpFwFreeMemory(*(_QWORD *)qword_1402FA028);
          v1 = qword_1402FA028;
        }
      }
      BgpFwFreeMemory(v1);
      qword_1402FA028 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_1402F9F90 &= ~2u;
  }
  return result;
}
