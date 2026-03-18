/*
 * XREFs of newpathalloc @ 0x1C0028820
 * Callers:
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0025ADC (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0025C98 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

struct PATHALLOC *newpathalloc()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct PATHALLOC *v2; // rcx
  struct PATHALLOC *v3; // rbx
  struct PATHALLOC *v4; // rax
  HSEMAPHORE v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = PATHALLOC::hsemFreelist;
  EngAcquireSemaphore(PATHALLOC::hsemFreelist);
  v2 = PATHALLOC::freelist;
  v3 = 0LL;
  if ( PATHALLOC::freelist )
  {
    v4 = *(struct PATHALLOC **)PATHALLOC::freelist;
    --PATHALLOC::cFree;
    PATHALLOC::freelist = v4;
  }
  else
  {
    v2 = (struct PATHALLOC *)PALLOCMEM2(0xFC0uLL);
    if ( !v2 )
      goto LABEL_4;
    ++PATHALLOC::cAllocated;
  }
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = (char *)v2 + 24;
  v3 = v2;
  *((_DWORD *)v2 + 4) = 4032;
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v6, v0, v1);
  return v3;
}
