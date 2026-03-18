/*
 * XREFs of ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0049E18
 * Callers:
 *     ??_GCFlipExBuffer@@MEAAPEAXI@Z @ 0x1C0049E70 (--_GCFlipExBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C0049358 (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ @ 0x1C0049480 (-SignalMaxGpuFence@CFlipExBuffer@@IEAAXXZ.c)
 */

void __fastcall CFlipExBuffer::~CFlipExBuffer(CFlipExBuffer *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  CFlipExBuffer::SignalMaxGpuFence(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  v2 = (void *)*((_QWORD *)this + 43);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 45);
  if ( v3 )
    ObfDereferenceObject(v3);
  CCompositionBuffer::~CCompositionBuffer(this);
}
