/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C006CE04
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006A050 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
