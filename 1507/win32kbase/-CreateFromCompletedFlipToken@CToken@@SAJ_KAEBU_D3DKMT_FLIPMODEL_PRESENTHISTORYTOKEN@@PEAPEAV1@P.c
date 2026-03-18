/*
 * XREFs of ?CreateFromCompletedFlipToken@CToken@@SAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@PEA_N@Z @ 0x1C0047824
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0046FD8 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     ?CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0047964 (-CreateFlipToken@CToken@@CAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B3DC8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?SetEnteredIndependentFlip@CompositionSurfaceObject@@QEAAJ_K@Z @ 0x1C00E0A24 (-SetEnteredIndependentFlip@CompositionSurfaceObject@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CToken::CreateFromCompletedFlipToken(
        unsigned __int64 a1,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        struct CToken **a3,
        bool *a4)
{
  void *hCompSurf; // r13
  char v5; // bl
  struct CToken **v7; // r12
  int FlipToken; // edi
  char *v11; // rsi
  char v12; // bp
  struct CToken *v13; // rax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  hCompSurf = (void *)a2->hCompSurf;
  v5 = 0;
  *a4 = 0;
  v7 = a3;
  *a3 = 0LL;
  Object = 0LL;
  LOBYTE(a3) = 1;
  FlipToken = CompositionObject::ResolveHandle(hCompSurf, 2LL, a3);
  if ( FlipToken >= 0 )
  {
    v11 = (char *)Object;
    FlipToken = CToken::CreateFlipToken(a1, (struct CompositionSurfaceObject *)Object, a2, v7);
    if ( FlipToken >= 0 )
    {
      if ( (a2->Flags.Value & 0x2000) != 0 )
      {
        *a4 = *((_BYTE *)*v7 + 90);
        CompositionSurfaceObject::SetEnteredIndependentFlip((CompositionSurfaceObject *)v11, a1);
      }
      else
      {
        v12 = 0;
        FlipToken = CPushLock::AcquireLockShared((CPushLock *)(v11 + 32));
        if ( FlipToken >= 0 )
        {
          if ( (int)CCompositionSurface::FindBuffer(
                      (CCompositionSurface *)(v11 + 24),
                      a1,
                      (struct CCompositionBuffer **)&Object) < 0 )
            v12 = 0;
          else
            v12 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Object + 104LL))(Object);
          if ( (int)CCompositionSurface::FindBuffer(
                      (CCompositionSurface *)(v11 + 24),
                      a1,
                      (struct CCompositionBuffer **)&Object) >= 0 )
            v5 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Object + 112LL))(Object);
          CPushLock::ReleaseLock((CPushLock *)(v11 + 32));
        }
        v13 = *v7;
        *((_BYTE *)v13 + 88) = v5;
        *((_BYTE *)v13 + 89) = v12;
      }
    }
    ObfDereferenceObject(v11);
    if ( (a2->Flags.Value & 0x2000) == 0 )
      ObCloseHandle(hCompSurf, 1);
  }
  return (unsigned int)FlipToken;
}
