/*
 * XREFs of newpathalloc @ 0x1C0047CF0
 * Callers:
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0046C0C (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0046E88 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

struct PATHALLOC *newpathalloc()
{
  struct PATHALLOC *v0; // rcx
  struct PATHALLOC *v1; // rbx
  struct PATHALLOC *v2; // rax
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v0 = PATHALLOC::freelist;
  v1 = 0LL;
  if ( PATHALLOC::freelist )
  {
    v2 = *(struct PATHALLOC **)PATHALLOC::freelist;
    --PATHALLOC::cFree;
    PATHALLOC::freelist = v2;
  }
  else
  {
    v0 = (struct PATHALLOC *)PALLOCMEM2(0xFC0uLL, 1952542791LL, 1);
    if ( !v0 )
      goto LABEL_4;
    ++PATHALLOC::cAllocated;
  }
  *(_QWORD *)v0 = 0LL;
  *((_QWORD *)v0 + 1) = (char *)v0 + 24;
  v1 = v0;
  *((_DWORD *)v0 + 4) = 4032;
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v4);
  return v1;
}
