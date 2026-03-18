/*
 * XREFs of UserReferenceDwmApiPort @ 0x1C001F5C0
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004970 (NtDCompositionRegisterThumbnailVisual.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     ?DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z @ 0x1C00E31F4 (-DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C001D850 (GreIsSemaphoreOwnedOrSharedByCurrentThread.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
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
  if ( !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread((PERESOURCE)ghsemDwmState) )
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
