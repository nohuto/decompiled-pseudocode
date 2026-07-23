/*
 * XREFs of ResFwFreeContext @ 0x140725050
 * Callers:
 *     BgFreeContext @ 0x140725010 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x1400996F0 (MmFreePagesFromMdl.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x140725168 (BgpFwReservePoolSwap.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140725854 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x140725934 (RaspClearCache.c)
 *     LogFwReport @ 0x1407259A0 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x1407276A0 (TxtpDestroyCacheEntry.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx
  struct _MDL *v4; // rcx

  if ( (dword_1402F9F90 & 0x100000) != 0 )
  {
    v2 = (_UNKNOWN **)TxtpTextCache;
    v3 = *(_QWORD *)TxtpTextCache;
    if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v3 + 8) != TxtpTextCache )
      __fastfail(3u);
    while ( 1 )
    {
      TxtpTextCache = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &TxtpTextCache;
      if ( v2 == &TxtpTextCache )
        break;
      TxtpDestroyCacheEntry(v2);
      v2 = (_UNKNOWN **)TxtpTextCache;
      v3 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache || *(_UNKNOWN **)(v3 + 8) != TxtpTextCache )
        __fastfail(3u);
    }
    dword_1402F36F0 = 0;
    if ( RasterizerInitialized )
      RaspClearCache();
    AnFwDisableBackgroundUpdateTimer();
    AnFwFadeCompletion();
    LogFwReport();
    if ( *(_QWORD *)(a1 + 16) )
    {
      BgpFwReservePoolSwap(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_1402F9F90 &= 0xFFEFF7FD;
    qword_1402FA040 = BgpAnimationRegionSave;
    qword_1402FA048 = BgpTextRegionSave;
    memset(&BgInternal, 0, 0x28uLL);
    ResFwBackgroundTransition(1LL);
  }
  else
  {
    v4 = *(struct _MDL **)(a1 + 8);
    if ( v4 )
    {
      MmFreePagesFromMdl(v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
