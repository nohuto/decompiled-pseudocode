/*
 * XREFs of ?SignalPresentLimitSemaphore@CFlipToken@@IEAAXXZ @ 0x1C00A40B8
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E1090 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?SignalDirectFlipFence@CFlipToken@@UEAAXXZ @ 0x1C00E1140 (-SignalDirectFlipFence@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00484F4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

void __fastcall CFlipToken::SignalPresentLimitSemaphore(CFlipToken *this)
{
  unsigned __int64 v1; // rdx

  if ( !*((_BYTE *)this + 97) )
  {
    v1 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 97) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(*((CompositionSurfaceObject **)this + 4), v1);
  }
}
