/*
 * XREFs of ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C001C1F4
 * Callers:
 *     ?AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z @ 0x1C001BE30 (-AddToken@CTokenQueue@@QEAAXPEAVCToken@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C001C790 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00F4498 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00F4ED0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CompositionSurfaceObject::SetSyncRefreshCount(CompositionSurfaceObject *this, int a2)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    *((_DWORD *)this + 27) = a2;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
