/*
 * XREFs of MultiUserCleanupPathAlloc @ 0x1C01353D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
HSEMAPHORE __fastcall MultiUserCleanupPathAlloc(__int64 a1, __int64 a2, __int64 a3)
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
    result = (HSEMAPHORE)Win32FreePool(PATHALLOC::freelist, PATHALLOC::freelist, a3);
  }
  return result;
}
