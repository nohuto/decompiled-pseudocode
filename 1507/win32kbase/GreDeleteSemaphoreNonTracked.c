/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C006C924
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006C860 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
