/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C001FC78
 * Callers:
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C001FD10 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C001FDA0 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C001B470 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int v1; // ebx
  unsigned int i; // edi
  _QWORD *v4; // rax
  __int64 v5; // r14
  const struct CRegion *v6; // r12
  unsigned __int64 v7; // r13
  int updated; // ebp

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
    v5 = v4[1];
    v6 = (const struct CRegion *)v4[3];
    v7 = v4[2];
    updated = CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 32));
    if ( updated >= 0 )
    {
      updated = CCompositionSurface::UpdateBufferDirtyRegion((CCompositionSurface *)(v5 + 24), v7, v6);
      CPushLock::ReleaseLock((CPushLock *)(v5 + 32));
    }
    if ( v1 >= 0 && updated < 0 )
      v1 = updated;
  }
  return (unsigned int)v1;
}
