/*
 * XREFs of ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00A8988
 * Callers:
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CToken.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0B1C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E2FD0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E3180 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C003A480 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::NotifyTokenInFrame(
        CompositionSurfaceObject *this,
        const struct CToken *a2,
        bool *a3)
{
  int v6; // ebx

  *a3 = 0;
  v6 = CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32));
  if ( v6 >= 0 )
  {
    v6 = CCompositionSurface::NotifyTokenInFrame((CompositionSurfaceObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)v6;
}
