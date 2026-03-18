/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x14008D414
 * Callers:
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x14008D280 (DCELogicalSpeedTopLevelHitTest.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a1 + 24)
    && *(_DWORD *)(W32GetUserSessionState(a1, a2) + 66084)
    && *(_QWORD *)(W32GetUserSessionState(v5, v4) + 62968) != *(_QWORD *)(a1 + 24)
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 2
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 3
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 14
    && *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 17 )
  {
    return *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL) != 18;
  }
  return v2;
}
