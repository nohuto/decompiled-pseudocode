/*
 * XREFs of EngAcquireSemaphoreSharedNoWait @ 0x1C00BEB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngAcquireSemaphoreSharedNoWait(PERESOURCE Resource)
{
  unsigned int v1; // ebx
  BOOLEAN v3; // al
  __int64 v4; // rcx

  v1 = 0;
  if ( Resource )
  {
    PsEnterPriorityRegion(Resource);
    KeEnterCriticalRegion();
    v3 = ExAcquireResourceSharedLite(Resource, 0);
    v1 = v3;
    if ( !v3 )
    {
      KeLeaveCriticalRegion();
      PsLeavePriorityRegion(v4);
    }
  }
  return v1;
}
