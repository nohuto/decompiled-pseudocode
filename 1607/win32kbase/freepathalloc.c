/*
 * XREFs of freepathalloc @ 0x1C0047C90
 * Callers:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0047390 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  unsigned int v2; // edx
  HSEMAPHORE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v2 = PATHALLOC::cFree;
  if ( PATHALLOC::cFree >= 4 )
  {
    Win32FreePool();
    --PATHALLOC::cAllocated;
  }
  else
  {
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v2 + 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v3);
}
