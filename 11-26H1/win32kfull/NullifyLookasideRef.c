/*
 * XREFs of NullifyLookasideRef @ 0x140294154
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 *     xxxMNStartMenuState @ 0x1402D09E8 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

void __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v1; // zf
  void *CurrentWin32kStackRefLookAside; // rax

  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
  {
    CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
    Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, a1);
  }
}
