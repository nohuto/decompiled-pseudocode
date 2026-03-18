/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0075010
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005C034 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(struct _ERESOURCE **this)
{
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem");
    GreReleaseSemaphoreInternal(*this);
    *this = 0LL;
  }
}
