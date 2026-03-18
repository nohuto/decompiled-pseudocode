/*
 * XREFs of DpiFdoDestroyRelatedObjects @ 0x1C0167428
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C0168634 (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DmmResetModeState @ 0x1C00BD4A0 (DmmResetModeState.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C01702F0 (DpiGdoDestroyGdiObjects.c)
 */

__int64 __fastcall DpiFdoDestroyRelatedObjects(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v1 + 168));
  DpiGdoDestroyGdiObjects(a1);
  KeWaitForSingleObject((PVOID)(v1 + 2192), Executive, 0, 0, 0LL);
  KeReleaseMutex((PRKMUTEX)(v1 + 2192), 0);
  if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
  {
    DmmResetModeState(*(_QWORD *)(v1 + 2504), 0xFFFFFFFD);
    DpiReleaseCoreSyncAccessSafe(a1, 1);
  }
  return DpiPdoRemovePdoObjects(a1, 0LL);
}
