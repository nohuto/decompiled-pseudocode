/*
 * XREFs of ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C02D1660
 * Callers:
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D6F80 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C025E284 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

AcquireDcVisRgnExclusive *__fastcall AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive(
        AcquireDcVisRgnExclusive *this,
        unsigned __int8 (__fastcall ***a2)(char *))
{
  CPushLock *v2; // rbx

  v2 = (CPushLock *)(a2 + 188);
  *(_QWORD *)this = a2;
  if ( (*a2[188])((char *)a2 + 1504) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)v2 + 8, 0LL);
    *((_QWORD *)v2 + 2) = KeGetCurrentThread();
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v2)(v2) )
      CPushLock::ReleaseLock(v2);
  }
  return this;
}
