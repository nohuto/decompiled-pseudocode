/*
 * XREFs of ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964
 * Callers:
 *     ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@PEA_N@Z @ 0x1C0047824 (-CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@P.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00DED0C (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00479C8 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C00484F4 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00E127C (-CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENT.c)
 */

__int64 __fastcall CToken::CreateFlipToken(
        unsigned __int64 a1,
        struct CompositionSurfaceObject *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a3,
        struct CToken **a4)
{
  int v8; // r14d
  struct CScatterToken *v10; // [rsp+50h] [rbp+18h] BYREF

  *a4 = 0LL;
  if ( (a3->Flags.Value & 0x40) != 0 )
  {
    v8 = CScatterToken::CreateCompleted(a1, this, a3, &v10);
    if ( v8 >= 0 )
    {
      *a4 = v10;
      return (unsigned int)v8;
    }
  }
  else
  {
    v8 = CFlipToken::CreateCompleted(a1, this, a3, &v10);
    if ( v8 >= 0 )
    {
      *a4 = v10;
      return (unsigned int)v8;
    }
  }
  CompositionSurfaceObject::SignalGpuFence(this, a1, a3->FenceValue);
  if ( a3->PresentLimitSemaphoreId )
    CompositionSurfaceObject::SignalPresentLimitSemaphore(this, a1);
  return (unsigned int)v8;
}
