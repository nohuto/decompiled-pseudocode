/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C000B010
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003430 (NtDCompositionRegisterThumbnailVisual.c)
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D4080 (NtDCompositionRegisterVirtualDesktopVisual.c)
 *     NtDCompositionSendDwmLpcMessage @ 0x1C00D41D0 (NtDCompositionSendDwmLpcMessage.c)
 * Callees:
 *     GreUnlockDwmState @ 0x1C000B340 (GreUnlockDwmState.c)
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0045720 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C0045760 (GreLockDwmState.c)
 */

PVOID UserReferenceDwmApiPort()
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v5; // rbx

  v0 = 0;
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemDwmState) )
  {
    GreLockDwmState();
    v0 = 1;
  }
  v5 = g_pDwmApiPort;
  if ( g_pDwmApiPort )
    ObfReferenceObject(g_pDwmApiPort);
  if ( v0 )
    GreUnlockDwmState(v2, v1, v3, v4);
  return v5;
}
