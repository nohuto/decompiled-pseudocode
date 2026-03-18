/*
 * XREFs of ?UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C003A024
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C003F1D8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C003E808 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UpdateActiveBufferDirtyRegion(
        CCompositionSurface *a1,
        __int64 a2,
        const struct CRegion *a3)
{
  unsigned int v4; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v6; // rdx
  struct CCompositionBuffer *v7; // rdi
  int v8; // eax
  CCompositionBuffer *v9; // rcx

  v4 = 0;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(a1);
  v7 = ActiveBuffer;
  if ( ActiveBuffer
    && *((_QWORD *)ActiveBuffer + 2) == v6
    && (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)ActiveBuffer + 8LL))(ActiveBuffer) == 2 )
  {
    v8 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v7 + 8LL))(v7);
    v9 = 0LL;
    if ( v8 == 2 )
      v9 = v7;
    if ( *((_DWORD *)v9 + 96) == -1 )
      *((_DWORD *)v9 + 96) = 0;
    *((_DWORD *)v9 + 12) = 1;
    CCompositionBuffer::NotifyDirty(v9, a3, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
