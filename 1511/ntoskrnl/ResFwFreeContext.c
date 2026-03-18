/*
 * XREFs of ResFwFreeContext @ 0x1406D9204
 * Callers:
 *     BgFreeContext @ 0x1406D91C4 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140011F04 (MmFreePagesFromMdl.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x1406D931C (BgpFwReservePoolSwap.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1406D9834 (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x1406D9924 (RaspClearCache.c)
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x1406D9C2C (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x1406DB784 (TxtpDestroyCacheEntry.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx
  struct _MDL *v4; // rcx

  if ( (dword_1402D4BB0 & 0x100000) != 0 )
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
    dword_1402D1A50 = 0;
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
    dword_1402D4BB0 &= 0xFFEFF7FD;
    qword_1402D4C40 = BgpAnimationRegionSave;
    qword_1402D4C48 = BgpTextRegionSave;
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
