/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0033B40
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0034490 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)this = 0LL;
  v3 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v3 + 56) & 0x8000) == 0 )
  {
    *(_QWORD *)this = ghsemGreLock;
    EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsem", *(_QWORD *)this, 2);
  }
}
