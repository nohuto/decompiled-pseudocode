/*
 * XREFs of freepathalloc @ 0x1C00287C0
 * Callers:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C00261A0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall freepathalloc(struct PATHALLOC *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  HSEMAPHORE v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  if ( PATHALLOC::cFree >= 4 )
  {
    Win32FreePool(a1);
    --PATHALLOC::cAllocated;
  }
  else
  {
    v3 = PATHALLOC::cFree + 1;
    *(_QWORD *)a1 = PATHALLOC::freelist;
    PATHALLOC::freelist = a1;
    PATHALLOC::cFree = v3;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v4, v3, v2);
}
