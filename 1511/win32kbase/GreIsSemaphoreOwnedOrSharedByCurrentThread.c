/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C00374F0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0037478 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     GreIsDwmStateLocked @ 0x1C00BF1C0 (GreIsDwmStateLocked.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreIsSemaphoreOwnedOrSharedByCurrentThread(PERESOURCE Resource)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(Resource) || ExIsResourceAcquiredSharedLite(Resource) )
    return 1;
  return v2;
}
