/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0033A80
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C000CB80 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(NEEDGRELOCK *this, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", *(_QWORD *)this, a3);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
}
