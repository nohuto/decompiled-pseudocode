/*
 * XREFs of ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025E1A4
 * Callers:
 *     GreGetRandomRgn @ 0x1C011DA40 (GreGetRandomRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C0152B5C (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetDxRgn @ 0x1C0262720 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C0262D08 (GreHintDxUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C025E284 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

AcquireDcVisRgnShared *__fastcall AcquireDcVisRgnShared::AcquireDcVisRgnShared(
        AcquireDcVisRgnShared *this,
        unsigned __int8 (__fastcall ***a2)(char *))
{
  CPushLock *v2; // rbx

  v2 = (CPushLock *)(a2 + 188);
  *(_QWORD *)this = a2;
  if ( (*a2[188])((char *)a2 + 1504) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v2)(v2) )
      CPushLock::ReleaseLock(v2);
  }
  return this;
}
