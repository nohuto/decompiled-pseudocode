/*
 * XREFs of BgpFwLibraryDisable @ 0x14075F794
 * Callers:
 *     BgLibraryDisable @ 0x14075F6B4 (BgLibraryDisable.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14075C87C (AnFwDisableBackgroundUpdateTimer.c)
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     BgpTxtDestroyRegion @ 0x14075F888 (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x14075F958 (BgpFoDestroy.c)
 */

unsigned __int64 BgpFwLibraryDisable()
{
  unsigned __int64 result; // rax
  __int64 v1; // rcx

  result = (unsigned int)dword_140323CF0;
  if ( (dword_140323CF0 & 2) != 0 )
  {
    if ( (dword_140323CF0 & 0x1000000) != 0 )
      AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    if ( qword_140323D88 )
    {
      BgpTxtDestroyRegion(qword_140323D88);
      if ( BgpTextRegionSave == qword_140323D88 )
        BgpTextRegionSave = 0LL;
      qword_140323D88 = 0LL;
    }
    AnFwDisplayProgressIndicator(0LL);
    if ( qword_140323D80 )
    {
      BgpTxtDestroyRegion(qword_140323D80);
      if ( BgpAnimationRegionSave == qword_140323D80 )
        BgpAnimationRegionSave = 0LL;
      qword_140323D80 = 0LL;
    }
    if ( qword_140323D68 )
    {
      BgpFoDestroy(qword_140323D68);
      v1 = qword_140323D68;
      if ( *(_QWORD *)qword_140323D68 )
      {
        if ( (*(_DWORD *)(qword_140323D68 + 12) & 1) == 0 )
        {
          BgpFwFreeMemory(*(_QWORD *)qword_140323D68);
          v1 = qword_140323D68;
        }
      }
      BgpFwFreeMemory(v1);
      qword_140323D68 = 0LL;
    }
    LogFwReport();
    ResFwBackgroundTransition(1);
    result = (unsigned __int64)memset(&BgInternal, 0, 0x28uLL);
    dword_140323CF0 &= ~2u;
  }
  return result;
}
