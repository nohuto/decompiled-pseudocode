/*
 * XREFs of GreIsSemaphoreOwnedOrSharedByCurrentThread @ 0x1C0045720
 * Callers:
 *     UserReferenceDwmApiPort @ 0x1C000B010 (UserReferenceDwmApiPort.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00456A8 (CheckOrAcquireDwmStateLock.c)
 *     GreIsDwmStateLocked @ 0x1C00BDA50 (GreIsDwmStateLocked.c)
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
