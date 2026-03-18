/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C016BA24
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmResetModeState @ 0x1C00CC0D8 (DmmResetModeState.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C0174B20 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v1 + 2232), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v1 + 2232), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(_QWORD *)(v1 + 2544), 0xFFFFFFFD);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL);
}
