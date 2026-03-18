/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C0072820
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004710 (NtDCompositionRegisterThumbnailVisual.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D6090 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00374F0 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  PVOID v1; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v1 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState();
  return v1;
}
