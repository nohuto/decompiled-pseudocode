/*
 * XREFs of BgpFwLibraryDisable @ 0x1406DC74C
 * Callers:
 *     BgLibraryDisable @ 0x1406DC66C (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x1406DC6A0 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x1406DC840 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1406DC910 (BgpFoDestroy.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax
  __int64 v1; // rcx

  result = (unsigned int)dword_1402D4BB0;
  if ( (dword_1402D4BB0 & 2) != 0 )
  {
    if ( (dword_1402D4BB0 & 0x1000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_1402D4C48 )
    {
      BgpTxtDestroyRegion(qword_1402D4C48);
      if ( BgpTextRegionSave == qword_1402D4C48 )
        BgpTextRegionSave = 0LL;
      qword_1402D4C48 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_1402D4C40 )
    {
      BgpTxtDestroyRegion(qword_1402D4C40);
      if ( BgpAnimationRegionSave == qword_1402D4C40 )
        BgpAnimationRegionSave = 0LL;
      qword_1402D4C40 = 0LL;
    }
    if ( qword_1402D4C28 )
    {
      BgpFoDestroy(qword_1402D4C28);
      v1 = qword_1402D4C28;
      if ( *(_QWORD *)qword_1402D4C28 )
      {
        if ( (*(_DWORD *)(qword_1402D4C28 + 12) & 1) == 0 )
        {
          BgpFwFreeMemory(*(_QWORD *)qword_1402D4C28);
          v1 = qword_1402D4C28;
        }
      }
      BgpFwFreeMemory(v1);
      qword_1402D4C28 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_1402D4BB0 &= ~2u;
  }
  return result;
}
