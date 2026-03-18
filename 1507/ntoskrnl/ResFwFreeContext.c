/*
 * XREFs of ResFwFreeContext @ 0x14075C040
 * Callers:
 *     BgFreeContext @ 0x14075C000 (BgFreeContext.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14012B94C (MmFreePagesFromMdl.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     BgpFwReservePoolSwap @ 0x14075C158 (BgpFwReservePoolSwap.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14075C87C (AnFwDisableBackgroundUpdateTimer.c)
 *     RaspClearCache @ 0x14075C96C (RaspClearCache.c)
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     TxtpDestroyCacheEntry @ 0x14075E7CC (TxtpDestroyCacheEntry.c)
 */

void __fastcall ResFwFreeContext(__int64 a1)
{
  _UNKNOWN **v2; // rax
  __int64 v3; // rcx
  struct _MDL *v4; // rcx

  if ( (dword_140323CF0 & 0x100000) != 0 )
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
    dword_140320C30 = 0;
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
    dword_140323CF0 &= 0xFFEFF7FD;
    qword_140323D80 = BgpAnimationRegionSave;
    qword_140323D88 = BgpTextRegionSave;
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
