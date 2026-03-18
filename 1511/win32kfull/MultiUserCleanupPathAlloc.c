/*
 * XREFs of MultiUserCleanupPathAlloc @ 0x1C0114040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
HSEMAPHORE MultiUserCleanupPathAlloc()
{
  HSEMAPHORE result; // rax

  result = PATHALLOC::hsemFreelist;
  if ( PATHALLOC::hsemFreelist )
  {
    GreDeleteSemaphore(PATHALLOC::hsemFreelist);
    result = PATHALLOC::hsemFreelist;
    PATHALLOC::hsemFreelist = 0LL;
  }
  while ( PATHALLOC::freelist )
  {
    PATHALLOC::freelist = *(struct PATHALLOC **)PATHALLOC::freelist;
    result = (HSEMAPHORE)Win32FreePool(PATHALLOC::freelist);
  }
  return result;
}
