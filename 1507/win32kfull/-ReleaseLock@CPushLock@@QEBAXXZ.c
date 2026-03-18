/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C025E284
 * Callers:
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025E1A4 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C02D1660 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C02D16D4 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
