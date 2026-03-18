/*
 * XREFs of ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C025B198
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C012EAF8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GreGetRandomRgn @ 0x1C014BED0 (GreGetRandomRgn.c)
 *     GreGetDxRgn @ 0x1C025E870 (GreGetDxRgn.c)
 *     GreHintDxUpdate @ 0x1C025EE58 (GreHintDxUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C025B208 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
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
