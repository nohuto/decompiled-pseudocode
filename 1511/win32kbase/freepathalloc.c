/*
 * XREFs of freepathalloc @ 0x1C0070450
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C006FA50 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C006FF70 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
    Win32FreePool();
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
