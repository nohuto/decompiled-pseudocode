/*
 * XREFs of ?ENTER_GRE_DWM_CRIT@@YAXVPDEVOBJ@@PEAH@Z @ 0x1C00667FC
 * Callers:
 *     GreSfmCloseCompositorRef @ 0x1C00665AC (GreSfmCloseCompositorRef.c)
 *     GreDesktopSwitch @ 0x1C0094978 (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x1C00EE780 (GreDwmShutdown.c)
 *     GreDwmStartup @ 0x1C00EE868 (GreDwmStartup.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EF478 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENTER_GRE_DWM_CRIT(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(ghsemDynamicModeChange)
    && !ExIsResourceAcquiredSharedLite(ghsemDynamicModeChange) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *a2 = 1;
  }
  GreAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  GreAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", *(_QWORD *)(a1 + 72), 4LL);
  GreAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  GreAcquireSemaphore(*(_QWORD *)(a1 + 64));
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(a1 + 64), 11LL);
}
