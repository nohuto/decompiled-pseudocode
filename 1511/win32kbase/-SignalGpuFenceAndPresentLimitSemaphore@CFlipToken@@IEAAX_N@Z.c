/*
 * XREFs of ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C003BE34
 * Callers:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C003BF70 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003C080 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CTokenBase@@@Z @ 0x1C003C264 (-Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N111W4TokenState@CToken.c)
 *     ?InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C00E3180 (-InOutOfFrameDirectFlip@CFlipToken@@UEAAJIPEA_N@Z.c)
 *     ?SignalFlipImmediate@CFlipToken@@UEAAXXZ @ 0x1C00E3250 (-SignalFlipImmediate@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0039CB4 (-ImmediateSignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     ?GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C003A1D4 (-GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z @ 0x1C003D404 (-SignalGpuFenceInternal@CTokenManager@@IEAAJU_LUID@@PEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(CFlipToken *this, char a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  int AdapterLuidAndGpuSync; // eax
  CPushLock *v9; // rcx
  int v10; // ebx
  CTokenManager *v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  struct CCompositionBuffer *v14; // [rsp+50h] [rbp+8h] BYREF
  struct _LUID v15; // [rsp+60h] [rbp+18h] BYREF

  if ( !*((_BYTE *)this + 48) )
  {
    v3 = *((_QWORD *)this + 14);
    if ( v3 > 1 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( *((_BYTE *)this + 89) )
          a2 = 1;
        if ( a2
          || (v6 = *((_QWORD *)this + 4),
              v7 = *((_QWORD *)this + 5),
              (int)CPushLock::AcquireLockShared((CPushLock *)(v6 + 32)) < 0)
          || (AdapterLuidAndGpuSync = CCompositionSurface::GetAdapterLuidAndGpuSync(
                                        (CCompositionSurface *)(v6 + 24),
                                        v7,
                                        &v15,
                                        (void **)&v14),
              v9 = (CPushLock *)(v6 + 32),
              v10 = AdapterLuidAndGpuSync,
              CPushLock::ReleaseLock(v9),
              v10 < 0)
          || !g_pTokenManager
          || (int)CTokenManager::SignalGpuFenceInternal(v11, v15, v14, v4) < 0 )
        {
          CompositionSurfaceObject::ImmediateSignalGpuFence(
            *((CompositionSurfaceObject **)this + 4),
            *((_QWORD *)this + 5),
            v4);
        }
      }
    }
  }
  *((_QWORD *)this + 14) = 0LL;
  if ( !*((_BYTE *)this + 97) )
  {
    v12 = *((_QWORD *)this + 5);
    *((_BYTE *)this + 97) = 1;
    v13 = *((_QWORD *)this + 4);
    if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v13 + 32)) >= 0 )
    {
      if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(v13 + 24), v12, &v14) >= 0 )
        (*(void (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v14 + 88LL))(v14);
      CPushLock::ReleaseLock((CPushLock *)(v13 + 32));
    }
  }
}
