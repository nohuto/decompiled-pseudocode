/*
 * XREFs of ?UpdateStatsAndCustomPresentDuration@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C00E28C0
 * Callers:
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C00E2094 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CompositionSurfaceObject::UpdateStatsAndCustomPresentDuration(
        CompositionSurfaceObject *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3,
        int a4)
{
  struct CCompositionBuffer *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  struct CCompositionBuffer *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 24), a2, &v11) >= 0 )
    {
      v8 = v11;
      v9 = *(_OWORD *)a3;
      v10 = *((_OWORD *)a3 + 1);
      *((_BYTE *)v11 + 264) = 1;
      *(_OWORD *)((char *)v8 + 232) = v9;
      *((_DWORD *)v8 + 57) = a4;
      *(_OWORD *)((char *)v8 + 248) = v10;
    }
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
