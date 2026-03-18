/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C001E6C8
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C001E740 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C001D8C0 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C001D8DC (-ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ.c)
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C001D958 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z @ 0x1C00F3D90 (-DisableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJPEAH@Z.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  bool v1; // zf
  void *v3; // rcx
  void *v4; // rcx

  v1 = *((_DWORD *)this + 89) == 0;
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  if ( !v1 )
    CFlipExBuffer::DisableDxgkrnlIndependentFlipMode(this, 0LL);
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  CFlipExBuffer::ReleaseHDR10MetaData(this);
  v3 = (void *)*((_QWORD *)this + 38);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = (void *)*((_QWORD *)this + 40);
  if ( v4 )
    ObfDereferenceObject(v4);
  CCompositionBuffer::~CCompositionBuffer(this);
}
