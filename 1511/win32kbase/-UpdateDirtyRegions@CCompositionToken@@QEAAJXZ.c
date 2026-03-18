/*
 * XREFs of ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C003F1D8
 * Callers:
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003EE50 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00E0ABC (-NotifyCompositionBuffersOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C003A024 (-UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::UpdateDirtyRegions(CCompositionToken *this)
{
  int updated; // esi
  unsigned int i; // ebx
  _QWORD *v4; // rax
  __int64 v5; // rbp
  const struct CRegion *v6; // r15
  __int64 v7; // r12

  updated = 0;
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *))this)(this) )
  {
    for ( i = 0; i < *((_DWORD *)this + 20); ++i )
    {
      if ( updated < 0 )
        break;
      v4 = (_QWORD *)(*((_QWORD *)this + 9) + 32LL * i);
      v5 = v4[1];
      v6 = (const struct CRegion *)v4[3];
      v7 = v4[2];
      updated = CPushLock::AcquireLockExclusive((CPushLock *)(v5 + 32));
      if ( updated >= 0 )
      {
        updated = CCompositionSurface::UpdateActiveBufferDirtyRegion((CCompositionSurface *)(v5 + 24), v7, v6);
        CPushLock::ReleaseLock((CPushLock *)(v5 + 32));
      }
    }
  }
  return (unsigned int)updated;
}
