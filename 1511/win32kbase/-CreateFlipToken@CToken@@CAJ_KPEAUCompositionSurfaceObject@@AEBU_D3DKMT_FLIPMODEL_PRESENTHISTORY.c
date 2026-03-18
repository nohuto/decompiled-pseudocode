/*
 * XREFs of ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00394AC
 * Callers:
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00392F0 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0B1C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0039510 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0039CB4 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00A88C4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

__int64 __fastcall CToken::CreateFlipToken(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CToken **a4)
{
  int v8; // ebp
  struct CFlipToken *v10; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  v8 = -1073741811;
  if ( (a3->Flags.Value & 0x40) != 0 || (v8 = CFlipToken::CreateCompleted(a1, this, a3, &v10), v8 < 0) )
  {
    CompositionSurfaceObject::ImmediateSignalGpuFence(this, a1, a3->FenceValue);
    if ( a3->PresentLimitSemaphoreId )
      CompositionSurfaceObject::SignalPresentLimitSemaphore(this, a1);
  }
  else
  {
    *a4 = v10;
  }
  return (unsigned int)v8;
}
