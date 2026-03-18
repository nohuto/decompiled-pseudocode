/*
 * XREFs of ?UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00A3E14
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E014C (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00489FC (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CompositionSurfaceObject::UpdateStats(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        const struct CSM_BUFFER_STATISTICS *a3)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    CCompositionSurface::UpdateStats((CompositionSurfaceObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
