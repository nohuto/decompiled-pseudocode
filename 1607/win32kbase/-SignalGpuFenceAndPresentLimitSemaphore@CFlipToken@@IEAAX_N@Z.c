/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C5B4
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C001C6B0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C001C790 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C001C8C0 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBase@@@Z @ 0x1C001C8C8 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N1W4TokenState@CTokenBa.c)
 * Callees:
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C001A79C (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C001C01C (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C001C088 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C0CC (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  CTokenManager *v4; // rcx
  __int64 v5; // rdx
  CompositionSurfaceObject *v6; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 13);
    if ( v2 > 1 )
    {
      v3 = v2 - 1;
      if ( (int)CompositionSurfaceObject::GetAdapterLuidAndGpuSync(
                  *((CompositionSurfaceObject **)this + 4),
                  *((_QWORD *)this + 5),
                  &v8,
                  &v7) < 0
        || !g_pTokenManager
        || (int)CTokenManager::SignalGpuFenceInternal(v4, v8, v7) < 0 )
      {
        CompositionSurfaceObject::ImmediateSignalGpuFence(
          *((CompositionSurfaceObject **)this + 4),
          *((_QWORD *)this + 5),
          v3);
      }
    }
  }
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v5 = *((_QWORD *)this + 5);
    v6 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v6, v5);
  }
}
